
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int packetAliasMode; } ;
struct in_addr {int dummy; } ;
struct ip {int ip_hl; int ip_p; int ip_sum; int ip_id; struct in_addr ip_dst; int ip_src; int ip_off; int ip_len; } ;
struct alias_link {int dummy; } ;
struct alias_data {int maxpktsize; int * dport; int * sport; int * aport; int * aaddr; int * oaddr; int * lnk; } ;


 int FUNC_0 (struct libalias*) ;
 struct alias_link* FUNC_1 (struct libalias*,int ,struct in_addr,int ) ;
 int FUNC_2 (struct libalias*,int ,struct in_addr*,int ,int *) ;
 int FUNC_3 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct libalias*,struct ip*) ;
 int FUNC_5 (struct libalias*,char*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct libalias*,int ,struct in_addr*,int,int *) ;
 int VAR_9 ;
 int FUNC_7 (struct libalias*,struct ip*,int ) ;
 int FUNC_8 (struct alias_link*,struct in_addr) ;
 int FUNC_9 (struct libalias*,struct ip*) ;
 int FUNC_10 (struct libalias*,struct ip*) ;
 int FUNC_11 (int ,int ,struct libalias*,struct ip*,struct alias_data*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(struct libalias *VAR_10, char *VAR_11, int VAR_12)
{
 struct in_addr VAR_13;
 struct ip *VAR_14;
 int VAR_15;

 if (VAR_10->packetAliasMode & VAR_8) {
  VAR_10->packetAliasMode &= ~VAR_8;
  VAR_15 = FUNC_5(VAR_10, VAR_11, VAR_12, 1);
  VAR_10->packetAliasMode |= VAR_8;
  goto getout;
 }
 FUNC_3(VAR_10);
 FUNC_0(VAR_10);
 VAR_14 = (struct ip *)VAR_11;
 VAR_13 = VAR_14->ip_dst;


 if (FUNC_12(VAR_14->ip_len) > VAR_12
     || (VAR_14->ip_hl << 2) > VAR_12) {
  VAR_15 = VAR_6;
  goto getout;
 }

 VAR_15 = VAR_6;
 if ((FUNC_12(VAR_14->ip_off) & VAR_3) == 0) {
  switch (VAR_14->ip_p) {
  case 131:
   VAR_15 = FUNC_4(VAR_10, VAR_14);
   break;
  case 128:
   VAR_15 = FUNC_10(VAR_10, VAR_14);
   break;
  case 129:
   VAR_15 = FUNC_9(VAR_10, VAR_14);
   break;





   case 132: {
   int VAR_16;
   struct alias_data VAR_17 = {
    .lnk = ((void*)0),
    .oaddr = ((void*)0),
    .aaddr = ((void*)0),
    .aport = ((void*)0),
    .sport = ((void*)0),
    .dport = ((void*)0),
    .maxpktsize = 0
   };


   VAR_16 = FUNC_11(VAR_0, VAR_1, VAR_10, VAR_14, &VAR_17);
   if (VAR_16 == 0)
    VAR_15 = VAR_7;
   else
    VAR_15 = FUNC_6(VAR_10, VAR_14->ip_src,
        &VAR_14->ip_dst, VAR_14->ip_p, &VAR_14->ip_sum);
  }
    break;
  default:
   VAR_15 = FUNC_6(VAR_10, VAR_14->ip_src, &VAR_14->ip_dst,
       VAR_14->ip_p, &VAR_14->ip_sum);
   break;
  }

  if (FUNC_12(VAR_14->ip_off) & VAR_2) {
   struct alias_link *VAR_18;

   VAR_18 = FUNC_1(VAR_10, VAR_14->ip_src, VAR_13, VAR_14->ip_id);
   if (VAR_18 != ((void*)0)) {
    VAR_15 = VAR_5;
    FUNC_8(VAR_18, VAR_14->ip_dst);
   } else {
    VAR_15 = VAR_4;
   }
  }
 } else {
  VAR_15 = FUNC_2(VAR_10, VAR_14->ip_src, &VAR_14->ip_dst, VAR_14->ip_id,
      &VAR_14->ip_sum);
 }

getout:
 return (VAR_15);
}

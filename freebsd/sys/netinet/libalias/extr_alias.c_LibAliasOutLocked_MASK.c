
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct libalias {int packetAliasMode; } ;
struct in_addr {int s_addr; } ;
struct ip {int ip_hl; int ip_p; int ip_sum; struct in_addr ip_src; int ip_dst; int ip_off; int ip_len; } ;
struct alias_data {int maxpktsize; int * dport; int * sport; int * aport; int * aaddr; int * oaddr; int * lnk; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct libalias*,struct in_addr*,int *) ;
 struct in_addr FUNC_2 (struct libalias*) ;
 int FUNC_3 (struct libalias*) ;
 int VAR_0 ;





 int VAR_1 ;
 int FUNC_4 (struct libalias*,struct ip*,int) ;
 int FUNC_5 (struct libalias*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct libalias*,struct in_addr*,int ,int,int *,int) ;
 int VAR_8 ;
 int FUNC_7 (struct libalias*,struct ip*,int ) ;
 int FUNC_8 (struct libalias*,struct in_addr) ;
 int FUNC_9 (struct libalias*,struct ip*,int,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (struct libalias*,struct ip*,int,int) ;
 int FUNC_11 (int ,int ,struct libalias*,struct ip*,struct alias_data*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(struct libalias *VAR_15, char *VAR_16,
    int VAR_17,

    int VAR_18
)
{
 int VAR_19;
 struct in_addr VAR_20;
 struct ip *VAR_21;

 if (VAR_15->packetAliasMode & VAR_6) {
  VAR_15->packetAliasMode &= ~VAR_6;
  VAR_19 = FUNC_5(VAR_15, VAR_16, VAR_17);
  VAR_15->packetAliasMode |= VAR_6;
  goto getout;
 }
 FUNC_3(VAR_15);
 FUNC_0(VAR_15);
 VAR_21 = (struct ip *)VAR_16;


 if (FUNC_13(VAR_21->ip_len) > VAR_17
     || (VAR_21->ip_hl << 2) > VAR_17) {
  VAR_19 = VAR_3;
  goto getout;
 }

 VAR_20 = FUNC_2(VAR_15);
 if (VAR_15->packetAliasMode & VAR_7) {
  u_long VAR_22;
  int VAR_23;

  VAR_23 = 0;
  VAR_22 = FUNC_12(VAR_21->ip_src.s_addr);
  if (VAR_22 >= VAR_13 && VAR_22 <= VAR_14)
   VAR_23 = 3;
  else if (VAR_22 >= VAR_11 && VAR_22 <= VAR_12)
   VAR_23 = 2;
  else if (VAR_22 >= VAR_9 && VAR_22 <= VAR_10)
   VAR_23 = 1;

  if (VAR_23 == 0) {
   FUNC_8(VAR_15, VAR_21->ip_src);
  }
 } else if (VAR_15->packetAliasMode & VAR_5) {
  FUNC_8(VAR_15, VAR_21->ip_src);
 }
 VAR_19 = VAR_3;
 if ((FUNC_13(VAR_21->ip_off) & VAR_1) == 0) {
  switch (VAR_21->ip_p) {
  case 131:
   VAR_19 = FUNC_4(VAR_15, VAR_21, VAR_18);
   break;
  case 128:
   VAR_19 = FUNC_10(VAR_15, VAR_21, VAR_17, VAR_18);
   break;
  case 129:
   VAR_19 = FUNC_9(VAR_15, VAR_21, VAR_17, VAR_18);
   break;





  case 132: {
   int VAR_24;
   struct alias_data VAR_25 = {
    .lnk = ((void*)0),
    .oaddr = ((void*)0),
    .aaddr = ((void*)0),
    .aport = ((void*)0),
    .sport = ((void*)0),
    .dport = ((void*)0),
    .maxpktsize = 0
   };

   VAR_24 = FUNC_11(VAR_2, VAR_0, VAR_15, VAR_21, &VAR_25);
   if (VAR_24 == 0)
     VAR_19 = VAR_4;
    else
     VAR_19 = FUNC_6(VAR_15, &VAR_21->ip_src,
        VAR_21->ip_dst, VAR_21->ip_p, &VAR_21->ip_sum, VAR_18);
  }
    break;
  default:
   VAR_19 = FUNC_6(VAR_15, &VAR_21->ip_src,
       VAR_21->ip_dst, VAR_21->ip_p, &VAR_21->ip_sum, VAR_18);
   break;
  }
 } else {
  VAR_19 = FUNC_1(VAR_15, &VAR_21->ip_src, &VAR_21->ip_sum);
 }

 FUNC_8(VAR_15, VAR_20);
getout:
 return (VAR_19);
}

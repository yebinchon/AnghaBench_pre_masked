
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct tcphdr {int th_off; int th_x2; scalar_t__ th_sum; int th_seq; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct libalias {scalar_t__ true_port; TYPE_2__ true_addr; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct ip {int ip_hl; int ip_len; int ip_sum; TYPE_1__ ip_src; } ;
struct in_addr {int s_addr; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,TYPE_2__,int ,struct in_addr,int ,int ,int ,int ) ;
 int FUNC_1 (struct alias_link*,int,int,int ,int ,int) ;
 int FUNC_2 (int *,int *,int *,int) ;




 int VAR_0 ;
 struct in_addr FUNC_3 (struct alias_link*) ;
 int FUNC_4 (struct alias_link*) ;
 int FUNC_5 (int ,struct alias_link*) ;
 int FUNC_6 (struct alias_link*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct alias_link*) ;
 int FUNC_8 (struct alias_link*) ;
 scalar_t__ FUNC_9 (struct ip*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct ip*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,char*,int,...) ;
 int VAR_4 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_17(struct libalias *VAR_5, struct ip *VAR_6,
    struct alias_link *VAR_7,
    int VAR_8,
    int VAR_9)
{
 struct alias_link *VAR_10;


 if (VAR_6->ip_src.s_addr != VAR_5->true_addr.s_addr)
  return;

 if (VAR_5->true_port < VAR_1)
  return;


 VAR_10 = FUNC_0(VAR_5, VAR_5->true_addr, FUNC_6(VAR_7),
     FUNC_3(VAR_7), FUNC_11(VAR_5->true_port), 0, VAR_0,
     VAR_2);

 if (VAR_10 != ((void*)0)) {
  int VAR_11, VAR_12, VAR_13, VAR_14;
  struct tcphdr *VAR_15;



  FUNC_7(VAR_10);



  VAR_15 = (struct tcphdr *)FUNC_12(VAR_6);
  VAR_12 = (VAR_6->ip_hl + VAR_15->th_off) << 2;
  VAR_13 = FUNC_13(VAR_6->ip_len);
  VAR_14 = VAR_13 - VAR_12;


  {
   char VAR_16[VAR_3 + 1];
   char *VAR_17;
   u_short VAR_18;
   u_char *VAR_19;
   int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
   struct in_addr VAR_26;


   VAR_26 = FUNC_3(VAR_7);
   VAR_19 = (u_char *) & VAR_26.s_addr;
   VAR_20 = *VAR_19++;
   VAR_21 = *VAR_19++;
   VAR_22 = *VAR_19++;
   VAR_23 = *VAR_19;

   VAR_18 = FUNC_4(VAR_10);


   switch (VAR_9) {
   case 128:
   case 131:

    VAR_19 = (char *)&VAR_18;
    VAR_24 = *VAR_19++;
    VAR_25 = *VAR_19;

    if (VAR_9 == 128) {

     FUNC_14(VAR_16, "PORT %d,%d,%d,%d,%d,%d\r\n",
         VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25);
    } else {

     FUNC_14(VAR_16,
         "227 Entering Passive Mode (%d,%d,%d,%d,%d,%d)\r\n",
         VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25);
    }
    break;
   case 129:

    FUNC_14(VAR_16, "EPRT |1|%d.%d.%d.%d|%d|\r\n",
        VAR_20, VAR_21, VAR_22, VAR_23, FUNC_13(VAR_18));
    break;
   case 130:

    FUNC_14(VAR_16, "229 Entering Extended Passive Mode (|||%d|)\r\n",
        FUNC_13(VAR_18));
    break;
   }


   VAR_11 = FUNC_15(VAR_16);


   VAR_17 = (char *)VAR_6;
   VAR_17 += VAR_12;
   FUNC_16(VAR_17, VAR_16, VAR_8 - VAR_12);
  }


  {
   int VAR_27;

   FUNC_8(VAR_7);
   VAR_15 = (struct tcphdr *)FUNC_12(VAR_6);
   VAR_27 = FUNC_5(VAR_15->th_seq, VAR_7);
   FUNC_1(VAR_7, VAR_27 + VAR_11 - VAR_14, VAR_6->ip_hl,
       VAR_6->ip_len, VAR_15->th_seq, VAR_15->th_off);
  }


  {
   u_short VAR_28;

   VAR_28 = FUNC_11(VAR_12 + VAR_11);
   FUNC_2(&VAR_6->ip_sum,
       &VAR_28,
       &VAR_6->ip_len,
       1);
   VAR_6->ip_len = VAR_28;
  }


  VAR_15->th_sum = 0;



  VAR_15->th_sum = FUNC_9(VAR_6);

 } else {




 }
}

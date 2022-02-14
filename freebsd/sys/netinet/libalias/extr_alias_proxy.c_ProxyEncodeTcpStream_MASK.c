
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tcphdr {int th_off; int th_x2; scalar_t__ th_sum; int th_seq; } ;
struct ip {int ip_len; int ip_hl; int ip_sum; } ;
struct alias_link {int dummy; } ;
typedef int buffer ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct alias_link*,int,int,int,int ,int) ;
 scalar_t__ FUNC_2 (struct alias_link*) ;
 int FUNC_3 (int ,struct alias_link*) ;
 int FUNC_4 (struct alias_link*) ;
 int FUNC_5 (struct alias_link*) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct alias_link*) ;
 scalar_t__ FUNC_8 (struct ip*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int) ;
 char* FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (struct ip*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*,int,char*,char*,int) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18(struct alias_link *VAR_1,
    struct ip *VAR_2,
    int VAR_3)
{
 int VAR_4;
 char VAR_5[40];
 struct tcphdr *VAR_6;
 char VAR_7[VAR_0];


 VAR_6 = (struct tcphdr *)FUNC_12(VAR_2);



 if (FUNC_2(VAR_1))
  return;


 FUNC_15(VAR_5, sizeof(VAR_5) - 2, "[DEST %s %d]",
     FUNC_11(FUNC_4(VAR_1), FUNC_6(VAR_7)),
     (u_int) FUNC_14(FUNC_5(VAR_1)));


 VAR_4 = FUNC_17(VAR_5);
 switch (VAR_4 % 2) {
 case 0:
  FUNC_16(VAR_5, " \n");
  VAR_4 += 2;
  break;
 case 1:
  FUNC_16(VAR_5, "\n");
  VAR_4 += 1;
 }


 if ((int)(FUNC_14(VAR_2->ip_len) + FUNC_17(VAR_5)) > VAR_3)
  return;


 {
  int VAR_8;
  int VAR_9;
  char *VAR_10;

  VAR_9 = (VAR_2->ip_hl + VAR_6->th_off) << 2;
  VAR_8 = FUNC_14(VAR_2->ip_len) - VAR_9;



  if (VAR_8 == 0)
   return;

  VAR_10 = (char *)VAR_2;
  VAR_10 += VAR_9;

  FUNC_9(VAR_10, VAR_10 + VAR_4, VAR_8);
  FUNC_13(VAR_10, VAR_5, VAR_4);
 }


 {
  int VAR_11;

  FUNC_7(VAR_1);
  VAR_6 = (struct tcphdr *)FUNC_12(VAR_2);
  VAR_11 = FUNC_3(VAR_6->th_seq, VAR_1);
  FUNC_1(VAR_1, VAR_11 + VAR_4, VAR_2->ip_hl, VAR_2->ip_len, VAR_6->th_seq,
      VAR_6->th_off);
 }


 {
  int VAR_12;

  VAR_12 = VAR_2->ip_len;
  VAR_2->ip_len = FUNC_10(FUNC_14(VAR_2->ip_len) + VAR_4);
  VAR_12 -= VAR_2->ip_len;

  FUNC_0(VAR_12, VAR_2->ip_sum);
 }




 VAR_6->th_sum = 0;



 VAR_6->th_sum = FUNC_8(VAR_2);

}

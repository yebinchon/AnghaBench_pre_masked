
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct tcphdr {int th_x2; scalar_t__ th_sum; int th_off; int th_seq; } ;
struct libalias {int dummy; } ;
struct ip {int ip_len; int ip_sum; int ip_hl; int ip_src; } ;
struct in_addr {int s_addr; } ;
struct alias_link {int dummy; } ;


 int FUNC_0 (struct alias_link*,int,int ,int,int ,int ) ;
 int FUNC_1 (int *,int*,int*,int) ;
 int FUNC_2 (struct libalias*,int ) ;
 int FUNC_3 (struct libalias*,struct in_addr,int ,int,int ,int,int ,int) ;
 struct alias_link* FUNC_4 (struct libalias*,int ,struct in_addr,int,int,int ) ;
 int FUNC_5 (int ,struct alias_link*) ;
 int FUNC_6 (struct alias_link*) ;
 int VAR_0 ;
 int FUNC_7 (char) ;
 int FUNC_8 (struct alias_link*) ;
 int VAR_1 ;
 int FUNC_9 (struct alias_link*) ;
 scalar_t__ FUNC_10 (struct ip*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct ip*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*,int,char const*) ;
 int FUNC_17 (char*,char*,int) ;
 int VAR_2 ;
 int FUNC_18 (char const*) ;

__attribute__((used)) static int
FUNC_19(struct libalias *VAR_3, struct ip *VAR_4,
    struct alias_link *VAR_5,
    char *VAR_6,
    const char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct tcphdr *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u_short VAR_19[2], VAR_20;
 u_short VAR_21, VAR_22, VAR_23;
 u_short VAR_24 = 0, VAR_25 = 0, VAR_26 = 0;
 const char *VAR_27 = "transport:";
 char VAR_28[2048], *VAR_29, *VAR_30, VAR_31[80];
 int VAR_32 = 0, VAR_33 = 0;
 struct alias_link *VAR_34 = ((void*)0);
 struct in_addr VAR_35;


 VAR_11 = (struct tcphdr *)FUNC_13(VAR_4);
 VAR_8 = (VAR_4->ip_hl + VAR_11->th_off) << 2;
 VAR_9 = FUNC_15(VAR_4->ip_len);
 VAR_10 = VAR_9 - VAR_8;


 VAR_14 = FUNC_16(VAR_6, VAR_10, VAR_27);
 if (VAR_14 < 0) {
  return (-1);
 }
 VAR_29 = VAR_6 + VAR_14;
 VAR_16 = VAR_10 - VAR_14;

 FUNC_14(VAR_28, VAR_6, VAR_14);
 VAR_30 = VAR_28 + VAR_14;

 while (VAR_16 > (int)FUNC_18(VAR_7)) {

  VAR_14 = FUNC_16(VAR_29, VAR_16, VAR_7);
  if (VAR_14 < 0) {
   break;
  }
  FUNC_14(VAR_30, VAR_29, VAR_14 + 1);
  VAR_30 += (VAR_14 + 1);

  VAR_19[0] = VAR_19[1] = 0;
  VAR_21 = VAR_22 = 0;
  VAR_15 = 0;
  for (VAR_12 = VAR_14; VAR_12 < VAR_16; VAR_12++) {
   switch (VAR_15) {
   case 0:
    if (VAR_29[VAR_12] == '=') {
     VAR_15++;
    }
    break;
   case 1:
    if (FUNC_7(VAR_29[VAR_12])) {
     VAR_19[0] = VAR_19[0] * 10 + VAR_29[VAR_12] - '0';
    } else {
     if (VAR_29[VAR_12] == ';') {
      VAR_15 = 3;
     }
     if (VAR_29[VAR_12] == '-') {
      VAR_15++;
     }
    }
    break;
   case 2:
    if (FUNC_7(VAR_29[VAR_12])) {
     VAR_19[1] = VAR_19[1] * 10 + VAR_29[VAR_12] - '0';
    } else {
     VAR_15++;
    }
    break;
   case 3:
    VAR_23 = VAR_19[0];
    VAR_21 = FUNC_12(VAR_19[0]);
    VAR_22 = FUNC_12(VAR_19[1]);

    if (!VAR_32) {

     VAR_32 = 1;






     VAR_35.s_addr = 0;
     if (0 == (VAR_24 = FUNC_3(VAR_3, VAR_35,
         FUNC_2(VAR_3, VAR_4->ip_src),
         VAR_21, 0,
         VAR_1,
         VAR_0, 1))) {




     } else {

      VAR_26 = FUNC_15(VAR_24);
      for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {





       VAR_34 = FUNC_4(VAR_3, FUNC_6(VAR_5), VAR_35,
           FUNC_12(VAR_23 + VAR_13), FUNC_12(VAR_26 + VAR_13),
           VAR_0);
       if (VAR_34 != ((void*)0)) {






        FUNC_8(VAR_34);

       } else {




        break;
       }
      }
     }
     VAR_25 = FUNC_12(VAR_26 + (VAR_1 - 1));
    }
    if (VAR_24 && VAR_34) {

     VAR_33 = 1;


     FUNC_17(VAR_31, "%d", FUNC_15(VAR_24));
     FUNC_14(VAR_30, VAR_31, FUNC_18(VAR_31));
     VAR_30 += FUNC_18(VAR_31);

     if (VAR_22 != 0) {
      *VAR_30 = '-';
      VAR_30++;


      FUNC_17(VAR_31, "%d", FUNC_15(VAR_25));
      FUNC_14(VAR_30, VAR_31, FUNC_18(VAR_31));
      VAR_30 += FUNC_18(VAR_31);
     }
     *VAR_30 = ';';
     VAR_30++;
    }
    VAR_15++;
    break;
   }
   if (VAR_15 > 3) {
    break;
   }
  }
  VAR_29 += VAR_12;
  VAR_16 -= VAR_12;
 }

 if (!VAR_33)
  return (-1);

 FUNC_14(VAR_30, VAR_29, VAR_16);
 VAR_30 += VAR_16;
 *VAR_30 = '\0';


 VAR_17 = VAR_30 - VAR_28;
 FUNC_14(VAR_6, VAR_28, VAR_17);

 FUNC_9(VAR_5);
 VAR_11 = (struct tcphdr *)FUNC_13(VAR_4);
 VAR_18 = FUNC_5(VAR_11->th_seq, VAR_5);
 FUNC_0(VAR_5, VAR_18 + VAR_17 - VAR_10, VAR_4->ip_hl, VAR_4->ip_len,
     VAR_11->th_seq, VAR_11->th_off);

 VAR_20 = FUNC_12(VAR_8 + VAR_17);
 FUNC_1(&VAR_4->ip_sum,
     &VAR_20,
     &VAR_4->ip_len,
     1);
 VAR_4->ip_len = VAR_20;

 VAR_11->th_sum = 0;



 VAR_11->th_sum = FUNC_10(VAR_4);

 return (0);
}

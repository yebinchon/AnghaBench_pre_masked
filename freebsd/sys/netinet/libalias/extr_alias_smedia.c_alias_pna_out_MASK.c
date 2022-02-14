
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_short ;
struct tcphdr {int th_x2; scalar_t__ th_sum; } ;
struct libalias {int dummy; } ;
struct ip {int ip_src; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,int ,int ,char,int ,int ,int) ;
 char FUNC_1 (struct alias_link*) ;
 int FUNC_2 (struct alias_link*) ;
 int VAR_0 ;
 int FUNC_3 (struct alias_link*) ;
 scalar_t__ FUNC_4 (struct ip*) ;
 scalar_t__ FUNC_5 (struct ip*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char) ;

__attribute__((used)) static int
FUNC_8(struct libalias *VAR_1, struct ip *VAR_2,
    struct alias_link *VAR_3,
    char *VAR_4,
    int VAR_5)
{
 struct alias_link *VAR_6;
 u_short VAR_7, VAR_8;
 char *VAR_9;
 u_short VAR_10, VAR_11;
 struct tcphdr *VAR_12;

 VAR_9 = VAR_4;
 VAR_9 += 5;
 while (VAR_9 + 4 < VAR_4 + VAR_5) {
  FUNC_6(&VAR_7, VAR_9, 2);
  VAR_9 += 2;
  FUNC_6(&VAR_8, VAR_9, 2);
  VAR_9 += 2;
  if (FUNC_7(VAR_7) == 0) {

   return (0);
  }
  if ((FUNC_7(VAR_7) == 1) || (FUNC_7(VAR_7) == 7)) {
   FUNC_6(&VAR_11, VAR_9, 2);
   VAR_6 = FUNC_0(VAR_1, VAR_2->ip_src, FUNC_2(VAR_3),
       VAR_11, 0, VAR_0, 1);
   if (VAR_6 != ((void*)0)) {


    FUNC_3(VAR_6);

    VAR_12 = (struct tcphdr *)FUNC_5(VAR_2);
    VAR_10 = FUNC_1(VAR_6);
    FUNC_6(VAR_9, &VAR_10, 2);


    VAR_12->th_sum = 0;



    VAR_12->th_sum = FUNC_4(VAR_2);

   }
  }
  VAR_9 += FUNC_7(VAR_8);
 }

 return (0);
}

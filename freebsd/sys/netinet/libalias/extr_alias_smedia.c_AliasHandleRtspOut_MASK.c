
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int th_off; int th_dport; } ;
struct libalias {int dummy; } ;
struct ip {int ip_hl; int ip_len; } ;
struct alias_link {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct libalias*,struct ip*,struct alias_link*,char*,int) ;
 int FUNC_1 (struct libalias*,struct ip*,struct alias_link*,char*,char const*) ;
 scalar_t__ FUNC_2 (struct ip*) ;
 scalar_t__ FUNC_3 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(struct libalias *VAR_2, struct ip *VAR_3, struct alias_link *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct tcphdr *VAR_9;
 char *VAR_10;
 const char *VAR_11 = "SETUP", *VAR_12 = "PNA", *VAR_13 = "200";
 const char *VAR_14 = "OK", *VAR_15 = "client_port";
 const char *VAR_16 = "server_port";
 int VAR_17, VAR_18;

 (void)VAR_5;

 VAR_9 = (struct tcphdr *)FUNC_2(VAR_3);
 VAR_6 = (VAR_3->ip_hl + VAR_9->th_off) << 2;
 VAR_7 = FUNC_4(VAR_3->ip_len);
 VAR_8 = VAR_7 - VAR_6;

 VAR_10 = (char *)VAR_3;
 VAR_10 += VAR_6;


 if ((FUNC_4(VAR_9->th_dport) == VAR_0) ||
     (FUNC_4(VAR_9->th_dport) == VAR_1)) {

  if (VAR_8 >= (int)FUNC_5(VAR_11)) {
   if (FUNC_3(VAR_10, VAR_11, FUNC_5(VAR_11)) == 0) {
    FUNC_1(VAR_2, VAR_3, VAR_4, VAR_10, VAR_15);
    return;
   }
  }
  if (VAR_8 >= (int)FUNC_5(VAR_12)) {
   if (FUNC_3(VAR_10, VAR_12, FUNC_5(VAR_12)) == 0) {
    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_10, VAR_8);
   }
  }
 } else {






  if (VAR_8 >= (int)FUNC_5(VAR_13)) {

   for (VAR_18 = 0, VAR_17 = 0;
       VAR_17 <= VAR_8 - (int)FUNC_5(VAR_13);
       VAR_17++) {
    if (FUNC_3(&VAR_10[VAR_17], VAR_13, FUNC_5(VAR_13)) == 0) {
     VAR_18 = 1;
     break;
    }
   }
   if (VAR_18) {

    VAR_17 += FUNC_5(VAR_13);
    while (VAR_10[VAR_17] == ' ')
     VAR_17++;

    if ((VAR_8 - VAR_17) >= (int)FUNC_5(VAR_14)) {

     if (FUNC_3(&VAR_10[VAR_17], VAR_14, FUNC_5(VAR_14)) == 0)
      FUNC_1(VAR_2, VAR_3, VAR_4, VAR_10, VAR_16);

    }
   }
  }
 }
}

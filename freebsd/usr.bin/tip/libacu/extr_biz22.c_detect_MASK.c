
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sig_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(char *VAR_6)
{
 sig_t VAR_7;
 char VAR_8;

 VAR_7 = FUNC_5(VAR_2, VAR_4);
 VAR_3 = 0;
 while (*VAR_6) {
  if (FUNC_4(VAR_5)) {
   FUNC_1();
   break;
  }
  FUNC_0(FUNC_2(FUNC_6(VAR_0)));
  FUNC_3(VAR_1, &VAR_8, 1);
  FUNC_0(0);
  VAR_8 &= 0177;
  if (VAR_8 != *VAR_6++)
   return (0);
 }
 FUNC_5(VAR_2, VAR_7);
 return (VAR_3 == 0);
}

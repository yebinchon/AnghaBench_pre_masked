
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_9(char *VAR_5)
{
 sig_t VAR_6;
 char VAR_7;

 FUNC_8(VAR_1, VAR_5, FUNC_6(VAR_5));
 VAR_6 = FUNC_5(VAR_2, VAR_3);
 if (FUNC_4(VAR_4)) {
  FUNC_1();
  FUNC_5(VAR_2, VAR_6);
  return (1);
 }
 FUNC_0(FUNC_2(FUNC_7(VAR_0)));
 FUNC_3(VAR_1, &VAR_7, 1);
 FUNC_0(0);
 FUNC_5(VAR_2, VAR_6);
 VAR_7 &= 0177;
 return (VAR_7 != '\r');
}

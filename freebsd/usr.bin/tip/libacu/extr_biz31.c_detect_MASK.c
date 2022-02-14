
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
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(char *VAR_6)
{
 sig_t VAR_7;
 char VAR_8;

 VAR_7 = FUNC_6(VAR_2, VAR_3);
 VAR_4 = 0;
 while (*VAR_6) {
  if (FUNC_5(VAR_5)) {
   FUNC_3("\07timeout waiting for reply\n");
   FUNC_1();
   break;
  }
  FUNC_0(FUNC_2(FUNC_7(VAR_0)));
  FUNC_4(VAR_1, &VAR_8, 1);
  FUNC_0(0);
  if (VAR_8 != *VAR_6++)
   break;
 }
 FUNC_6(VAR_2, VAR_7);
 return (VAR_4 == 0);
}

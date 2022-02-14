
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sig_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;
 int VAR_7 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(char VAR_8, char VAR_9[])
{
 char *VAR_10 = VAR_9;
 sig_t VAR_11;
 char VAR_12;

 VAR_11 = FUNC_6(VAR_2, VAR_6);
 VAR_5 = 0;
 do {
  if (FUNC_5(VAR_7)) {
   FUNC_6(VAR_2, VAR_11);
   *VAR_10 = '\0';
   return (0);
  }
  FUNC_0(FUNC_2(FUNC_7(VAR_0)));
  FUNC_4(VAR_1, VAR_10, 1);
  FUNC_0(0);
  VAR_12 = (*VAR_10++ &= 0177);




 } while (VAR_12 != '\n' && VAR_12 != VAR_8);
 FUNC_6(VAR_2, VAR_3);
 *VAR_10 = '\0';
 return (VAR_12 == VAR_8);
}

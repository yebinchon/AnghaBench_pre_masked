
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sig_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 () ;

int
FUNC_6(char *VAR_7, char *VAR_8, size_t VAR_9)
{
 int VAR_10;
 char *VAR_11 = VAR_8;
 sig_t VAR_12, VAR_13;

 VAR_6 = 0;
 VAR_12 = FUNC_4(VAR_1, VAR_4);
 VAR_13 = FUNC_4(VAR_2, VAR_3);
 FUNC_5();
 FUNC_1("%s", VAR_7);
 if (FUNC_3(VAR_5) == 0)
  while ((VAR_10 = FUNC_0()) != VAR_0 && (*VAR_8 = VAR_10) != '\n' && --VAR_9 > 0)
   VAR_8++;
 *VAR_8 = '\0';

 FUNC_2();
 (void)FUNC_4(VAR_1, VAR_12);
 (void)FUNC_4(VAR_2, VAR_13);
 return (VAR_6 || VAR_8 == VAR_11);
}

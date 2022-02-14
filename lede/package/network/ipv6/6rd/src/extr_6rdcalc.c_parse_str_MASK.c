
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,void*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (char*,char) ;
 unsigned long FUNC_4 (char*,int *,int) ;

__attribute__((used)) static void FUNC_5(int VAR_2, char *VAR_3, void *VAR_4, unsigned long *VAR_5)
{
 int VAR_6;
 char *VAR_7;


 if ((VAR_7 = FUNC_3(VAR_3, '/')) == ((void*)0))
  FUNC_2();
 *VAR_7 = '\0';


 if ((VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4)) != 1) {
  if (VAR_6 == 0)
   FUNC_2();
  else
   FUNC_1();
 }


 *VAR_5 = FUNC_4(VAR_7+1, ((void*)0), 10);
 if ((VAR_2 == VAR_0 && *VAR_5 > 32) ||
  (VAR_2 == VAR_1 && *VAR_5 > 128))
  FUNC_2();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;


 int FUNC_0 (char**,char*,int,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static char *
FUNC_3(u_long VAR_0, int VAR_1, u_int VAR_2)
{
 char *VAR_3;

 if (VAR_2 <= 16) {
  VAR_3 = FUNC_1(2);
  VAR_3[0] = VAR_0 >= 10 ? VAR_0 + 'A' - 10 : VAR_0 + '0';
  VAR_3[1] = '\0';
 } else {
  if (FUNC_0(&VAR_3, "%0*d", VAR_1, VAR_0) == -1)
   FUNC_2(1, ((void*)0));
 }
 return (VAR_3);
}

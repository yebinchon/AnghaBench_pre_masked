
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int dummy; } ;


 int FUNC_0 (char**,int ) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct printer*) ;
 int FUNC_4 (struct printer*) ;
 int VAR_0 ;

int
FUNC_5(struct printer *VAR_1, int *VAR_2)
{
 int VAR_3;
 char *VAR_4;

 FUNC_4(VAR_1);
 VAR_3 = FUNC_0(&VAR_4, VAR_0);
 if (FUNC_1(&VAR_3) == 0) {
  if (VAR_2)
   *VAR_2 = VAR_3;
  return 0;
 }
 if (VAR_2)
  *VAR_2 = VAR_3;
 VAR_3 = FUNC_3(VAR_4, VAR_1);
 FUNC_2(VAR_4);
 if (VAR_2 && VAR_3)
  *VAR_2 = VAR_3;
 return 1;
}

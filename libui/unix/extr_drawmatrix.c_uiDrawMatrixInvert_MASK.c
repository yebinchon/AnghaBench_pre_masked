
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiDrawMatrix ;
typedef int cairo_matrix_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(uiDrawMatrix *VAR_1)
{
 cairo_matrix_t VAR_2;

 FUNC_2(VAR_1, &VAR_2);
 if (FUNC_1(&VAR_2) != VAR_0)
  return 0;
 FUNC_0(&VAR_2, VAR_1);
 return 1;
}

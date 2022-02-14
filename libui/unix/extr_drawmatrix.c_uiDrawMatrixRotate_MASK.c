
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiDrawMatrix ;
typedef int cairo_matrix_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,double) ;
 int FUNC_2 (int *,double,double) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(uiDrawMatrix *VAR_0, double VAR_1, double VAR_2, double VAR_3)
{
 cairo_matrix_t VAR_4;

 FUNC_3(VAR_0, &VAR_4);
 FUNC_2(&VAR_4, VAR_1, VAR_2);
 FUNC_1(&VAR_4, VAR_3);
 FUNC_2(&VAR_4, -VAR_1, -VAR_2);
 FUNC_0(&VAR_4, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,double,double*,double*) ;
 int FUNC_1 (double) ;

void
FUNC_2(int VAR_1, double VAR_2, int *VAR_3, int *VAR_4)
{
 double VAR_5[VAR_0];
 double VAR_6[VAR_0];
 int VAR_7, VAR_8;

 FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6);

 VAR_8 = 0;
 for (VAR_7 = 0; VAR_5[VAR_7] != 0; VAR_7++)
  VAR_3[VAR_8++] = FUNC_1(VAR_5[VAR_7]);
 VAR_3[VAR_7] = -1;
 for (VAR_7 = 0; VAR_6[VAR_7] != 0; VAR_7++)
  VAR_4[VAR_7] = FUNC_1(VAR_6[VAR_7]);
 VAR_4[VAR_7] = -1;
}

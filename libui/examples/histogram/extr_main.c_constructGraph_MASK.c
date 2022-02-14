
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiDrawPath ;


 int FUNC_0 (double,double,double*,double*) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,double,double) ;
 int FUNC_5 (int *,double,double) ;

__attribute__((used)) static uiDrawPath *FUNC_6(double VAR_1, double VAR_2, int VAR_3)
{
 uiDrawPath *VAR_4;
 double VAR_5[10], VAR_6[10];
 int VAR_7;

 FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6);

 VAR_4 = FUNC_1(VAR_0);

 FUNC_5(VAR_4, VAR_5[0], VAR_6[0]);
 for (VAR_7 = 1; VAR_7 < 10; VAR_7++)
  FUNC_4(VAR_4, VAR_5[VAR_7], VAR_6[VAR_7]);

 if (VAR_3) {
  FUNC_4(VAR_4, VAR_1, VAR_2);
  FUNC_4(VAR_4, 0, VAR_2);
  FUNC_2(VAR_4);
 }

 FUNC_3(VAR_4);
 return VAR_4;
}

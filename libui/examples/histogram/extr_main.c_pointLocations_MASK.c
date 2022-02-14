
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(double VAR_1, double VAR_2, double *VAR_3, double *VAR_4)
{
 double VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = VAR_1 / 9;
 VAR_6 = VAR_2 / 100;

 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {

  VAR_8 = FUNC_0(VAR_0[VAR_7]);

  VAR_8 = 100 - VAR_8;
  VAR_3[VAR_7] = VAR_5 * VAR_7;
  VAR_4[VAR_7] = VAR_6 * VAR_8;
 }
}

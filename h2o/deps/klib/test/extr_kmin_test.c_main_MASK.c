
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (int ,int,double*,int ,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;

int FUNC_2()
{
 double VAR_5[20], VAR_6;
 int VAR_7, VAR_8;
 FUNC_1("\nMinimizer: Hooke-Jeeves\n");
 for (VAR_7 = 2; VAR_7 <= 8; VAR_7 += 2) {
  for (VAR_8 = 0; VAR_8 != VAR_7; ++VAR_8) VAR_5[VAR_8] = (double)(VAR_8 + 1) / VAR_7;
  VAR_4 = 0;
  VAR_6 = FUNC_0(VAR_3, VAR_7, VAR_5, 0, VAR_2, VAR_0, VAR_1);
  FUNC_1("n=%d,min=%.8lg,n_evals=%d\n", VAR_7, VAR_6, VAR_4);
 }
 FUNC_1("\n");
 return 0;
}

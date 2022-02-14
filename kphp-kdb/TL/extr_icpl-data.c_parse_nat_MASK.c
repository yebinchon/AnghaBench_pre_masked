
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int icpl_nat_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static icpl_nat_t FUNC_2 (const char *VAR_0, int VAR_1) {
  icpl_nat_t VAR_2 = 0;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    FUNC_0 (FUNC_1 (VAR_0[VAR_3]));
    VAR_2 = VAR_2 * 10 + (VAR_0[VAR_3] - 48);
  }
  return VAR_2;
}

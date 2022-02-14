
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int item_t ;


 long long const VAR_0 ;
 scalar_t__ VAR_1 ;
 long long FUNC_0 (int const*) ;
 int FUNC_1 (int const*,scalar_t__) ;

long long FUNC_2 (const item_t *VAR_2) {
  if (VAR_1 < 0) {
    return FUNC_0 (VAR_2);
  }
  const int VAR_3 = FUNC_1 (VAR_2, VAR_1);
  if (VAR_3 > 0) {
    return VAR_3;
  }
  const long long VAR_4 = FUNC_0 (VAR_2);
  if (VAR_4 > 0 && VAR_4 < VAR_0) {
    return 0;
  }
  return VAR_4;
}

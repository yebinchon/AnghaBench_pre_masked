
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;

__attribute__((used)) static uint16_t FUNC_2(uint16_t *VAR_2) {
  FUNC_0(*VAR_2 == VAR_0);
  VAR_2++;

  for (uint16_t VAR_3 = *VAR_2++ + 1; VAR_3 > 0; VAR_2++, VAR_3--) {
    if (*VAR_2++ == 0)
      return VAR_0;
  }
  if (FUNC_1(VAR_2))
    return VAR_1;
  return VAR_0;
}

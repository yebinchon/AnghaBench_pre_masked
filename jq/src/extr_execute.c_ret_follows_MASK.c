
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(uint16_t *VAR_2) {
  if (*VAR_2 == VAR_1)
    return 1;
  if (*VAR_2++ != VAR_0)
    return 0;
  return FUNC_0(VAR_2 + *VAR_2 + 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rating ;


 float FUNC_0 (scalar_t__) ;

inline int FUNC_1 (rating VAR_0, rating VAR_1) {
  rating VAR_2 = VAR_0 - VAR_1;
  if (FUNC_0 (VAR_2) < 1e-7f) {
    return 0;
  }
  if (VAR_2 < 0) {
    return -1;
  }
  return 1;
}

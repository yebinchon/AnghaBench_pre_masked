
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ll ;



int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  ll VAR_2 = *(ll *)VAR_0, VAR_3 = *(ll *)VAR_1;
  if (VAR_2 < VAR_3) {
    return -1;
  } else if (VAR_3 < VAR_2) {
    return 1;
  }
  return 0;
}

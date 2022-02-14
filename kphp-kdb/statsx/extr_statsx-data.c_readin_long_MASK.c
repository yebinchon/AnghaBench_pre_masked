
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

long long FUNC_1 () {
  VAR_2 += 8;
  if (VAR_2 - VAR_0 > VAR_1) {
    if (VAR_4 >= 1) {
      FUNC_0 (VAR_3, "Buffer size %ld seems to be too small. Skipping read.\n", VAR_1);
    }
  }
  return *(long long *)(VAR_2 - 8);
}

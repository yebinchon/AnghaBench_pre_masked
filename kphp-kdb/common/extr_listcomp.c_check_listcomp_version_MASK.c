
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0 (int VAR_1) {
  if ( (VAR_1 ^ VAR_0) & 0xffff0000) {
    return 0;
  }
  if ( (VAR_1 & 0xffff) > (VAR_0 & 0xffff)) {
    return 0;
  }
  return 1;
}

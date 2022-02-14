
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0 (int VAR_1) {
  VAR_0 = 0;
  if (VAR_1 & 1) {
    VAR_0 = 2;
  } else if (VAR_1 & 2) {
    VAR_0 = 1;
  }
  if (!(VAR_1 & 4)) {
    VAR_0 = -VAR_0;
  }
  return VAR_0;
}

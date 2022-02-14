
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0) {
  if (VAR_0 <= 0x7F) return 1;
  else if (VAR_0 <= 0x7FF) return 2;
  else if (VAR_0 <= 0xFFFF) return 3;
  else return 4;
}

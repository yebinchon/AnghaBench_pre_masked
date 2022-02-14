
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6 {scalar_t__* data; } ;



int FUNC_0 (struct ipv6 VAR_0, struct ipv6 VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
    if (VAR_0.data[VAR_2] > VAR_1.data[VAR_2]) {
      return 1;
    }
    if (VAR_0.data[VAR_2] < VAR_1.data[VAR_2]) {
      return 0;
    }
  }
  return 0;
}

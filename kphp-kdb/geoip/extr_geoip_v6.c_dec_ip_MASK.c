
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6 {int* data; } ;



void FUNC_0 (struct ipv6 *VAR_0) {
  int VAR_1 = 7;
  while (VAR_1 >= 0) {
    if (VAR_0->data[VAR_1] > 0) {
      VAR_0->data[VAR_1] --;
      return;
    } else {
      VAR_0->data[VAR_1] = 0xffff;
      VAR_1 --;
    }
  }
}

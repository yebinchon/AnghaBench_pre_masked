
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6 {scalar_t__* data; } ;


 int FUNC_0 (int) ;

void FUNC_1 (struct ipv6 *VAR_0, int VAR_1) {
  FUNC_0 (VAR_1 < 128);
  int VAR_2 = (7 - (VAR_1 / 16));
  VAR_0->data[VAR_2] += (1 << (VAR_1 & 15));
  if (!VAR_0->data[VAR_2]) {
    VAR_2 --;
    while (VAR_2 >= 0) {
      VAR_0->data[VAR_2] ++;
      if (VAR_0->data[VAR_2]) {
        return;
      }
      VAR_2 --;
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 scalar_t__ FUNC_0 (int *,void*,int) ;

int FUNC_1 (struct connection *VAR_0, unsigned long long VAR_1) {
  int VAR_2 = 0;

  if (VAR_1 <= 250) {
    VAR_2 += FUNC_0 (&VAR_0->Out, (void *)&VAR_1, 1);
  } else
  if (VAR_1 <= 0xffff) {
    VAR_2 += FUNC_0 (&VAR_0->Out, "\xfc", 1);
    VAR_2 += FUNC_0 (&VAR_0->Out, (void *)&VAR_1, 2);
  } else
  if (VAR_1 <= 0xffffff) {
    VAR_2 += FUNC_0 (&VAR_0->Out, "\xfd", 1);
    VAR_2 += FUNC_0 (&VAR_0->Out, (void *)&VAR_1, 3);
  } else {
    VAR_2 += FUNC_0 (&VAR_0->Out, "\xfe", 1);
    VAR_2 += FUNC_0 (&VAR_0->Out, (void *)&VAR_1, 8);
  }
  return VAR_2;
}

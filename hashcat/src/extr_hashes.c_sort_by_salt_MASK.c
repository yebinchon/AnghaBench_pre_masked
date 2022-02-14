
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* salt_buf; scalar_t__* salt_buf_pc; scalar_t__ salt_iter; scalar_t__ salt_len; } ;
typedef TYPE_1__ salt_t ;



int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const salt_t *VAR_2 = (const salt_t *) VAR_0;
  const salt_t *VAR_3 = (const salt_t *) VAR_1;

  const int VAR_4 = (int) VAR_2->salt_len - (int) VAR_3->salt_len;

  if (VAR_4 != 0) return (VAR_4);

  const int VAR_5 = (int) VAR_2->salt_iter - (int) VAR_3->salt_iter;

  if (VAR_5 != 0) return (VAR_5);

  for (int VAR_6 = 0; VAR_6 < 64; VAR_6++)
  {
    if (VAR_2->salt_buf[VAR_6] > VAR_3->salt_buf[VAR_6]) return 1;
    if (VAR_2->salt_buf[VAR_6] < VAR_3->salt_buf[VAR_6]) return -1;
  }

  for (int VAR_7 = 0; VAR_7 < 64; VAR_7++)
  {
    if (VAR_2->salt_buf_pc[VAR_7] > VAR_3->salt_buf_pc[VAR_7]) return 1;
    if (VAR_2->salt_buf_pc[VAR_7] < VAR_3->salt_buf_pc[VAR_7]) return -1;
  }

  return 0;
}

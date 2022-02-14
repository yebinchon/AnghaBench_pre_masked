
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;
typedef TYPE_1__ uv_buf_t ;



size_t FUNC_0(const uv_buf_t VAR_0[], unsigned int VAR_1) {
  unsigned int VAR_2;
  size_t VAR_3;

  VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    VAR_3 += (size_t) VAR_0[VAR_2].len;

  return VAR_3;
}

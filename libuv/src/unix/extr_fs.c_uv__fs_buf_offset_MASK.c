
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; size_t base; } ;
typedef TYPE_1__ uv_buf_t ;



__attribute__((used)) static size_t FUNC_0(uv_buf_t* VAR_0, size_t VAR_1) {
  size_t VAR_2;

  for (VAR_2 = 0; VAR_1 > 0 && VAR_0[VAR_2].len <= VAR_1; ++VAR_2)
    VAR_1 -= VAR_0[VAR_2].len;


  if (VAR_1 > 0) {
    VAR_0[VAR_2].base += VAR_1;
    VAR_0[VAR_2].len -= VAR_1;
  }
  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_file ;
struct TYPE_3__ {size_t len; scalar_t__ base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef int ssize_t ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,scalar_t__,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_3(uv_file VAR_2,
                             uv_buf_t* VAR_3,
                             unsigned int VAR_4,
                             off_t VAR_5) {
  uv_buf_t* VAR_6;
  uv_buf_t* VAR_7;
  ssize_t VAR_8;
  ssize_t VAR_9;
  size_t VAR_10;

  FUNC_1(VAR_4 > 0);

  VAR_8 = 0;
  VAR_10 = 0;
  VAR_6 = VAR_3 + 0;
  VAR_7 = VAR_3 + VAR_4;

  for (;;) {
    do
      VAR_9 = FUNC_2(VAR_2, VAR_6->base + VAR_10, VAR_6->len - VAR_10, VAR_5 + VAR_8);
    while (VAR_9 == -1 && VAR_1 == VAR_0);

    if (VAR_9 == 0)
      break;

    if (VAR_9 == -1 && VAR_8 == 0)
      return FUNC_0(VAR_1);

    if (VAR_9 == -1)
      break;

    VAR_10 += VAR_9;
    VAR_8 += VAR_9;

    if (VAR_10 < VAR_6->len)
      continue;

    VAR_10 = 0;
    VAR_6 += 1;

    if (VAR_6 == VAR_7)
      break;
  }

  return VAR_8;
}

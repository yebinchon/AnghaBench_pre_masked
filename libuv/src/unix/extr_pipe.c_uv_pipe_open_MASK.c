
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_3__ {int loop; } ;
typedef TYPE_1__ uv_pipe_t ;
typedef int uv_file ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(uv_pipe_t* VAR_9, uv_file VAR_10) {
  int VAR_11;
  int VAR_12;
  int VAR_13;
  VAR_11 = 0;

  if (FUNC_2(VAR_9->loop, VAR_10))
    return VAR_5;

  do
    VAR_12 = FUNC_1(VAR_10, VAR_1);
  while (VAR_12 == -1 && VAR_8 == VAR_0);

  if (VAR_12 == -1)
    return FUNC_0(VAR_8);

  VAR_13 = FUNC_3(VAR_10, 1);
  if (VAR_13)
    return VAR_13;







  VAR_12 &= VAR_2;
  if (VAR_12 != VAR_4)
    VAR_11 |= VAR_6;
  if (VAR_12 != VAR_3)
    VAR_11 |= VAR_7;

  return FUNC_4((uv_stream_t*)VAR_9, VAR_10, VAR_11);
}

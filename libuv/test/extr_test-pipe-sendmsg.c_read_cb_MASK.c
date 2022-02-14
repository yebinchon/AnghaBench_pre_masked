
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_7__ {int loop; } ;
typedef TYPE_1__ uv_pipe_t ;
typedef scalar_t__ uv_handle_type ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
typedef scalar_t__ ssize_t ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(uv_stream_t* VAR_4,
                    ssize_t VAR_5,
                    const uv_buf_t* VAR_6) {
  uv_pipe_t* VAR_7;
  uv_pipe_t* VAR_8;
  uv_handle_type VAR_9;
  unsigned int VAR_10;

  VAR_7 = (uv_pipe_t*) VAR_4;
  FUNC_1(VAR_5 >= 0);

  while (FUNC_5(VAR_7) != 0) {
    VAR_9 = FUNC_6(VAR_7);
    FUNC_1(VAR_9 == VAR_0);

    FUNC_1(VAR_3 < FUNC_0(VAR_2));
    VAR_8 = &VAR_2[VAR_3++];
    FUNC_1(0 == FUNC_4(VAR_7->loop, VAR_8, 0));
    FUNC_1(0 == FUNC_2(VAR_4, (uv_stream_t*) VAR_8));
  }

  if (VAR_3 != FUNC_0(VAR_2))
    return;

  FUNC_1(0 == FUNC_7((uv_stream_t*) VAR_7));
  FUNC_3((uv_handle_t*) VAR_7, VAR_1);
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++)
    FUNC_3((uv_handle_t*) &VAR_2[VAR_10], VAR_1);
}

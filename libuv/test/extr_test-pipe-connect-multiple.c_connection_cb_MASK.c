
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int loop; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_pipe_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(uv_stream_t* VAR_4, int VAR_5) {
  int VAR_6;
  uv_pipe_t* VAR_7;
  FUNC_0(VAR_5 == 0);

  VAR_7 = &VAR_3[VAR_2];
  VAR_6 = FUNC_2(VAR_4->loop, VAR_7, 0);
  FUNC_0(VAR_6 == 0);

  VAR_6 = FUNC_1(VAR_4, (uv_stream_t*)VAR_7);
  FUNC_0(VAR_6 == 0);

  if (++VAR_2 == VAR_0 &&
      VAR_1 == VAR_0) {
    FUNC_3(VAR_4->loop);
  }
}

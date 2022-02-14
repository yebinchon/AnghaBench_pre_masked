
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_pipe_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(uv_stream_t* VAR_8, int VAR_9) {
  uv_stream_t* VAR_10;
  int VAR_11;

  FUNC_0(VAR_6 == VAR_8);
  FUNC_0(VAR_9 == 0);

  if (VAR_7 == VAR_0) {
    VAR_10 = (uv_stream_t*)FUNC_1(sizeof(uv_tcp_t));
    VAR_11 = FUNC_5(VAR_2, (uv_tcp_t*)VAR_10);
    FUNC_0(VAR_11 == 0);
  } else {
    VAR_10 = (uv_stream_t*)FUNC_1(sizeof(uv_pipe_t));
    VAR_11 = FUNC_3(VAR_2, (uv_pipe_t*)VAR_10, 0);
    FUNC_0(VAR_11 == 0);
  }

  VAR_11 = FUNC_2(VAR_8, VAR_10);
  FUNC_0(VAR_11 == 0);

  VAR_11 = FUNC_4(VAR_10, VAR_1, VAR_4);
  FUNC_0(VAR_11 == 0);

  VAR_5++;
  VAR_3++;
}

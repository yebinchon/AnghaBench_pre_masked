
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(uv_stream_t* VAR_3, ssize_t VAR_4, const uv_buf_t* VAR_5) {
  FUNC_0((uv_tcp_t*)VAR_3 == &VAR_2);
  if (VAR_4 < 0) {
    FUNC_2((uv_handle_t*) VAR_3, ((void*)0));
  } else {
    VAR_1 += VAR_4;
    if (VAR_1 == 16 && VAR_0 == 0)
      FUNC_1(&VAR_2);
  }
}

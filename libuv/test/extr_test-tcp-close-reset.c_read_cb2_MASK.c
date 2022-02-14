
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
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(uv_stream_t* VAR_2, ssize_t VAR_3, const uv_buf_t* VAR_4) {
  FUNC_0((uv_tcp_t*)VAR_2 == &VAR_1);
  if (VAR_3 == VAR_0)
    FUNC_1((uv_handle_t*) VAR_2, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(uv_stream_t *VAR_0, ssize_t VAR_1, const uv_buf_t* VAR_2)
{
  if (VAR_1 < 0) {
    FUNC_0((uv_handle_t*)VAR_0, ((void*)0));
    return;
  }
}

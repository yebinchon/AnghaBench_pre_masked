
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(uv_stream_t* VAR_3, ssize_t VAR_4, const uv_buf_t* VAR_5) {
  if (VAR_4 < 0) {
    FUNC_0((uv_handle_t*) VAR_3, VAR_1);
    FUNC_0((uv_handle_t*) &VAR_2, VAR_1);
    return;
  }

  VAR_0 += VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(uv_stream_t *VAR_2, ssize_t VAR_3, const uv_buf_t *VAR_4) {
  switch (++VAR_1) {
  case 1:
    FUNC_0(VAR_3 == 1);
    FUNC_2(VAR_2);
    break;
  case 2:
    FUNC_0(VAR_3 == VAR_0);
    FUNC_1((uv_handle_t *) VAR_2, ((void*)0));
    break;
  default:
    FUNC_0(!"read_cb_called > 2");
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(uv_stream_t* VAR_6, ssize_t VAR_7, const uv_buf_t* VAR_8) {
  if (VAR_7 < 0) {
    FUNC_1(VAR_3, "read_cb error: %s\n", FUNC_3(VAR_7));
    FUNC_0(VAR_7 == VAR_0 || VAR_7 == VAR_1);

    FUNC_2((uv_handle_t*)&VAR_5, ((void*)0));
    FUNC_2((uv_handle_t*)&VAR_4, ((void*)0));
  }

  VAR_2++;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_write_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_connect_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int *,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(uv_connect_t* VAR_4, int VAR_5) {
  uv_write_t* VAR_6;
  uv_buf_t VAR_7;
  int VAR_8, VAR_9;

  VAR_7 = FUNC_2("PING", 4);
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
    VAR_6 = FUNC_1(sizeof *VAR_6);
    FUNC_0(VAR_6 != ((void*)0));

    VAR_9 = FUNC_4(VAR_6, (uv_stream_t*)&VAR_2, &VAR_7, 1, VAR_3);
    FUNC_0(VAR_9 == 0);
  }

  FUNC_3((uv_handle_t*)&VAR_2, VAR_1);
}

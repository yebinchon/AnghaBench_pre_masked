
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_connect_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static void FUNC_4(uv_connect_t* VAR_5, int VAR_6) {
  int VAR_7;
  uv_buf_t VAR_8;
  FUNC_0(VAR_6 == 0);
  VAR_4++;

  do {
    VAR_8 = FUNC_1("PING", 4);
    VAR_7 = FUNC_3((uv_stream_t*) &VAR_2, &VAR_8, 1);
    FUNC_0(VAR_7 > 0 || VAR_7 == VAR_0);
    if (VAR_7 > 0) {
      VAR_1 += VAR_7;
      break;
    }
  } while (1);

  do {
    VAR_8 = FUNC_1("", 0);
    VAR_7 = FUNC_3((uv_stream_t*) &VAR_2, &VAR_8, 1);
  } while (VAR_7 != 0);
  FUNC_2((uv_handle_t*) &VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int *,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(uv_timer_t* VAR_6) {
  uv_buf_t VAR_7;
  int VAR_8;

  FUNC_2((uv_handle_t*)VAR_6, VAR_0);

  VAR_7 = FUNC_1("TEST", 4);
  VAR_8 = FUNC_4(&VAR_5, (uv_stream_t*)&VAR_1, &VAR_7, 1, VAR_4);
  FUNC_0(VAR_8 == 0);

  VAR_8 = FUNC_3(&VAR_3, (uv_stream_t*)&VAR_1, VAR_2);
  FUNC_0(VAR_8 == 0);
}

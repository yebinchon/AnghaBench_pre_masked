
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_stream_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(uv_timer_t* VAR_3) {
  uv_buf_t VAR_4 = FUNC_1("PING", 4);
  FUNC_0(0 == FUNC_3(&VAR_2,
                       (uv_stream_t*) &VAR_0,
                       &VAR_4,
                       1,
                       VAR_1));
  FUNC_0(0 == FUNC_2((uv_stream_t*) &VAR_0));
}

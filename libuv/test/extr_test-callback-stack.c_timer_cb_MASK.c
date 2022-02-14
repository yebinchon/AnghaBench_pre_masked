
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(uv_timer_t* VAR_7) {
  FUNC_0(VAR_7 == &VAR_5);
  FUNC_0(VAR_3 == 0 && "timer_cb must be called from a fresh stack");

  FUNC_2("Timeout complete. Now read data...");

  VAR_3++;
  if (FUNC_4((uv_stream_t*)&VAR_1, VAR_0, VAR_4)) {
    FUNC_1("uv_read_start failed");
  }
  VAR_3--;

  VAR_6++;

  FUNC_3((uv_handle_t*)VAR_7, VAR_2);
}

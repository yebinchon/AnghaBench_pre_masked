
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(uv_timer_t* VAR_6) {
  FUNC_0(VAR_6 == &VAR_5);

  FUNC_3((uv_handle_t*) &VAR_2, VAR_1);
  FUNC_3((uv_handle_t*) &VAR_0, VAR_1);
  FUNC_3((uv_handle_t*) &VAR_5, VAR_1);

  VAR_4++;
  FUNC_2(VAR_3, "timer_cb %d\n", VAR_4);
  FUNC_1(VAR_3);
}

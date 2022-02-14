
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(uv_timer_t* VAR_2) {
  int VAR_3;

  if (VAR_1 == 0) {
    FUNC_1("watch_dir/file.js");
  } else {
    FUNC_2((uv_handle_t*)VAR_2, ((void*)0));
    VAR_3 = FUNC_3(&VAR_0);
    FUNC_0(VAR_3 == 0);
    FUNC_2((uv_handle_t*) &VAR_0, ((void*)0));
  }

  ++VAR_1;
}

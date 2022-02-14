
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(uv_timer_t* VAR_2) {
  FUNC_1("REPEAT_CB\n");

  FUNC_0(VAR_2 != ((void*)0));
  FUNC_0(1 == FUNC_3((uv_handle_t*) VAR_2));

  VAR_0++;

  if (VAR_0 == 5) {
    FUNC_2((uv_handle_t*)VAR_2, VAR_1);
  }
}

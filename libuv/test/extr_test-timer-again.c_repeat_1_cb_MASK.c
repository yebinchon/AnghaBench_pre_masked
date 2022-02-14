
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(uv_timer_t* VAR_7) {
  int VAR_8;

  FUNC_0(VAR_7 == &VAR_1);
  FUNC_0(FUNC_7((uv_timer_t*)VAR_7) == 50);

  FUNC_2(VAR_6, "repeat_1_cb called after %ld ms\n",
          (long int)(FUNC_5(FUNC_4()) - VAR_5));
  FUNC_1(VAR_6);

  VAR_2++;

  VAR_8 = FUNC_6(&VAR_3);
  FUNC_0(VAR_8 == 0);

  if (VAR_2 == 10) {
    FUNC_3((uv_handle_t*)VAR_7, VAR_0);


    VAR_4 = 1;
    return;
  }
}

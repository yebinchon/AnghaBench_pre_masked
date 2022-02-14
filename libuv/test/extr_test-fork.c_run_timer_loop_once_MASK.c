
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_loop_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_5(void) {
  uv_loop_t* VAR_3;
  uv_timer_t VAR_4;

  VAR_3 = FUNC_1();

  VAR_2 = 0;

  FUNC_0(0 == FUNC_3(VAR_3, &VAR_4));
  FUNC_0(0 == FUNC_4(&VAR_4, VAR_1, 1, 0));
  FUNC_0(0 == FUNC_2(VAR_3, VAR_0));
  FUNC_0(1 == VAR_2);
}

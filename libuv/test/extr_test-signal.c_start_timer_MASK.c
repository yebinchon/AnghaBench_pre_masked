
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
struct timer_ctx {int signum; int handle; scalar_t__ ncalls; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int,int) ;

__attribute__((used)) static void FUNC_3(uv_loop_t* VAR_1, int VAR_2, struct timer_ctx* VAR_3) {
  VAR_3->ncalls = 0;
  VAR_3->signum = VAR_2;
  FUNC_0(0 == FUNC_1(VAR_1, &VAR_3->handle));
  FUNC_0(0 == FUNC_2(&VAR_3->handle, VAR_0, 5, 5));
}

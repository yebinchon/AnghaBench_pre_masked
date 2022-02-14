
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
struct signal_ctx {int signum; int one_shot; int handle; int stop_or_close; scalar_t__ ncalls; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(uv_loop_t* VAR_3,
                          int VAR_4,
                          struct signal_ctx* VAR_5,
                          int VAR_6) {
  VAR_5->ncalls = 0;
  VAR_5->signum = VAR_4;
  VAR_5->stop_or_close = VAR_0;
  VAR_5->one_shot = VAR_6;
  FUNC_0(0 == FUNC_1(VAR_3, &VAR_5->handle));
  if (VAR_6)
    FUNC_0(0 == FUNC_3(&VAR_5->handle, VAR_2, VAR_4));
  else
    FUNC_0(0 == FUNC_2(&VAR_5->handle, VAR_1, VAR_4));
}

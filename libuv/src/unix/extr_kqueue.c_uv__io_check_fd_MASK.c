
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int backend_fd; } ;
typedef TYPE_1__ uv_loop_t ;
struct kevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kevent*,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,struct kevent*,int,int *,int ,int *) ;

int FUNC_4(uv_loop_t* VAR_4, int VAR_5) {
  struct kevent VAR_6;
  int VAR_7;

  VAR_7 = 0;
  FUNC_0(&VAR_6, VAR_5, VAR_0, VAR_1, 0, 0, 0);
  if (FUNC_3(VAR_4->backend_fd, &VAR_6, 1, ((void*)0), 0, ((void*)0)))
    VAR_7 = FUNC_1(VAR_3);

  FUNC_0(&VAR_6, VAR_5, VAR_0, VAR_2, 0, 0, 0);
  if (VAR_7 == 0)
    if (FUNC_3(VAR_4->backend_fd, &VAR_6, 1, ((void*)0), 0, ((void*)0)))
      FUNC_2();

  return VAR_7;
}

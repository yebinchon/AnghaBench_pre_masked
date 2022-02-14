
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {int handle; TYPE_1__ u; } ;
typedef TYPE_2__ uv_pipe_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(uv_pipe_t* VAR_1) {
  FUNC_1(VAR_1->u.fd == -1 || VAR_1->u.fd > 2);
  if (VAR_1->u.fd == -1)
    FUNC_0(VAR_1->handle);
  else
    FUNC_2(VAR_1->u.fd);

  VAR_1->u.fd = -1;
  VAR_1->handle = VAR_0;
}

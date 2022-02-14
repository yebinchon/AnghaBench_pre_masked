
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctrl_fd; int fd; } ;
typedef TYPE_1__ knetFile ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

int FUNC_2(knetFile *VAR_0)
{
 if (VAR_0->ctrl_fd != -1) {
  FUNC_1(VAR_0->ctrl_fd);
  VAR_0->ctrl_fd = -1;
 }
 FUNC_1(VAR_0->fd);
 VAR_0->fd = -1;
 return FUNC_0(VAR_0);
}

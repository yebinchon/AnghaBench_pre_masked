
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physical {int fd; TYPE_1__* handler; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* write ) (struct physical*,void const*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,void const*,size_t) ;
 int FUNC_1 (struct physical*,void const*,size_t) ;
 int FUNC_2 (int ,void const*,size_t) ;

ssize_t
FUNC_3(struct physical *VAR_1, const void *VAR_2, size_t VAR_3)
{
  FUNC_0(VAR_0, "write", VAR_2, VAR_3);

  if (VAR_1->handler && VAR_1->handler->write)
    return (*VAR_1->handler->write)(VAR_1, VAR_2, VAR_3);

  return FUNC_2(VAR_1->fd, VAR_2, VAR_3);
}

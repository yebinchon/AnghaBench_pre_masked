
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physical {int fd; TYPE_1__* handler; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* read ) (struct physical*,void*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,void*,int ) ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (struct physical*,void*,size_t) ;

ssize_t
FUNC_3(struct physical *VAR_1, void *VAR_2, size_t VAR_3)
{
  ssize_t VAR_4;

  if (VAR_1->handler && VAR_1->handler->read)
    VAR_4 = (*VAR_1->handler->read)(VAR_1, VAR_2, VAR_3);
  else
    VAR_4 = FUNC_1(VAR_1->fd, VAR_2, VAR_3);

  FUNC_0(VAR_0, "read", VAR_2, VAR_4);

  return VAR_4;
}

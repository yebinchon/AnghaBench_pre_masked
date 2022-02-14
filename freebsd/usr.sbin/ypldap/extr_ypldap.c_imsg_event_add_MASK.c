
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ queued; } ;
struct TYPE_4__ {int fd; TYPE_1__ w; } ;
struct imsgev {int ev; int data; int * handler; int events; TYPE_2__ ibuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(struct imsgev *VAR_2)
{
 if (VAR_2->handler == ((void*)0)) {
  FUNC_3(&VAR_2->ibuf);
  return;
 }

 VAR_2->events = VAR_0;
 if (VAR_2->ibuf.w.queued)
  VAR_2->events |= VAR_1;

 FUNC_1(&VAR_2->ev);
 FUNC_2(&VAR_2->ev, VAR_2->ibuf.fd, VAR_2->events, VAR_2->handler, VAR_2->data);
 FUNC_0(&VAR_2->ev, ((void*)0));
}

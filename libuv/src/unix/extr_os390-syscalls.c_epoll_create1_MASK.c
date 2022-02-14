
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int size; int member; TYPE_1__* items; int msg_queue; } ;
typedef TYPE_2__ uv__os390_epoll ;
struct TYPE_7__ {scalar_t__ revents; int events; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

uv__os390_epoll* FUNC_7(int VAR_5) {
  uv__os390_epoll* VAR_6;

  VAR_6 = FUNC_3(sizeof(*VAR_6));
  if (VAR_6 != ((void*)0)) {

    VAR_6->size = 0;
    VAR_6->items = ((void*)0);
    FUNC_1(VAR_6);
    FUNC_2(VAR_6, 1);
    VAR_6->items[VAR_6->size - 1].fd = VAR_6->msg_queue;
    VAR_6->items[VAR_6->size - 1].events = VAR_0;
    VAR_6->items[VAR_6->size - 1].revents = 0;
    FUNC_6(&VAR_4, VAR_1);
    FUNC_4(&VAR_2);
    FUNC_0(&VAR_3, &VAR_6->member);
    FUNC_5(&VAR_2);
  }

  return VAR_6;
}

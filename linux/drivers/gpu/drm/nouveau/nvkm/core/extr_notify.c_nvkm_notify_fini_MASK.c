
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_notify {TYPE_1__* event; scalar_t__ data; int head; } ;
struct TYPE_2__ {int list_lock; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_notify*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void
FUNC_5(struct nvkm_notify *VAR_0)
{
 unsigned long VAR_1;
 if (VAR_0->event) {
  FUNC_2(VAR_0);
  FUNC_3(&VAR_0->event->list_lock, VAR_1);
  FUNC_1(&VAR_0->head);
  FUNC_4(&VAR_0->event->list_lock, VAR_1);
  FUNC_0((void *)VAR_0->data);
  VAR_0->event = ((void*)0);
 }
}

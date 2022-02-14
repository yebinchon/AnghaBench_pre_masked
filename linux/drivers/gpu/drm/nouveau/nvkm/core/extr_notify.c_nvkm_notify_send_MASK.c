
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_notify {scalar_t__ size; int * data; int work; int flags; scalar_t__ block; struct nvkm_event* event; } ;
struct nvkm_event {int refs_lock; int list_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,void*,scalar_t__) ;
 int FUNC_3 (struct nvkm_notify*) ;
 int FUNC_4 (struct nvkm_notify*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void
FUNC_9(struct nvkm_notify *VAR_1, void *VAR_2, u32 VAR_3)
{
 struct nvkm_event *VAR_4 = VAR_1->event;
 unsigned long VAR_5;

 FUNC_1(&VAR_4->list_lock);
 FUNC_0(VAR_3 != VAR_1->size);

 FUNC_6(&VAR_4->refs_lock, VAR_5);
 if (VAR_1->block) {
  FUNC_7(&VAR_4->refs_lock, VAR_5);
  return;
 }
 FUNC_4(VAR_1);
 FUNC_7(&VAR_4->refs_lock, VAR_5);

 if (FUNC_8(VAR_0, &VAR_1->flags)) {
  FUNC_2((void *)VAR_1->data, VAR_2, VAR_3);
  FUNC_5(&VAR_1->work);
 } else {
  VAR_1->data = VAR_2;
  FUNC_3(VAR_1);
  VAR_1->data = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_notify {int flags; struct nvkm_event* event; } ;
struct nvkm_event {int refs_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvkm_event*) ;
 int FUNC_1 (struct nvkm_notify*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;

void
FUNC_5(struct nvkm_notify *VAR_1)
{
 struct nvkm_event *VAR_2 = VAR_1->event;
 unsigned long VAR_3;
 if (FUNC_0(VAR_2) &&
     !FUNC_4(VAR_0, &VAR_1->flags)) {
  FUNC_2(&VAR_2->refs_lock, VAR_3);
  FUNC_1(VAR_1);
  FUNC_3(&VAR_2->refs_lock, VAR_3);
 }
}

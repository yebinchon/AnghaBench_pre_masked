
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_notify {int work; int flags; struct nvkm_event* event; } ;
struct nvkm_event {int refs_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nvkm_event*) ;
 int FUNC_2 (struct nvkm_notify*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void
FUNC_7(struct nvkm_notify *VAR_2)
{
 struct nvkm_event *VAR_3 = VAR_2->event;
 unsigned long VAR_4;
 if (FUNC_1(VAR_3) &&
     FUNC_5(VAR_0, &VAR_2->flags)) {
  FUNC_3(&VAR_3->refs_lock, VAR_4);
  FUNC_2(VAR_2);
  FUNC_4(&VAR_3->refs_lock, VAR_4);
  if (FUNC_6(VAR_1, &VAR_2->flags))
   FUNC_0(&VAR_2->work);
 }
}

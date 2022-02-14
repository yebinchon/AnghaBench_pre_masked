
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_notify {int (* func ) (struct nvkm_notify*) ;int flags; struct nvkm_event* event; } ;
struct nvkm_event {int refs_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_notify*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct nvkm_notify*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_5(struct nvkm_notify *VAR_2)
{
 struct nvkm_event *VAR_3 = VAR_2->event;
 int VAR_4 = VAR_2->func(VAR_2);
 unsigned long VAR_5;
 if ((VAR_4 == VAR_0) ||
     !FUNC_4(VAR_1, &VAR_2->flags)) {
  FUNC_1(&VAR_3->refs_lock, VAR_5);
  FUNC_0(VAR_2);
  FUNC_2(&VAR_3->refs_lock, VAR_5);
 }
}

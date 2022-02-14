
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_notify {scalar_t__ size; int block; int (* func ) (struct nvkm_notify*) ;struct nvkm_event* event; int head; int * data; scalar_t__ flags; int work; } ;
struct nvkm_event {int list_lock; int list; TYPE_1__* func; int refs; } ;
struct TYPE_2__ {int (* ctor ) (struct nvkm_object*,void*,scalar_t__,struct nvkm_notify*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_5 ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct nvkm_object*,void*,scalar_t__,struct nvkm_notify*) ;

int
FUNC_7(struct nvkm_object *VAR_6, struct nvkm_event *VAR_7,
   int (*VAR_8)(struct nvkm_notify *), bool VAR_9,
   void *VAR_10, u32 VAR_11, u32 VAR_12,
   struct nvkm_notify *VAR_13)
{
 unsigned long VAR_14;
 int VAR_15 = -VAR_1;
 if ((VAR_13->event = VAR_7), VAR_7->refs) {
  VAR_15 = VAR_7->func->ctor(VAR_6, VAR_10, VAR_11, VAR_13);
  if (VAR_15 == 0 && (VAR_15 = -VAR_0, VAR_13->size == VAR_12)) {
   VAR_13->flags = 0;
   VAR_13->block = 1;
   VAR_13->func = VAR_8;
   VAR_13->data = ((void*)0);
   if (VAR_15 = 0, VAR_9) {
    FUNC_0(&VAR_13->work, VAR_5);
    FUNC_3(VAR_4, &VAR_13->flags);
    VAR_13->data = FUNC_1(VAR_12, VAR_3);
    if (!VAR_13->data)
     VAR_15 = -VAR_2;
   }
  }
  if (VAR_15 == 0) {
   FUNC_4(&VAR_7->list_lock, VAR_14);
   FUNC_2(&VAR_13->head, &VAR_7->list);
   FUNC_5(&VAR_7->list_lock, VAR_14);
  }
 }
 if (VAR_15)
  VAR_13->event = ((void*)0);
 return VAR_15;
}

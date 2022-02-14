
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_event {int* refs; int types_nr; TYPE_1__* func; int refs_lock; } ;
struct TYPE_2__ {int (* init ) (struct nvkm_event*,int,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_event*,int,int) ;

void
FUNC_3(struct nvkm_event *VAR_0, u32 VAR_1, int VAR_2)
{
 FUNC_1(&VAR_0->refs_lock);
 while (VAR_1) {
  int VAR_3 = FUNC_0(VAR_1); VAR_1 &= ~(1 << VAR_3);
  if (++VAR_0->refs[VAR_2 * VAR_0->types_nr + VAR_3] == 1) {
   if (VAR_0->func->init)
    VAR_0->func->init(VAR_0, 1 << VAR_3, VAR_2);
  }
 }
}

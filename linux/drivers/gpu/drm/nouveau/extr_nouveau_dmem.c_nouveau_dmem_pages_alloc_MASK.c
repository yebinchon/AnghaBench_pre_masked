
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {TYPE_1__* dmem; } ;
struct nouveau_dmem_chunk {unsigned long pfn_first; int lock; int bitmap; int callocated; } ;
struct TYPE_2__ {int mutex; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long*,int,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nouveau_drm*) ;
 struct nouveau_dmem_chunk* FUNC_6 (struct nouveau_drm*) ;
 int FUNC_7 (unsigned long,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct nouveau_drm *VAR_1,
    unsigned long VAR_2,
    unsigned long *VAR_3)
{
 struct nouveau_dmem_chunk *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(VAR_3, 0xff, VAR_2 * sizeof(*VAR_3));

 FUNC_3(&VAR_1->dmem->mutex);
 for (VAR_5 = 0; VAR_5 < VAR_2;) {
  unsigned long VAR_7;

  VAR_4 = FUNC_6(VAR_1);
  if (VAR_4 == ((void*)0)) {
   FUNC_4(&VAR_1->dmem->mutex);
   VAR_6 = FUNC_5(VAR_1);
   if (VAR_6) {
    if (VAR_5)
     return 0;
    return VAR_6;
   }
   FUNC_3(&VAR_1->dmem->mutex);
   continue;
  }

  FUNC_8(&VAR_4->lock);
  VAR_7 = FUNC_0(VAR_4->bitmap, VAR_0);
  while (VAR_7 < VAR_0 && VAR_5 < VAR_2) {
   VAR_3[VAR_5] = VAR_4->pfn_first + VAR_7;
   FUNC_7(VAR_7, VAR_4->bitmap);
   VAR_4->callocated++;
   VAR_5++;

   VAR_7 = FUNC_1(VAR_4->bitmap,
     VAR_0, VAR_7);
  }
  FUNC_9(&VAR_4->lock);
 }
 FUNC_4(&VAR_1->dmem->mutex);

 return 0;
}

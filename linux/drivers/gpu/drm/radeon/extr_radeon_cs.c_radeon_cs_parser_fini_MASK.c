
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* fence; } ;
struct radeon_cs_parser {unsigned int nrelocs; unsigned int nchunks; TYPE_3__ const_ib; int rdev; TYPE_3__ ib; TYPE_5__* chunks_array; TYPE_5__* chunks; TYPE_4__* vm_bos; TYPE_4__* relocs; TYPE_5__* track; int validated; int ticket; } ;
struct TYPE_7__ {int base; } ;
struct radeon_bo {TYPE_2__ tbo; } ;
struct TYPE_10__ {TYPE_4__* kdata; } ;
struct TYPE_9__ {struct radeon_bo* robj; } ;
struct TYPE_6__ {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_7(struct radeon_cs_parser *VAR_1, int VAR_2, bool VAR_3)
{
 unsigned VAR_4;

 if (!VAR_2) {
  FUNC_3(((void*)0), &VAR_1->validated, VAR_0);

  FUNC_6(&VAR_1->ticket,
         &VAR_1->validated,
         &VAR_1->ib.fence->base);
 } else if (VAR_3) {
  FUNC_5(&VAR_1->ticket,
        &VAR_1->validated);
 }

 if (VAR_1->relocs != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_1->nrelocs; VAR_4++) {
   struct radeon_bo *VAR_5 = VAR_1->relocs[VAR_4].robj;
   if (VAR_5 == ((void*)0))
    continue;

   FUNC_0(&VAR_5->tbo.base);
  }
 }
 FUNC_1(VAR_1->track);
 FUNC_2(VAR_1->relocs);
 FUNC_2(VAR_1->vm_bos);
 for (VAR_4 = 0; VAR_4 < VAR_1->nchunks; VAR_4++)
  FUNC_2(VAR_1->chunks[VAR_4].kdata);
 FUNC_1(VAR_1->chunks);
 FUNC_1(VAR_1->chunks_array);
 FUNC_4(VAR_1->rdev, &VAR_1->ib);
 FUNC_4(VAR_1->rdev, &VAR_1->const_ib);
}

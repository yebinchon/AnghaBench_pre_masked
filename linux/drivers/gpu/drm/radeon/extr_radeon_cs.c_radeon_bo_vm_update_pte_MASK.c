
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct radeon_vm {struct radeon_bo_va* ib_bo_va; } ;
struct TYPE_9__ {TYPE_2__* bo; } ;
struct radeon_device {int dev; TYPE_3__ ring_tmp_bo; } ;
struct TYPE_12__ {int sync; } ;
struct radeon_cs_parser {int nrelocs; TYPE_6__ ib; TYPE_4__* relocs; struct radeon_device* rdev; } ;
struct radeon_bo_va {int last_pt_update; } ;
struct TYPE_11__ {int mem; } ;
struct radeon_bo {TYPE_5__ tbo; } ;
struct TYPE_10__ {struct radeon_bo* robj; } ;
struct TYPE_7__ {int mem; } ;
struct TYPE_8__ {TYPE_1__ tbo; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,struct radeon_bo*,struct radeon_vm*) ;
 int FUNC_2 (int *,int ) ;
 struct radeon_bo_va* FUNC_3 (struct radeon_vm*,struct radeon_bo*) ;
 int FUNC_4 (struct radeon_device*,struct radeon_bo_va*,int *) ;
 int FUNC_5 (struct radeon_device*,struct radeon_vm*) ;
 int FUNC_6 (struct radeon_device*,struct radeon_vm*) ;
 int FUNC_7 (struct radeon_device*,struct radeon_vm*) ;

__attribute__((used)) static int FUNC_8(struct radeon_cs_parser *VAR_1,
       struct radeon_vm *VAR_2)
{
 struct radeon_device *VAR_3 = VAR_1->rdev;
 struct radeon_bo_va *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_7(VAR_3, VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_3, VAR_2);
 if (VAR_6)
  return VAR_6;

 if (VAR_2->ib_bo_va == ((void*)0)) {
  FUNC_0("Tmp BO not in VM!\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_2->ib_bo_va,
    &VAR_3->ring_tmp_bo.bo->tbo.mem);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1->nrelocs; VAR_5++) {
  struct radeon_bo *VAR_7;

  VAR_7 = VAR_1->relocs[VAR_5].robj;
  VAR_4 = FUNC_3(VAR_2, VAR_7);
  if (VAR_4 == ((void*)0)) {
   FUNC_1(VAR_3->dev, "bo %p not in vm %p\n", VAR_7, VAR_2);
   return -VAR_0;
  }

  VAR_6 = FUNC_4(VAR_3, VAR_4, &VAR_7->tbo.mem);
  if (VAR_6)
   return VAR_6;

  FUNC_2(&VAR_1->ib.sync, VAR_4->last_pt_update);
 }

 return FUNC_6(VAR_3, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_vm_pt {int dummy; } ;
struct radeon_vm {int * page_directory; int * page_tables; int cleared; int freed; int invalidated; int status_lock; int va; int mutex; TYPE_1__* ids; int * ib_bo_va; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {int * last_id_use; int * flushed_updates; scalar_t__ id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (unsigned int,int ) ;
 unsigned int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*,unsigned int,unsigned int const,int,int ,int ,int *,int *,int **) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (struct radeon_device*,int *) ;
 unsigned int FUNC_8 (struct radeon_device*) ;
 unsigned int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct radeon_device *VAR_7, struct radeon_vm *VAR_8)
{
 const unsigned VAR_9 = FUNC_3(VAR_4,
  VAR_5 * 8);
 unsigned VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_8->ib_bo_va = ((void*)0);
 for (VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13) {
  VAR_8->ids[VAR_13].id = 0;
  VAR_8->ids[VAR_13].flushed_updates = ((void*)0);
  VAR_8->ids[VAR_13].last_id_use = ((void*)0);
 }
 FUNC_4(&VAR_8->mutex);
 VAR_8->va = VAR_6;
 FUNC_10(&VAR_8->status_lock);
 FUNC_1(&VAR_8->invalidated);
 FUNC_1(&VAR_8->freed);
 FUNC_1(&VAR_8->cleared);

 VAR_10 = FUNC_8(VAR_7);
 VAR_11 = FUNC_9(VAR_7);


 VAR_12 = VAR_11 * sizeof(struct radeon_vm_pt);
 VAR_8->page_tables = FUNC_2(VAR_12, VAR_1);
 if (VAR_8->page_tables == ((void*)0)) {
  FUNC_0("Cannot allocate memory for page table array\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_5(VAR_7, VAR_10, VAR_9, 1,
        VAR_2, 0, ((void*)0),
        ((void*)0), &VAR_8->page_directory);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_7(VAR_7, VAR_8->page_directory);
 if (VAR_14) {
  FUNC_6(&VAR_8->page_directory);
  VAR_8->page_directory = ((void*)0);
  return VAR_14;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct radeon_vm_id {scalar_t__ pd_gpu_addr; int id; scalar_t__ flushed_updates; } ;
struct radeon_vm {struct radeon_vm_id* ids; int page_directory; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int * ring; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,struct radeon_fence*) ;
 scalar_t__ FUNC_2 (struct radeon_fence*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (struct radeon_device*,int *,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__,int,int ) ;

void FUNC_6(struct radeon_device *VAR_0,
       struct radeon_vm *VAR_1,
       int VAR_2, struct radeon_fence *VAR_3)
{
 uint64_t VAR_4 = FUNC_0(VAR_1->page_directory);
 struct radeon_vm_id *VAR_5 = &VAR_1->ids[VAR_2];

 if (VAR_4 != VAR_5->pd_gpu_addr || !VAR_5->flushed_updates ||
     FUNC_1(VAR_5->flushed_updates, VAR_3)) {

  FUNC_5(VAR_4, VAR_2, VAR_1->ids[VAR_2].id);
  FUNC_3(&VAR_5->flushed_updates);
  VAR_5->flushed_updates = FUNC_2(VAR_3);
  VAR_5->pd_gpu_addr = VAR_4;
  FUNC_4(VAR_0, &VAR_0->ring[VAR_2],
         VAR_5->id, VAR_5->pd_gpu_addr);

 }
}

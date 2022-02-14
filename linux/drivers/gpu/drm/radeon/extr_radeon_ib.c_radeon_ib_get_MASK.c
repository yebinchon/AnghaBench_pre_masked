
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_vm {int dummy; } ;
struct radeon_ib {int ring; int is_const_ib; TYPE_1__* sa_bo; scalar_t__ gpu_addr; struct radeon_vm* vm; int ptr; int * fence; int sync; } ;
struct radeon_device {int dev; int ring_tmp_bo; } ;
struct TYPE_4__ {scalar_t__ soffset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct radeon_device*,int *,TYPE_1__**,unsigned int,int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct radeon_device *VAR_1, int VAR_2,
    struct radeon_ib *VAR_3, struct radeon_vm *VAR_4,
    unsigned VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_1, &VAR_1->ring_tmp_bo, &VAR_3->sa_bo, VAR_5, 256);
 if (VAR_6) {
  FUNC_0(VAR_1->dev, "failed to get a new IB (%d)\n", VAR_6);
  return VAR_6;
 }

 FUNC_4(&VAR_3->sync);

 VAR_3->ring = VAR_2;
 VAR_3->fence = ((void*)0);
 VAR_3->ptr = FUNC_1(VAR_3->sa_bo);
 VAR_3->vm = VAR_4;
 if (VAR_4) {



  VAR_3->gpu_addr = VAR_3->sa_bo->soffset + VAR_0;
 } else {
  VAR_3->gpu_addr = FUNC_2(VAR_3->sa_bo);
 }
 VAR_3->is_const_ib = 0;

 return 0;
}

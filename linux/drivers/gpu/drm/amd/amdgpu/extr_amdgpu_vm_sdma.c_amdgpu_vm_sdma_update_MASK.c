
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint64_t ;
typedef scalar_t__ uint32_t ;
struct amdgpu_vm_update_params {unsigned int num_dw_left; scalar_t__ pages_addr; TYPE_5__* job; TYPE_4__* adev; } ;
struct amdgpu_bo {struct amdgpu_bo* shadow; } ;
struct TYPE_10__ {TYPE_3__* ibs; } ;
struct TYPE_7__ {TYPE_1__* vm_pte_funcs; } ;
struct TYPE_9__ {TYPE_2__ vm_manager; } ;
struct TYPE_8__ {int * ptr; scalar_t__ length_dw; } ;
struct TYPE_6__ {int copy_pte_num_dw; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,unsigned int,TYPE_5__**) ;
 unsigned int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (struct amdgpu_vm_update_params*,int *) ;
 int FUNC_3 (struct amdgpu_vm_update_params*,struct amdgpu_bo*,unsigned int,unsigned int) ;
 int FUNC_4 (struct amdgpu_vm_update_params*,struct amdgpu_bo*,unsigned int,unsigned int,unsigned int,scalar_t__,unsigned int) ;
 unsigned int FUNC_5 (unsigned int,int ) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_vm_update_params *VAR_2,
     struct amdgpu_bo *VAR_3, uint64_t VAR_4,
     uint64_t VAR_5, unsigned VAR_6, uint32_t VAR_7,
     uint64_t VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;
 uint64_t *VAR_12;
 int VAR_13;

 do {
  VAR_10 = VAR_2->num_dw_left;
  VAR_10 -= VAR_2->job->ibs->length_dw;

  if (VAR_10 < 32) {
   VAR_13 = FUNC_2(VAR_2, ((void*)0));
   if (VAR_13)
    return VAR_13;


   VAR_10 = 32;
   if (VAR_2->pages_addr)
    VAR_10 += VAR_6 * 2;
   VAR_10 = FUNC_5(VAR_10, VAR_1);
   VAR_10 = FUNC_6(VAR_10, VAR_0);

   VAR_13 = FUNC_0(VAR_2->adev, VAR_10 * 4, &VAR_2->job);
   if (VAR_13)
    return VAR_13;

   VAR_2->num_dw_left = VAR_10;
  }

  if (!VAR_2->pages_addr) {

   if (VAR_3->shadow)
    FUNC_4(VAR_2, VAR_3->shadow, VAR_4, VAR_5,
       VAR_6, VAR_7, VAR_8);
   FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8);
   return 0;
  }


  VAR_10 -= VAR_2->adev->vm_manager.vm_pte_funcs->copy_pte_num_dw *
   (VAR_3->shadow ? 2 : 1);


  VAR_10 -= 7;

  VAR_11 = FUNC_6(VAR_6, VAR_10 / 2);


  VAR_2->num_dw_left -= VAR_11 * 2;
  VAR_12 = (uint64_t *)&(VAR_2->job->ibs->ptr[VAR_2->num_dw_left]);
  for (VAR_9 = 0; VAR_9 < VAR_11; ++VAR_9, VAR_5 += VAR_7) {
   VAR_12[VAR_9] = FUNC_1(VAR_2->pages_addr, VAR_5);
   VAR_12[VAR_9] |= VAR_8;
  }

  if (VAR_3->shadow)
   FUNC_3(VAR_2, VAR_3->shadow, VAR_4, VAR_11);
  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_11);

  VAR_4 += VAR_11 * 8;
  VAR_6 -= VAR_11;
 } while (VAR_6);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct kfd_process_device {int scratch_base; int scratch_limit; TYPE_2__* dev; scalar_t__ gpuvm_limit; int gpuvm_base; int lds_base; int lds_limit; } ;
struct TYPE_3__ {scalar_t__ gpuvm_size; } ;
struct TYPE_4__ {TYPE_1__ shared_resources; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct kfd_process_device *VAR_1, uint8_t VAR_2)
{
 VAR_1->lds_base = FUNC_0();
 VAR_1->lds_limit = FUNC_1(VAR_1->lds_base);







 VAR_1->gpuvm_base = VAR_0;
 VAR_1->gpuvm_limit =
  VAR_1->dev->shared_resources.gpuvm_size - 1;

 VAR_1->scratch_base = FUNC_2();
 VAR_1->scratch_limit = FUNC_3(VAR_1->scratch_base);
}

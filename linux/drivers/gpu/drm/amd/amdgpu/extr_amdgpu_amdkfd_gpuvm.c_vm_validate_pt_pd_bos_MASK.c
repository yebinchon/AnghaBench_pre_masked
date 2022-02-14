
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_vm_parser {int wait; int domain; } ;
struct TYPE_5__ {struct amdgpu_bo* bo; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct amdgpu_vm {scalar_t__ use_cpu_for_update; TYPE_3__ root; int pd_phys_addr; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_4__ {int bdev; } ;
struct amdgpu_bo {TYPE_1__ tbo; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_vm_parser*,struct amdgpu_bo*) ;
 int FUNC_1 (struct amdgpu_bo*,int *) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 struct amdgpu_device* FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_vm*,int (*) (struct amdgpu_vm_parser*,struct amdgpu_bo*),struct amdgpu_vm_parser*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_vm *VAR_1)
{
 struct amdgpu_bo *VAR_2 = VAR_1->root.base.bo;
 struct amdgpu_device *VAR_3 = FUNC_3(VAR_2->tbo.bdev);
 struct amdgpu_vm_parser VAR_4;
 int VAR_5;

 VAR_4.domain = VAR_0;
 VAR_4.wait = 0;

 VAR_5 = FUNC_4(VAR_3, VAR_1, FUNC_0,
     &VAR_4);
 if (VAR_5) {
  FUNC_5("amdgpu: failed to validate PT BOs\n");
  return VAR_5;
 }

 VAR_5 = FUNC_0(&VAR_4, VAR_2);
 if (VAR_5) {
  FUNC_5("amdgpu: failed to validate PD\n");
  return VAR_5;
 }

 VAR_1->pd_phys_addr = FUNC_2(VAR_1->root.base.bo);

 if (VAR_1->use_cpu_for_update) {
  VAR_5 = FUNC_1(VAR_2, ((void*)0));
  if (VAR_5) {
   FUNC_5("amdgpu: failed to kmap PD, ret=%d\n", VAR_5);
   return VAR_5;
  }
 }

 return 0;
}

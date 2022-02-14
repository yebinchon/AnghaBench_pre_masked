
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ras_common_if {int dummy; } ;
struct ras_dispatch_if {struct ras_common_if head; struct amdgpu_iv_entry* entry; } ;
struct amdgpu_iv_entry {int dummy; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {struct ras_common_if* ras_if; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;


 int FUNC_0 (struct amdgpu_device*,struct ras_dispatch_if*) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_0,
          struct amdgpu_irq_src *VAR_1,
          struct amdgpu_iv_entry *VAR_2)
{
 struct ras_common_if *VAR_3 = VAR_0->sdma.ras_if;
 struct ras_dispatch_if VAR_4 = {
  .entry = VAR_2,
 };

 if (!VAR_3)
  return 0;

 VAR_4.head = *VAR_3;

 FUNC_0(VAR_0, &VAR_4);
 return 0;
}

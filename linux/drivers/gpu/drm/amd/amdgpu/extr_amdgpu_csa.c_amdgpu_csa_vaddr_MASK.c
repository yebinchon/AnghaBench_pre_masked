
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int max_pfn; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

uint64_t FUNC_1(struct amdgpu_device *VAR_2)
{
 uint64_t VAR_3 = VAR_2->vm_manager.max_pfn << VAR_0;

 VAR_3 -= VAR_1;
 VAR_3 = FUNC_0(VAR_3);

 return VAR_3;
}

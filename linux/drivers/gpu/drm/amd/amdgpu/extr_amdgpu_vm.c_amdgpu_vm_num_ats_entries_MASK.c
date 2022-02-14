
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root_level; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct amdgpu_device*,int ) ;

__attribute__((used)) static unsigned FUNC_1(struct amdgpu_device *VAR_2)
{
 unsigned VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_2->vm_manager.root_level);
 return VAR_0 >> (VAR_3 + VAR_1);
}

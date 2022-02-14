
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fw_dmcu; } ;
struct amdgpu_device {TYPE_1__ dm; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 if(VAR_1->dm.fw_dmcu) {
  FUNC_0(VAR_1->dm.fw_dmcu);
  VAR_1->dm.fw_dmcu = ((void*)0);
 }

 return 0;
}

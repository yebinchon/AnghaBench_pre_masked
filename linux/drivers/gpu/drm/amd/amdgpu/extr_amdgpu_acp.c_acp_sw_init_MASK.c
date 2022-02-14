
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cgs_device; int parent; } ;
struct amdgpu_device {TYPE_1__ acp; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;

 VAR_2->acp.parent = VAR_2->dev;

 VAR_2->acp.cgs_device =
  FUNC_0(VAR_2);
 if (!VAR_2->acp.cgs_device)
  return -VAR_0;

 return 0;
}

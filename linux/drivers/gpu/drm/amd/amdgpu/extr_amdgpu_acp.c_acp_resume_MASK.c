
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int acp_cell; } ;
struct amdgpu_device {TYPE_1__ acp; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;


 if (!VAR_2->acp.acp_cell)
  FUNC_0(VAR_2, VAR_0, 1);
 return 0;
}

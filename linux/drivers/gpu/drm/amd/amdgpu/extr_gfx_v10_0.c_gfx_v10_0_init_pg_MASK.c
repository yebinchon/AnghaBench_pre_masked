
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int num_vmhubs; } ;


 int FUNC_0 (struct amdgpu_device*,int ,int,int ) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_vmhubs; VAR_1++)
  FUNC_0(VAR_0, 0, VAR_1, 0);


 return;
}

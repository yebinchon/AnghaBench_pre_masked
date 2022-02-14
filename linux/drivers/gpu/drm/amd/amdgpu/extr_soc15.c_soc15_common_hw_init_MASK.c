
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_device {TYPE_1__* nbio_funcs; } ;
struct TYPE_2__ {int (* remap_hdp_registers ) (struct amdgpu_device*) ;int (* init_registers ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_6(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;


 FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 VAR_1->nbio_funcs->init_registers(VAR_1);




 if (VAR_1->nbio_funcs->remap_hdp_registers)
  VAR_1->nbio_funcs->remap_hdp_registers(VAR_1);


 FUNC_1(VAR_1, 1);





 FUNC_0(VAR_1);

 return 0;
}

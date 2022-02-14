
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct amdgpu_device {scalar_t__ usec_timeout; TYPE_1__* nbio_funcs; int pdev; int dev; } ;
struct TYPE_2__ {scalar_t__ (* get_memsize ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct amdgpu_device*) ;
 scalar_t__ FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_0)
{
 u32 VAR_1;
 int VAR_2 = 0;

 FUNC_0(VAR_0, 1);

 FUNC_2(VAR_0->dev, "GPU mode1 reset\n");


 FUNC_3(VAR_0->pdev);

 FUNC_5(VAR_0->pdev);

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2)
  FUNC_1(VAR_0->dev, "GPU mode1 reset failed\n");

 FUNC_4(VAR_0->pdev);


 for (VAR_1 = 0; VAR_1 < VAR_0->usec_timeout; VAR_1++) {
  u32 VAR_3 = VAR_0->nbio_funcs->get_memsize(VAR_0);

  if (VAR_3 != 0xffffffff)
   break;
  FUNC_8(1);
 }

 FUNC_0(VAR_0, 0);

 return VAR_2;
}

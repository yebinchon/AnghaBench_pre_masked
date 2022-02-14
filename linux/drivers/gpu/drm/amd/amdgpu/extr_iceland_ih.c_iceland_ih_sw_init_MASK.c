
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ih; } ;
struct amdgpu_device {TYPE_1__ irq; } ;


 int FUNC_0 (struct amdgpu_device*,int *,int,int) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 int VAR_1;
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 VAR_1 = FUNC_0(VAR_2, &VAR_2->irq.ih, 64 * 1024, 0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_2);

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ih; } ;
struct TYPE_6__ {int use_doorbell; int doorbell_index; } ;
struct TYPE_5__ {TYPE_3__ ih; } ;
struct amdgpu_device {TYPE_1__ doorbell_index; TYPE_2__ irq; } ;


 int FUNC_0 (struct amdgpu_device*,TYPE_3__*,int,int) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 int VAR_1;
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 VAR_1 = FUNC_0(VAR_2, &VAR_2->irq.ih, 64 * 1024, 1);
 if (VAR_1)
  return VAR_1;

 VAR_2->irq.ih.use_doorbell = 1;
 VAR_2->irq.ih.doorbell_index = VAR_2->doorbell_index.ih;

 VAR_1 = FUNC_1(VAR_2);

 return VAR_1;
}

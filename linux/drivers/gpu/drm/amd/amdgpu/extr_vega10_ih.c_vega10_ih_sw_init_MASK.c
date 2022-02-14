
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ih; } ;
struct TYPE_6__ {int use_doorbell; int doorbell_index; } ;
struct TYPE_4__ {TYPE_3__ ih2; TYPE_3__ ih1; TYPE_3__ ih; int self_irq; } ;
struct amdgpu_device {TYPE_2__ doorbell_index; TYPE_1__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,TYPE_3__*,int,int) ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int *) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_2;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1, 0,
         &VAR_3->irq.self_irq);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, &VAR_3->irq.ih, 256 * 1024, 1);
 if (VAR_4)
  return VAR_4;

 VAR_3->irq.ih.use_doorbell = 1;
 VAR_3->irq.ih.doorbell_index = VAR_3->doorbell_index.ih << 1;

 VAR_4 = FUNC_0(VAR_3, &VAR_3->irq.ih1, VAR_0, 1);
 if (VAR_4)
  return VAR_4;

 VAR_3->irq.ih1.use_doorbell = 1;
 VAR_3->irq.ih1.doorbell_index = (VAR_3->doorbell_index.ih + 1) << 1;

 VAR_4 = FUNC_0(VAR_3, &VAR_3->irq.ih2, VAR_0, 1);
 if (VAR_4)
  return VAR_4;

 VAR_3->irq.ih2.use_doorbell = 1;
 VAR_3->irq.ih2.doorbell_index = (VAR_3->doorbell_index.ih + 2) << 1;

 VAR_4 = FUNC_2(VAR_3);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ih; } ;
struct TYPE_8__ {int use_doorbell; int doorbell_index; } ;
struct TYPE_7__ {TYPE_4__ ih; } ;
struct TYPE_6__ {scalar_t__ load_type; } ;
struct amdgpu_device {TYPE_1__ doorbell_index; TYPE_3__ irq; TYPE_2__ firmware; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,TYPE_4__*,int,int) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 int VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;
 bool VAR_4;




 VAR_4 =
  (VAR_3->firmware.load_type == VAR_0) ? 0 : 1;
 VAR_2 = FUNC_0(VAR_3, &VAR_3->irq.ih, 256 * 1024, VAR_4);
 if (VAR_2)
  return VAR_2;

 VAR_3->irq.ih.use_doorbell = 1;
 VAR_3->irq.ih.doorbell_index = VAR_3->doorbell_index.ih << 1;

 VAR_2 = FUNC_1(VAR_3);

 return VAR_2;
}

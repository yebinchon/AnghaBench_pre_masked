
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kgd_dev {int dummy; } ;
struct kfd2kgd_calls {int dummy; } ;
struct TYPE_3__ {scalar_t__ real_vram_size; } ;
struct TYPE_4__ {int dev; } ;
struct amdgpu_device {int asic_type; TYPE_1__ gmc; TYPE_2__ kfd; int pdev; int dev; } ;
 struct kfd2kgd_calls* FUNC_0 () ;
 struct kfd2kgd_calls* FUNC_1 () ;
 struct kfd2kgd_calls* FUNC_2 () ;
 struct kfd2kgd_calls* FUNC_3 () ;
 struct kfd2kgd_calls* FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct kgd_dev*,int ,struct kfd2kgd_calls const*) ;

void FUNC_7(struct amdgpu_device *VAR_1)
{
 const struct kfd2kgd_calls *VAR_2;

 switch (VAR_1->asic_type) {






 case 143:
 case 132:
 case 142:
 case 136:
 case 135:
 case 134:
 case 128:
  VAR_2 = FUNC_3();
  break;
 case 131:
 case 130:
 case 129:
 case 133:
  VAR_2 = FUNC_4();
  break;
 case 144:
  VAR_2 = FUNC_0();
  break;
 case 139:
 case 137:
 case 138:
  VAR_2 = FUNC_1();
  break;
 default:
  FUNC_5(VAR_1->dev, "kfd not supported on this ASIC\n");
  return;
 }

 VAR_1->kfd.dev = FUNC_6((struct kgd_dev *)VAR_1,
          VAR_1->pdev, VAR_2);

 if (VAR_1->kfd.dev)
  VAR_0 += VAR_1->gmc.real_vram_size;
}

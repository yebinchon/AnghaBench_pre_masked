
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_device {int asic_type; TYPE_1__* pdev; } ;
struct TYPE_2__ {int revision; int subsystem_device; int subsystem_vendor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_device*,int,int,int,int) ;
 int FUNC_3 (struct amdgpu_device*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_22)
{
 switch (VAR_22->asic_type) {
 case 129:
  FUNC_3(VAR_22,
       VAR_12,
       FUNC_0(VAR_12));
  FUNC_3(VAR_22,
       VAR_6,
       FUNC_0(VAR_6));
  FUNC_3(VAR_22,
       VAR_11,
       FUNC_0(VAR_11));
  break;
 case 135:
  FUNC_3(VAR_22,
       VAR_4,
       FUNC_0(VAR_4));
  FUNC_3(VAR_22,
       VAR_5,
       FUNC_0(VAR_5));
  FUNC_3(VAR_22,
       VAR_3,
       FUNC_0(VAR_3));
  break;

 case 130:
  FUNC_3(VAR_22,
       VAR_20,
       FUNC_0(VAR_20));
  FUNC_3(VAR_22,
       VAR_9,
       FUNC_0(VAR_9));
  FUNC_3(VAR_22,
       VAR_19,
       FUNC_0(VAR_19));
  break;
 case 128:
  FUNC_3(VAR_22,
       VAR_10,
       FUNC_0(VAR_10));
  FUNC_3(VAR_22,
       VAR_21,
       FUNC_0(VAR_21));
  break;
 case 133:
 case 132:
  FUNC_3(VAR_22,
       VAR_8,
       FUNC_0(VAR_8));
  FUNC_3(VAR_22,
       VAR_15,
       FUNC_0(VAR_15));
  break;
 case 134:
  FUNC_3(VAR_22,
       VAR_7,
       FUNC_0(VAR_7));
  FUNC_3(VAR_22,
       VAR_14,
       FUNC_0(VAR_14));
  FUNC_1(VAR_13, 0x0000001C);
  if (VAR_22->pdev->revision == 0xc7 &&
      ((VAR_22->pdev->subsystem_device == 0xb37 && VAR_22->pdev->subsystem_vendor == 0x1002) ||
       (VAR_22->pdev->subsystem_device == 0x4a8 && VAR_22->pdev->subsystem_vendor == 0x1043) ||
       (VAR_22->pdev->subsystem_device == 0x9480 && VAR_22->pdev->subsystem_vendor == 0x1682))) {
   FUNC_2(VAR_22, 0x10, 0x96, 0x1E, 0xDD);
   FUNC_2(VAR_22, 0x10, 0x96, 0x1F, 0xD0);
  }
  break;
 case 136:
  FUNC_3(VAR_22,
       VAR_2,
       FUNC_0(VAR_2));
  FUNC_3(VAR_22,
       VAR_1,
       FUNC_0(VAR_1));
  FUNC_3(VAR_22,
       VAR_0,
       FUNC_0(VAR_0));
  break;
 case 131:
  FUNC_3(VAR_22,
       VAR_18,
       FUNC_0(VAR_18));
  FUNC_3(VAR_22,
       VAR_17,
       FUNC_0(VAR_17));
  FUNC_3(VAR_22,
       VAR_16,
       FUNC_0(VAR_16));
  break;
 default:
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int family; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct radeon_device*,int ,int const) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_5)
{
 switch (VAR_5->family) {
 case 128:
  FUNC_1(VAR_5,
       VAR_0,
       (const u32)FUNC_0(VAR_0));
  FUNC_1(VAR_5,
       VAR_1,
       (const u32)FUNC_0(VAR_1));
  break;
 case 129:
  if ((VAR_5->pdev->device == 0x9900) ||
      (VAR_5->pdev->device == 0x9901) ||
      (VAR_5->pdev->device == 0x9903) ||
      (VAR_5->pdev->device == 0x9904) ||
      (VAR_5->pdev->device == 0x9905) ||
      (VAR_5->pdev->device == 0x9906) ||
      (VAR_5->pdev->device == 0x9907) ||
      (VAR_5->pdev->device == 0x9908) ||
      (VAR_5->pdev->device == 0x9909) ||
      (VAR_5->pdev->device == 0x990A) ||
      (VAR_5->pdev->device == 0x990B) ||
      (VAR_5->pdev->device == 0x990C) ||
      (VAR_5->pdev->device == 0x990D) ||
      (VAR_5->pdev->device == 0x990E) ||
      (VAR_5->pdev->device == 0x990F) ||
      (VAR_5->pdev->device == 0x9910) ||
      (VAR_5->pdev->device == 0x9913) ||
      (VAR_5->pdev->device == 0x9917) ||
      (VAR_5->pdev->device == 0x9918)) {
   FUNC_1(VAR_5,
        VAR_2,
        (const u32)FUNC_0(VAR_2));
   FUNC_1(VAR_5,
        VAR_3,
        (const u32)FUNC_0(VAR_3));
  } else {
   FUNC_1(VAR_5,
        VAR_4,
        (const u32)FUNC_0(VAR_4));
   FUNC_1(VAR_5,
        VAR_3,
        (const u32)FUNC_0(VAR_3));
  }
  break;
 default:
  break;
 }
}

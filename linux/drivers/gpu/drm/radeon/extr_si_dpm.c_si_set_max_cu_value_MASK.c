
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si_power_info {int max_cu; } ;
struct radeon_device {scalar_t__ family; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 scalar_t__ VAR_0 ;
 struct si_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_1)
{
 struct si_power_info *VAR_2 = FUNC_0(VAR_1);

 if (VAR_1->family == VAR_0) {
  switch (VAR_1->pdev->device) {
  case 0x6820:
  case 0x6825:
  case 0x6821:
  case 0x6823:
  case 0x6827:
   VAR_2->max_cu = 10;
   break;
  case 0x682D:
  case 0x6824:
  case 0x682F:
  case 0x6826:
   VAR_2->max_cu = 8;
   break;
  case 0x6828:
  case 0x6830:
  case 0x6831:
  case 0x6838:
  case 0x6839:
  case 0x683D:
   VAR_2->max_cu = 10;
   break;
  case 0x683B:
  case 0x683F:
  case 0x6829:
   VAR_2->max_cu = 8;
   break;
  default:
   VAR_2->max_cu = 0;
   break;
  }
 } else {
  VAR_2->max_cu = 0;
 }
}

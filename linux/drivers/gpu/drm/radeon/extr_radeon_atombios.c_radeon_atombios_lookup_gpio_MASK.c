
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct radeon_gpio_rec {int valid; scalar_t__ id; int reg; int shift; int mask; } ;
struct TYPE_3__ {struct atom_context* atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct atom_context {int bios; } ;
struct _ATOM_GPIO_PIN_LUT {TYPE_2__* asGPIO_Pin; } ;
struct TYPE_4__ {scalar_t__ ucGPIO_ID; int ucGpioPinBitShift; int usGpioPin_AIndex; } ;
typedef TYPE_2__ ATOM_GPIO_PIN_ASSIGNMENT ;
typedef int ATOM_COMMON_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct atom_context*,int,int*,int *,int *,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_gpio_rec*,int ,int) ;

struct radeon_gpio_rec FUNC_4(struct radeon_device *VAR_2,
         u8 VAR_3)
{
 struct atom_context *VAR_4 = VAR_2->mode_info.atom_context;
 struct radeon_gpio_rec VAR_5;
 int VAR_6 = FUNC_0(VAR_0, VAR_1);
 struct _ATOM_GPIO_PIN_LUT *VAR_7;
 ATOM_GPIO_PIN_ASSIGNMENT *VAR_8;
 u16 VAR_9, VAR_10;
 int VAR_11, VAR_12;

 FUNC_3(&VAR_5, 0, sizeof(struct radeon_gpio_rec));
 VAR_5.valid = 0;

 if (FUNC_1(VAR_4, VAR_6, &VAR_10, ((void*)0), ((void*)0), &VAR_9)) {
  VAR_7 = (struct _ATOM_GPIO_PIN_LUT *)(VAR_4->bios + VAR_9);

  VAR_12 = (VAR_10 - sizeof(ATOM_COMMON_TABLE_HEADER)) /
   sizeof(ATOM_GPIO_PIN_ASSIGNMENT);

  VAR_8 = VAR_7->asGPIO_Pin;
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   if (VAR_3 == VAR_8->ucGPIO_ID) {
    VAR_5.id = VAR_8->ucGPIO_ID;
    VAR_5.reg = FUNC_2(VAR_8->usGpioPin_AIndex) * 4;
    VAR_5.shift = VAR_8->ucGpioPinBitShift;
    VAR_5.mask = (1 << VAR_8->ucGpioPinBitShift);
    VAR_5.valid = 1;
    break;
   }
   VAR_8 = (ATOM_GPIO_PIN_ASSIGNMENT *)
    ((u8 *)VAR_8 + sizeof(ATOM_GPIO_PIN_ASSIGNMENT));
  }
 }

 return VAR_5;
}

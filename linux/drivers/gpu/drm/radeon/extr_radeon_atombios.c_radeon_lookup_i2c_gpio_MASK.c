
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int u8 ;
struct radeon_i2c_bus_rec {int valid; } ;
struct TYPE_6__ {struct atom_context* atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct atom_context {int bios; } ;
struct _ATOM_GPIO_I2C_INFO {TYPE_3__* asGPIO_Info; } ;
struct TYPE_7__ {scalar_t__ ucAccess; } ;
struct TYPE_8__ {TYPE_2__ sucI2cId; } ;
typedef TYPE_3__ ATOM_GPIO_I2C_ASSIGMENT ;
typedef int ATOM_COMMON_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct atom_context*,int,int*,int *,int *,int*) ;
 int FUNC_2 (struct radeon_i2c_bus_rec*,int ,int) ;
 struct radeon_i2c_bus_rec FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct radeon_device*,TYPE_3__*,int) ;

__attribute__((used)) static struct radeon_i2c_bus_rec FUNC_5(struct radeon_device *VAR_2,
              uint8_t VAR_3)
{
 struct atom_context *VAR_4 = VAR_2->mode_info.atom_context;
 ATOM_GPIO_I2C_ASSIGMENT *VAR_5;
 struct radeon_i2c_bus_rec VAR_6;
 int VAR_7 = FUNC_0(VAR_0, VAR_1);
 struct _ATOM_GPIO_I2C_INFO *VAR_8;
 uint16_t VAR_9, VAR_10;
 int VAR_11, VAR_12;

 FUNC_2(&VAR_6, 0, sizeof(struct radeon_i2c_bus_rec));
 VAR_6.valid = 0;

 if (FUNC_1(VAR_4, VAR_7, &VAR_10, ((void*)0), ((void*)0), &VAR_9)) {
  VAR_8 = (struct _ATOM_GPIO_I2C_INFO *)(VAR_4->bios + VAR_9);

  VAR_12 = (VAR_10 - sizeof(ATOM_COMMON_TABLE_HEADER)) /
   sizeof(ATOM_GPIO_I2C_ASSIGMENT);

  VAR_5 = &VAR_8->asGPIO_Info[0];
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {

   FUNC_4(VAR_2, VAR_5, VAR_11);

   if (VAR_5->sucI2cId.ucAccess == VAR_3) {
    VAR_6 = FUNC_3(VAR_5);
    break;
   }
   VAR_5 = (ATOM_GPIO_I2C_ASSIGMENT *)
    ((u8 *)VAR_5 + sizeof(ATOM_GPIO_I2C_ASSIGMENT));
  }
 }

 return VAR_6;
}

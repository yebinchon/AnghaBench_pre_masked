
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u8 ;
struct atom_context {int bios; } ;
struct amdgpu_i2c_bus_rec {int i2c_id; scalar_t__ valid; } ;
struct TYPE_2__ {struct atom_context* atom_context; } ;
struct amdgpu_device {int ddev; int * i2c_bus; TYPE_1__ mode_info; } ;
struct _ATOM_GPIO_I2C_INFO {int * asGPIO_Info; } ;
typedef int ATOM_GPIO_I2C_ASSIGMENT ;
typedef int ATOM_COMMON_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct atom_context*,int,int*,int *,int *,int*) ;
 struct amdgpu_i2c_bus_rec FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_device*,int *,int) ;
 int FUNC_4 (int ,struct amdgpu_i2c_bus_rec*,char*) ;
 int FUNC_5 (char*,char*,int) ;

void FUNC_6(struct amdgpu_device *VAR_2)
{
 struct atom_context *VAR_3 = VAR_2->mode_info.atom_context;
 ATOM_GPIO_I2C_ASSIGMENT *VAR_4;
 struct amdgpu_i2c_bus_rec VAR_5;
 int VAR_6 = FUNC_0(VAR_0, VAR_1);
 struct _ATOM_GPIO_I2C_INFO *VAR_7;
 uint16_t VAR_8, VAR_9;
 int VAR_10, VAR_11;
 char VAR_12[32];

 if (FUNC_1(VAR_3, VAR_6, &VAR_9, ((void*)0), ((void*)0), &VAR_8)) {
  VAR_7 = (struct _ATOM_GPIO_I2C_INFO *)(VAR_3->bios + VAR_8);

  VAR_11 = (VAR_9 - sizeof(ATOM_COMMON_TABLE_HEADER)) /
   sizeof(ATOM_GPIO_I2C_ASSIGMENT);

  VAR_4 = &VAR_7->asGPIO_Info[0];
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   FUNC_3(VAR_2, VAR_4, VAR_10);

   VAR_5 = FUNC_2(VAR_4);

   if (VAR_5.valid) {
    FUNC_5(VAR_12, "0x%x", VAR_5.i2c_id);
    VAR_2->i2c_bus[VAR_10] = FUNC_4(VAR_2->ddev, &VAR_5, VAR_12);
   }
   VAR_4 = (ATOM_GPIO_I2C_ASSIGMENT *)
    ((u8 *)VAR_4 + sizeof(ATOM_GPIO_I2C_ASSIGMENT));
  }
 }
}

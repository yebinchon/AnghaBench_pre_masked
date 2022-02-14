
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* u8 ;
struct TYPE_3__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_4__ {int ucFlag; int ucTransBytes; void* ucLineNumber; void* ucSlaveAddr; int ucI2CSpeed; void* lpI2CDataOut; void* ucRegIndex; } ;
typedef TYPE_2__ PROCESS_I2C_CHANNEL_TRANSACTION_PS_ALLOCATION ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int *) ;

void FUNC_2(struct amdgpu_device* VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 PROCESS_I2C_CHANNEL_TRANSACTION_PS_ALLOCATION VAR_8;
 int VAR_9 = FUNC_0(VAR_0, VAR_1);

 VAR_8.ucRegIndex = VAR_6;
 VAR_8.lpI2CDataOut = VAR_7;
 VAR_8.ucFlag = 1;
 VAR_8.ucI2CSpeed = VAR_2;
 VAR_8.ucTransBytes = 1;
 VAR_8.ucSlaveAddr = VAR_4;
 VAR_8.ucLineNumber = VAR_5;

 FUNC_1(VAR_3->mode_info.atom_context, VAR_9, (uint32_t *)&VAR_8);
}

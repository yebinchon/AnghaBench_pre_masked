
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int usVoltageLevel; int ucVoltageMode; int ucVoltageType; } ;
union set_voltage {TYPE_1__ v3; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int atom_context; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct amdgpu_device *VAR_4,
           u16 *VAR_5)
{
 union set_voltage VAR_6;
 int VAR_7 = FUNC_1(VAR_1, VAR_3);
 u8 VAR_8, VAR_9;

 if (!FUNC_3(VAR_4->mode_info.atom_context, VAR_7, &VAR_8, &VAR_9))
  return -VAR_2;

 switch (VAR_9) {
 case 3:
 case 4:
  VAR_6.v3.ucVoltageType = 0;
  VAR_6.v3.ucVoltageMode = VAR_0;
  VAR_6.v3.usVoltageLevel = 0;

  FUNC_2(VAR_4->mode_info.atom_context, VAR_7, (uint32_t *)&VAR_6);

  *VAR_5 = FUNC_4(VAR_6.v3.usVoltageLevel);
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_8, VAR_9);
  return -VAR_2;
 }

 return 0;
}

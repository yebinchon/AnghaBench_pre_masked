
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ucVoltageType; int usVoltageLevel; int ucVoltageMode; } ;
struct TYPE_4__ {int usVoltageLevel; int ucVoltageMode; int ucVoltageType; } ;
union set_voltage {TYPE_3__ v3; TYPE_1__ v2; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int atom_context; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct amdgpu_device *VAR_5, u8 VAR_6,
        u16 VAR_7, u16 *VAR_8)
{
 union set_voltage VAR_9;
 int VAR_10 = FUNC_1(VAR_1, VAR_4);
 u8 VAR_11, VAR_12;

 if (!FUNC_3(VAR_5->mode_info.atom_context, VAR_10, &VAR_11, &VAR_12))
  return -VAR_2;

 switch (VAR_12) {
 case 1:
  return -VAR_2;
 case 2:
  VAR_9.v2.ucVoltageType = VAR_3;
  VAR_9.v2.ucVoltageMode = 0;
  VAR_9.v2.usVoltageLevel = 0;

  FUNC_2(VAR_5->mode_info.atom_context, VAR_10, (uint32_t *)&VAR_9);

  *VAR_8 = FUNC_5(VAR_9.v2.usVoltageLevel);
  break;
 case 3:
  VAR_9.v3.ucVoltageType = VAR_6;
  VAR_9.v3.ucVoltageMode = VAR_0;
  VAR_9.v3.usVoltageLevel = FUNC_4(VAR_7);

  FUNC_2(VAR_5->mode_info.atom_context, VAR_10, (uint32_t *)&VAR_9);

  *VAR_8 = FUNC_5(VAR_9.v3.usVoltageLevel);
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_11, VAR_12);
  return -VAR_2;
 }

 return 0;
}

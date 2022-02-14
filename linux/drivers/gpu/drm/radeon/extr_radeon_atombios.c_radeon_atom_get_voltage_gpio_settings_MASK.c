
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ucVoltageType; void* usVoltageLevel; int ucVoltageMode; } ;
union set_voltage {TYPE_2__ v2; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct radeon_device *VAR_5,
       u16 VAR_6, u8 VAR_7,
       u32 *VAR_8, u32 *VAR_9)
{
 union set_voltage VAR_10;
 int VAR_11 = FUNC_1(VAR_0, VAR_4);
 u8 VAR_12, VAR_13;

 if (!FUNC_3(VAR_5->mode_info.atom_context, VAR_11, &VAR_12, &VAR_13))
  return -VAR_1;

 switch (VAR_13) {
 case 1:
  return -VAR_1;
 case 2:
  VAR_10.v2.ucVoltageType = VAR_7;
  VAR_10.v2.ucVoltageMode = VAR_2;
  VAR_10.v2.usVoltageLevel = FUNC_4(VAR_6);

  FUNC_2(VAR_5->mode_info.atom_context, VAR_11, (uint32_t *)&VAR_10);

  *VAR_9 = FUNC_5(*(u32 *)&VAR_10.v2);

  VAR_10.v2.ucVoltageType = VAR_7;
  VAR_10.v2.ucVoltageMode = VAR_3;
  VAR_10.v2.usVoltageLevel = FUNC_4(VAR_6);

  FUNC_2(VAR_5->mode_info.atom_context, VAR_11, (uint32_t *)&VAR_10);

  *VAR_8 = FUNC_5(*(u32 *)&VAR_10.v2);
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_12, VAR_13);
  return -VAR_1;
 }

 return 0;
}

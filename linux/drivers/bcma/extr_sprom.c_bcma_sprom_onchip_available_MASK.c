
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int capabilities; int core; } ;
struct TYPE_4__ {int id; } ;
struct bcma_bus {TYPE_1__ drv_cc; TYPE_2__ chipinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct bcma_bus *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = 0;
 bool VAR_9;

 VAR_7 = FUNC_0(VAR_6->drv_cc.core, VAR_2);
 switch (VAR_6->chipinfo.id) {
 case 137:
  VAR_9 = VAR_7 & VAR_3;
  break;

 case 129:
  VAR_9 = VAR_7 & VAR_5;
  break;
 case 135:
 case 133:
 case 132:

  VAR_9 = 1;
  break;
 case 136:
 case 134:
 case 131:
 case 130:
 case 128:
  VAR_9 = VAR_7 & VAR_4;
  break;
 default:
  VAR_9 = 0;
  break;
 }

 if (VAR_9) {
  VAR_8 = VAR_6->drv_cc.capabilities & VAR_0;
  VAR_8 >>= VAR_1;
 }

 return VAR_8 != 0;
}

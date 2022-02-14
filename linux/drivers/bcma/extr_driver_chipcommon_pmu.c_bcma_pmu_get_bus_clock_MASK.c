
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int rev; } ;
struct bcma_drv_cc {TYPE_3__ pmu; TYPE_1__* core; } ;
struct TYPE_5__ {int id; } ;
struct bcma_bus {TYPE_2__ chipinfo; } ;
struct TYPE_4__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcma_drv_cc*,int ,int ) ;
 int FUNC_1 (struct bcma_drv_cc*,int ,int ) ;
 int FUNC_2 (struct bcma_bus*,char*,int,int ,int) ;

u32 FUNC_3(struct bcma_drv_cc *VAR_6)
{
 struct bcma_bus *VAR_7 = VAR_6->core->bus;

 switch (VAR_7->chipinfo.id) {
 case 134:
 case 132:
 case 133:
  return FUNC_0(VAR_6, VAR_1,
       VAR_4);
 case 130:
  return FUNC_0(VAR_6, VAR_2,
       VAR_4);
 case 129:
 case 131:
  return FUNC_0(VAR_6, VAR_3,
       VAR_4);
 case 135:
  return FUNC_1(VAR_6,
        VAR_0,
        VAR_4);
 case 128:
  return 75000000;
 default:
  FUNC_2(VAR_7, "No bus clock specified for %04X device, pmu rev. %d, using default %d Hz\n",
     VAR_7->chipinfo.id, VAR_6->pmu.rev, VAR_5);
 }
 return VAR_5;
}

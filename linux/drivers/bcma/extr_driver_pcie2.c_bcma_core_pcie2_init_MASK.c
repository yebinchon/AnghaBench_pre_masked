
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_pcie2 {int reqsize; TYPE_1__* core; } ;
struct bcma_chipinfo {int id; int rev; } ;
struct bcma_bus {struct bcma_chipinfo chipinfo; } ;
struct TYPE_2__ {struct bcma_bus* bus; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct bcma_drv_pcie2*,int,int) ;
 int FUNC_2 (struct bcma_drv_pcie2*) ;
 int FUNC_3 (struct bcma_drv_pcie2*,int) ;
 int FUNC_4 (struct bcma_drv_pcie2*,int ) ;
 int FUNC_5 (struct bcma_drv_pcie2*) ;
 int FUNC_6 (struct bcma_drv_pcie2*) ;
 int FUNC_7 (struct bcma_drv_pcie2*) ;
 int FUNC_8 (struct bcma_drv_pcie2*) ;

void FUNC_9(struct bcma_drv_pcie2 *VAR_0)
{
 struct bcma_bus *VAR_1 = VAR_0->core->bus;
 struct bcma_chipinfo *VAR_2 = &VAR_1->chipinfo;
 u32 VAR_3;

 VAR_3 = FUNC_4(VAR_0, FUNC_0(54));
 if ((VAR_3 & 0xe) >> 1 == 2)
  FUNC_1(VAR_0, 0x4e0, 0x17);

 switch (VAR_1->chipinfo.id) {
 case 128:
 case 129:
  VAR_0->reqsize = 1024;
  break;
 default:
  VAR_0->reqsize = 128;
  break;
 }

 if (VAR_2->id == 128 && VAR_2->rev > 3)
  FUNC_3(VAR_0, 1);
 FUNC_2(VAR_0);
 FUNC_5(VAR_0);
 FUNC_8(VAR_0);
 FUNC_6(VAR_0);
 FUNC_7(VAR_0);
}

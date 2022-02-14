
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bcma_drv_pci {TYPE_2__* core; } ;
struct TYPE_3__ {int rev; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct bcma_drv_pci*,int) ;
 int FUNC_1 (struct bcma_drv_pci*,int ) ;
 int FUNC_2 (struct bcma_drv_pci*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct bcma_drv_pci *VAR_13, u16 VAR_14,
    u8 VAR_15, u16 VAR_16)
{
 int VAR_17 = 10;
 u32 VAR_18;
 int VAR_19;


 VAR_18 = VAR_2;
 VAR_18 |= VAR_1;
 FUNC_2(VAR_13, VAR_11, VAR_18);

 if (VAR_13->core->id.rev >= 10) {
  VAR_17 = 200;
  FUNC_0(VAR_13, VAR_14);
  VAR_18 = (VAR_5 <<
       VAR_3);
  VAR_18 |= (VAR_15 << VAR_6);
 } else {
  VAR_18 = (VAR_14 << VAR_4);
  VAR_18 |= (VAR_15 << VAR_7);
 }

 VAR_18 |= VAR_8;
 VAR_18 |= VAR_10;
 VAR_18 |= VAR_9;
 VAR_18 |= VAR_16;
 FUNC_2(VAR_13, VAR_12, VAR_18);

 FUNC_3(10);
 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  VAR_18 = FUNC_1(VAR_13, VAR_11);
  if (VAR_18 & VAR_0)
   break;
  FUNC_4(1000, 2000);
 }
 FUNC_2(VAR_13, VAR_11, 0);
}

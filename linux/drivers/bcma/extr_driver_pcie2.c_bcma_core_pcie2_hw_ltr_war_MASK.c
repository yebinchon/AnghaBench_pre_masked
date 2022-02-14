
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bcma_drv_pcie2 {TYPE_2__* core; } ;
struct TYPE_3__ {int rev; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcma_drv_pcie2*) ;
 int FUNC_1 (struct bcma_drv_pcie2*,int ) ;
 int FUNC_2 (struct bcma_drv_pcie2*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct bcma_drv_pcie2 *VAR_7)
{
 u8 VAR_8 = VAR_7->core->id.rev;
 u32 VAR_9;

 if (VAR_8 < 2 || VAR_8 == 10 || VAR_8 > 13)
  return;

 FUNC_2(VAR_7, VAR_0,
        VAR_4);
 VAR_9 = FUNC_1(VAR_7, VAR_1);
 if (VAR_9 & VAR_3) {

  FUNC_0(VAR_7);






  VAR_9 |= VAR_3;
  FUNC_2(VAR_7, VAR_0,
         VAR_4);
  FUNC_2(VAR_7, VAR_1, VAR_9);


  FUNC_2(VAR_7, VAR_2,
         VAR_5);
  FUNC_3(1000, 2000);


  FUNC_2(VAR_7, VAR_2,
         VAR_6);
  FUNC_3(1000, 2000);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bcma_drv_pcie2 {TYPE_3__* core; } ;
struct bcma_drv_cc {int dummy; } ;
struct TYPE_5__ {int rev; } ;
struct TYPE_6__ {TYPE_2__ id; TYPE_1__* bus; } ;
struct TYPE_4__ {struct bcma_drv_cc drv_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcma_drv_cc*) ;
 int FUNC_1 (struct bcma_drv_pcie2*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct bcma_drv_pcie2 *VAR_3)
{
 struct bcma_drv_cc *VAR_4 = &VAR_3->core->bus->drv_cc;
 u8 VAR_5 = VAR_3->core->id.rev;
 u32 VAR_6, VAR_7;

 if (VAR_5 <= 13) {
  VAR_6 = FUNC_0(VAR_4) / 1000;
  VAR_7 = (1000000 * 2) / VAR_6;
  FUNC_1(VAR_3, VAR_0,
         VAR_2);
  FUNC_1(VAR_3, VAR_1, VAR_7);
 }
}

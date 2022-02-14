
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {TYPE_1__* core; } ;
struct TYPE_4__ {int pkg; scalar_t__ rev; } ;
struct bcma_bus {TYPE_2__ chipinfo; } ;
struct TYPE_3__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcma_drv_cc*,int ) ;
 int FUNC_1 (struct bcma_drv_cc*,int ,int ) ;

void FUNC_2(struct bcma_drv_cc *VAR_4, bool VAR_5)
{
 struct bcma_bus *VAR_6 = VAR_4->core->bus;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_0);
 if (VAR_5) {
  VAR_7 |= VAR_1;
  if (VAR_6->chipinfo.pkg == 9 || VAR_6->chipinfo.pkg == 11)
   VAR_7 |= VAR_3;
  else if (VAR_6->chipinfo.rev > 0)
   VAR_7 |= VAR_2;
 } else {
  VAR_7 &= ~VAR_1;
  VAR_7 &= ~VAR_2;
  VAR_7 &= ~VAR_3;
 }
 FUNC_1(VAR_4, VAR_0, VAR_7);
}

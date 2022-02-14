
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {TYPE_3__* core; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct bcma_bus {TYPE_1__ chipinfo; } ;
struct TYPE_5__ {int rev; } ;
struct TYPE_6__ {TYPE_2__ id; struct bcma_bus* bus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bcma_drv_cc*) ;

__attribute__((used)) static u32 FUNC_1(struct bcma_drv_cc *VAR_1)
{
 struct bcma_bus *VAR_2 = VAR_1->core->bus;
 u32 VAR_3;

 if (FUNC_0(VAR_1)) {
  if (VAR_2->chipinfo.id == VAR_0)
   VAR_3 = 32;
  else if (VAR_1->core->id.rev < 26)
   VAR_3 = 16;
  else
   VAR_3 = (VAR_1->core->id.rev >= 37) ? 32 : 24;
 } else {
  VAR_3 = 28;
 }
 if (VAR_3 == 32)
  return 0xffffffff;
 else
  return (1 << VAR_3) - 1;
}

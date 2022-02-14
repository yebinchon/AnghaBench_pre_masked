
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bcma_drv_cc {int capabilities; TYPE_1__* core; } ;
struct TYPE_4__ {scalar_t__ id; int rev; } ;
struct bcma_bus {TYPE_2__ chipinfo; } ;
struct TYPE_3__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static bool FUNC_1(struct bcma_drv_cc *VAR_2)
{
 struct bcma_bus *VAR_3 = VAR_2->core->bus;

 if (VAR_2->capabilities & VAR_0) {
  if (VAR_3->chipinfo.id == VAR_1) {
   FUNC_0(VAR_3->chipinfo.rev <= 1, "No watchdog available\n");




   return 0;
  }
  return 1;
 } else {
  return 0;
 }
}

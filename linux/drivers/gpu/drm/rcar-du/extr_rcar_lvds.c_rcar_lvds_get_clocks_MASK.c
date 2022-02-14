
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void** dotclkin; void* extal; void* mod; } ;
struct rcar_lvds {int dev; TYPE_2__ clocks; TYPE_1__* info; } ;
struct TYPE_3__ {int quirks; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (struct rcar_lvds*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct rcar_lvds *VAR_2)
{
 VAR_2->clocks.mod = FUNC_3(VAR_2, ((void*)0), 0);
 if (FUNC_0(VAR_2->clocks.mod))
  return FUNC_1(VAR_2->clocks.mod);




 if (!(VAR_2->info->quirks & VAR_1))
  return 0;

 VAR_2->clocks.extal = FUNC_3(VAR_2, "extal", 1);
 if (FUNC_0(VAR_2->clocks.extal))
  return FUNC_1(VAR_2->clocks.extal);

 VAR_2->clocks.dotclkin[0] = FUNC_3(VAR_2, "dclkin.0", 1);
 if (FUNC_0(VAR_2->clocks.dotclkin[0]))
  return FUNC_1(VAR_2->clocks.dotclkin[0]);

 VAR_2->clocks.dotclkin[1] = FUNC_3(VAR_2, "dclkin.1", 1);
 if (FUNC_0(VAR_2->clocks.dotclkin[1]))
  return FUNC_1(VAR_2->clocks.dotclkin[1]);


 if (!VAR_2->clocks.extal && !VAR_2->clocks.dotclkin[0] &&
     !VAR_2->clocks.dotclkin[1]) {
  FUNC_2(VAR_2->dev,
   "no input clock (extal, dclkin.0 or dclkin.1)\n");
  return -VAR_0;
 }

 return 0;
}

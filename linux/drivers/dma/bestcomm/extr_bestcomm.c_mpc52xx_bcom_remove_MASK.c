
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mpc52xx_sdma {int dummy; } ;
struct TYPE_3__ {int ofnode; int regs_base; int regs; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{

 FUNC_0();


 FUNC_1();


 FUNC_2(VAR_0->regs);
 FUNC_5(VAR_0->regs_base, sizeof(struct mpc52xx_sdma));


 FUNC_4(VAR_0->ofnode);


 FUNC_3(VAR_0);
 VAR_0 = ((void*)0);

 return 0;
}

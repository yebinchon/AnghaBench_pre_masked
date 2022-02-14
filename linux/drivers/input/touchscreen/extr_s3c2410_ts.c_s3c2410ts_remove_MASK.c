
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int io; int input; int clock; int irq_tc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 FUNC_3(VAR_1.irq_tc, VAR_1.input);
 FUNC_2(&VAR_0);

 FUNC_0(VAR_1.clock);
 FUNC_1(VAR_1.clock);

 FUNC_4(VAR_1.input);
 FUNC_5(VAR_1.io);

 return 0;
}

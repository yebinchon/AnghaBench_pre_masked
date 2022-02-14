
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int (* irq_handler ) (int,struct abx500_temp*) ;} ;
struct abx500_temp {TYPE_1__ ops; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct abx500_temp* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int,struct abx500_temp*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2;
 struct abx500_temp *VAR_4 = FUNC_0(VAR_3);

 VAR_4->ops.irq_handler(VAR_1, VAR_4);
 return VAR_0;
}

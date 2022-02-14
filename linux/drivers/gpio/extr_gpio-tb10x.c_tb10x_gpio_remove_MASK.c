
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ngpio; scalar_t__ to_irq; } ;
struct tb10x_gpio {TYPE_3__* domain; TYPE_1__ gc; } ;
struct platform_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* gc; } ;
struct TYPE_5__ {int * gc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 struct tb10x_gpio* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct tb10x_gpio *VAR_1 = FUNC_4(VAR_0);

 if (VAR_1->gc.to_irq) {
  FUNC_2(VAR_1->domain->gc->gc[0],
     FUNC_0(VAR_1->gc.ngpio) - 1, 0, 0);
  FUNC_3(VAR_1->domain->gc);
  FUNC_1(VAR_1->domain);
 }

 return 0;
}

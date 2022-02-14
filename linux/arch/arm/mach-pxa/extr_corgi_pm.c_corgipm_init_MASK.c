
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int batfull_irq; } ;
struct TYPE_7__ {TYPE_6__* platform_data; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_4;

 if (!FUNC_0() && !FUNC_2()
   && !FUNC_1())
  return -VAR_0;

 VAR_3 = FUNC_4("sharpsl-pm", -1);
 if (!VAR_3)
  return -VAR_1;

 if (!FUNC_0())
     VAR_2.batfull_irq = 1;

 VAR_3->dev.platform_data = &VAR_2;
 VAR_4 = FUNC_3(VAR_3);

 if (VAR_4)
  FUNC_5(VAR_3);

 return VAR_4;
}

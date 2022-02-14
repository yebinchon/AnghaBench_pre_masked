
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct davinci_clockevent {TYPE_1__ dev; int base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct davinci_clockevent *VAR_3 = VAR_2;

 if (!FUNC_0(&VAR_3->dev))
  FUNC_1(VAR_3->base);

 VAR_3->dev.event_handler(&VAR_3->dev);

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {int lock; int dev; TYPE_1__* drv; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* interrupt ) (struct serio*,unsigned char,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct serio*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct serio*,unsigned char,unsigned int) ;

irqreturn_t FUNC_6(struct serio *VAR_2,
  unsigned char VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5;
 irqreturn_t VAR_6 = VAR_1;

 FUNC_3(&VAR_2->lock, VAR_5);

        if (FUNC_1(VAR_2->drv)) {
                VAR_6 = VAR_2->drv->interrupt(VAR_2, VAR_3, VAR_4);
 } else if (!VAR_4 && FUNC_0(&VAR_2->dev)) {
  FUNC_2(VAR_2);
  VAR_6 = VAR_0;
 }

 FUNC_4(&VAR_2->lock, VAR_5);

 return VAR_6;
}

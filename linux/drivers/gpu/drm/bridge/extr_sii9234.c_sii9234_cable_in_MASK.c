
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sii9234 {scalar_t__ state; int lock; int dev; } ;
struct TYPE_2__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sii9234*) ;
 int FUNC_4 (struct sii9234*) ;
 int FUNC_5 (struct sii9234*) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sii9234 *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->lock);
 if (VAR_1->state != VAR_0)
  goto unlock;
 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 < 0)
  goto unlock;

 FUNC_5(VAR_1);
 FUNC_3(VAR_1);

 FUNC_0(FUNC_6(VAR_1->dev)->irq);

unlock:
 FUNC_2(&VAR_1->lock);
}

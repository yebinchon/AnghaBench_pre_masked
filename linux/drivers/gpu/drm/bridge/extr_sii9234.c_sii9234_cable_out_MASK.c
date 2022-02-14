
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sii9234 {scalar_t__ state; int lock; int dev; } ;
struct TYPE_2__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sii9234*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (struct sii9234*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct sii9234 *VAR_2)
{
 FUNC_1(&VAR_2->lock);

 if (VAR_2->state == VAR_0)
  goto unlock;

 FUNC_0(FUNC_4(VAR_2->dev)->irq);
 FUNC_5(VAR_2, VAR_1, 0);

 FUNC_3(VAR_2);

 VAR_2->state = VAR_0;

unlock:
 FUNC_2(&VAR_2->lock);
}

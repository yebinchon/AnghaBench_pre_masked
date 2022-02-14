
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int irq_sim; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_4;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(&VAR_3->irq_sim, VAR_2);
 if (VAR_4 < 0) {
  FUNC_2(VAR_3);
  return VAR_4;
 }

 VAR_3->base = FUNC_1(&VAR_3->irq_sim, 0);
 FUNC_4(&VAR_3->lock);

 return 0;
}

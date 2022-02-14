
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct moxtet_irqpos {int idx; int bit; } ;
struct TYPE_3__ {int exists; struct moxtet_irqpos* position; } ;
struct moxtet {TYPE_1__ irq; } ;
struct TYPE_4__ {int hwirq_base; int nirqs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct moxtet *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 struct moxtet_irqpos *VAR_9;

 VAR_8 = VAR_2[VAR_5].hwirq_base +
  VAR_6 * VAR_2[VAR_5].nirqs;

 if (VAR_8 + VAR_2[VAR_5].nirqs > VAR_1)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_2[VAR_5].nirqs; ++VAR_7) {
  VAR_9 = &VAR_3->irq.position[VAR_8 + VAR_7];
  VAR_9->idx = VAR_4;
  VAR_9->bit = VAR_7;
  VAR_3->irq.exists |= FUNC_0(VAR_8 + VAR_7);
 }

 return 0;
}

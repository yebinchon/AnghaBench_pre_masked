
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct he_irq {int dummy; } ;
struct he_dev {int* irq_tailoffset; int global_lock; int tasklet; struct he_irq* irq_tail; struct he_irq* irq_head; scalar_t__ irq_base; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct he_dev*,int ) ;
 int FUNC_3 (struct he_dev*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_8(int VAR_5, void *VAR_6)
{
 unsigned long VAR_7;
 struct he_dev *VAR_8 = (struct he_dev * )VAR_6;
 int VAR_9 = 0;

 if (VAR_8 == ((void*)0))
  return VAR_4;

 FUNC_5(&VAR_8->global_lock, VAR_7);

 VAR_8->irq_tail = (struct he_irq *) (((unsigned long)VAR_8->irq_base) |
      (*VAR_8->irq_tailoffset << 2));

 if (VAR_8->irq_tail == VAR_8->irq_head) {
  FUNC_0("tailoffset not updated?\n");
  VAR_8->irq_tail = (struct he_irq *) ((unsigned long)VAR_8->irq_base |
   ((FUNC_2(VAR_8, VAR_2) & VAR_3) << 2));
  (void) FUNC_2(VAR_8, VAR_1);
 }






 if (VAR_8->irq_head != VAR_8->irq_tail) {
  VAR_9 = 1;
  FUNC_7(&VAR_8->tasklet);
  FUNC_3(VAR_8, VAR_0, VAR_1);
  (void) FUNC_2(VAR_8, VAR_1);
 }
 FUNC_6(&VAR_8->global_lock, VAR_7);
 return FUNC_1(VAR_9);

}

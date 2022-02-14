
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int flags; int start; } ;
struct TYPE_6__ {scalar_t__ of_node; } ;
struct TYPE_5__ {unsigned int num_irqs; int* irqs; } ;
struct platform_device {TYPE_2__ dev; TYPE_1__ archdata; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,unsigned int,struct resource*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 struct irq_data* FUNC_6 (int) ;
 int FUNC_7 (struct irq_data*,int) ;
 int FUNC_8 (scalar_t__,unsigned int) ;
 struct resource* FUNC_9 (struct platform_device*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6, unsigned int VAR_7)
{






 struct resource *VAR_8;
 if (FUNC_2(VAR_0) && VAR_6->dev.of_node) {
  int VAR_9;

  VAR_9 = FUNC_8(VAR_6->dev.of_node, VAR_7);
  if (VAR_9 > 0 || VAR_9 == -VAR_2)
   return VAR_9;
 }

 VAR_8 = FUNC_9(VAR_6, VAR_5, VAR_7);
 if (FUNC_5(&VAR_6->dev)) {
  if (VAR_8 && VAR_8->flags & VAR_4) {
   int VAR_10;

   VAR_10 = FUNC_4(FUNC_1(&VAR_6->dev), VAR_7, VAR_8);
   if (VAR_10)
    return VAR_10;
  }
 }







 if (VAR_8 && VAR_8->flags & VAR_3) {
  struct irq_data *VAR_11;

  VAR_11 = FUNC_6(VAR_8->start);
  if (!VAR_11)
   return -VAR_1;
  FUNC_7(VAR_11, VAR_8->flags & VAR_3);
 }

 if (VAR_8)
  return VAR_8->start;
 if (VAR_7 == 0 && FUNC_5(&VAR_6->dev)) {
  int VAR_12 = FUNC_3(FUNC_0(&VAR_6->dev), VAR_7);


  if (VAR_12 >= 0 || VAR_12 == -VAR_2)
   return VAR_12;
 }

 return -VAR_1;

}

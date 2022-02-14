
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spu_mdesc_info {int num_intrs; TYPE_1__* ino_table; } ;
struct TYPE_6__ {int num_irqs; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_3__ archdata; TYPE_2__ dev; } ;
struct TYPE_4__ {unsigned long ino; unsigned int intr; } ;


 int VAR_0 ;
 unsigned int* FUNC_0 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_1, struct spu_mdesc_info *VAR_2,
        unsigned long VAR_3)
{
 const unsigned int *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->num_intrs; VAR_6++) {
  if (VAR_2->ino_table[VAR_6].ino == VAR_3)
   break;
 }
 if (VAR_6 == VAR_2->num_intrs)
  return -VAR_0;

 VAR_5 = VAR_2->ino_table[VAR_6].intr;

 VAR_4 = FUNC_0(VAR_1->dev.of_node, "interrupts", ((void*)0));
 if (!VAR_4)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_1->archdata.num_irqs; VAR_6++) {
  if (VAR_4[VAR_6] == VAR_5)
   return VAR_6;
 }

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct macio_dev {int n_interrupts; TYPE_1__ ofdev; TYPE_2__* interrupt; } ;
struct TYPE_4__ {unsigned int start; int name; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct macio_dev *VAR_1, int VAR_2,
       unsigned int VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_1(((void*)0), VAR_3);
 if (!VAR_4) {
  VAR_1->interrupt[VAR_2].start = VAR_4;
  VAR_1->interrupt[VAR_2].flags = VAR_0;
  VAR_1->interrupt[VAR_2].name = FUNC_0(&VAR_1->ofdev.dev);
 }
 if (VAR_1->n_interrupts <= VAR_2)
  VAR_1->n_interrupts = VAR_2 + 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpci200_board {int mutex; TYPE_1__* slots; } ;
struct slot_irq {int dummy; } ;
struct ipack_device {size_t slot; } ;
struct TYPE_2__ {struct slot_irq* irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct slot_irq*,int *) ;
 struct tpci200_board* FUNC_1 (struct ipack_device*) ;
 int FUNC_2 (struct slot_irq*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct tpci200_board*,size_t) ;

__attribute__((used)) static int FUNC_7(struct ipack_device *VAR_2)
{
 struct slot_irq *VAR_3;
 struct tpci200_board *VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 if (FUNC_3(&VAR_4->mutex))
  return -VAR_1;

 if (VAR_4->slots[VAR_2->slot].irq == ((void*)0)) {
  FUNC_4(&VAR_4->mutex);
  return -VAR_0;
 }

 FUNC_6(VAR_4, VAR_2->slot);
 VAR_3 = VAR_4->slots[VAR_2->slot].irq;

 FUNC_0(VAR_4->slots[VAR_2->slot].irq, ((void*)0));
 FUNC_5();
 FUNC_2(VAR_3);
 FUNC_4(&VAR_4->mutex);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_ioapic {int lock; int * irq_states; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct kvm_ioapic*,int,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct kvm_ioapic *VAR_1, int VAR_2, int VAR_3,
         int VAR_4, bool VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_0(VAR_2 < 0 || VAR_2 >= VAR_0);

 FUNC_3(&VAR_1->lock);
 VAR_7 = FUNC_1(&VAR_1->irq_states[VAR_2],
      VAR_3, VAR_4);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_7, VAR_5);

 FUNC_4(&VAR_1->lock);

 return VAR_6;
}

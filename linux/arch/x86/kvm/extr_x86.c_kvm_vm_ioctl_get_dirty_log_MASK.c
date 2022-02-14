
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_dirty_log {int dummy; } ;
struct kvm {int slots_lock; } ;
struct TYPE_2__ {int (* flush_log_dirty ) (struct kvm*) ;} ;


 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*,struct kvm_dirty_log*,int*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm*) ;

int FUNC_6(struct kvm *VAR_1, struct kvm_dirty_log *VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4;

 FUNC_3(&VAR_1->slots_lock);




 if (VAR_0->flush_log_dirty)
  VAR_0->flush_log_dirty(VAR_1);

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3);





 FUNC_2(&VAR_1->slots_lock);
 if (VAR_3)
  FUNC_0(VAR_1);

 FUNC_4(&VAR_1->slots_lock);
 return VAR_4;
}

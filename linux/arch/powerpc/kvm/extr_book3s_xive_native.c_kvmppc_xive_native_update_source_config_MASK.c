
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef scalar_t__ u32 ;
struct kvmppc_xive_src_block {int lock; } ;
struct kvmppc_xive_irq_state {scalar_t__ act_server; void* act_priority; scalar_t__ eisn; } ;
struct kvmppc_xive {struct kvm* kvm; } ;
struct kvm {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvmppc_xive_irq_state*,scalar_t__*,int *) ;
 int FUNC_3 (struct kvm*,scalar_t__*,void*) ;
 int FUNC_4 (struct kvmppc_xive*,scalar_t__) ;
 int FUNC_5 (char*,void*,scalar_t__,int,scalar_t__,void*) ;
 int FUNC_6 (scalar_t__,int ,void*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct kvmppc_xive *VAR_1,
     struct kvmppc_xive_src_block *VAR_2,
     struct kvmppc_xive_irq_state *VAR_3,
     u32 VAR_4, u8 VAR_5, bool VAR_6,
     u32 VAR_7)
{
 struct kvm *VAR_8 = VAR_1->kvm;
 u32 VAR_9;
 int VAR_10 = 0;

 FUNC_0(&VAR_2->lock);

 if (VAR_3->act_server == VAR_4 && VAR_3->act_priority == VAR_5 &&
     VAR_3->eisn == VAR_7)
  goto unlock;

 FUNC_5("new_act_prio=%d new_act_server=%d mask=%d act_server=%d act_prio=%d\n",
   VAR_5, VAR_4, VAR_6, VAR_3->act_server,
   VAR_3->act_priority);

 FUNC_2(VAR_3, &VAR_9, ((void*)0));

 if (VAR_5 != VAR_0 && !VAR_6) {
  VAR_10 = FUNC_3(VAR_8, &VAR_4, VAR_5);
  if (VAR_10)
   goto unlock;

  VAR_3->act_priority = VAR_5;
  VAR_3->act_server = VAR_4;
  VAR_3->eisn = VAR_7;

  VAR_10 = FUNC_6(VAR_9,
            FUNC_4(VAR_1, VAR_4),
            VAR_5, VAR_7);
 } else {
  VAR_3->act_priority = VAR_0;
  VAR_3->act_server = 0;
  VAR_3->eisn = 0;

  VAR_10 = FUNC_6(VAR_9, 0, VAR_0, 0);
 }

unlock:
 FUNC_1(&VAR_2->lock);
 return VAR_10;
}

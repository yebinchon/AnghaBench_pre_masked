
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_htab_ctx {int flags; int first_pass; int index; struct kvm* kvm; } ;
struct kvm_get_htab_fd {int flags; int start_index; } ;
struct TYPE_2__ {int hpte_mod_interest; } ;
struct kvm {int slots_lock; int srcu; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int *,struct kvm_htab_ctx*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm_htab_ctx*) ;
 int FUNC_3 (struct kvm*) ;
 int VAR_8 ;
 int FUNC_4 (struct kvm*) ;
 struct kvm_htab_ctx* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct kvm *VAR_9, struct kvm_get_htab_fd *VAR_10)
{
 int VAR_11;
 struct kvm_htab_ctx *VAR_12;
 int VAR_13;


 if (VAR_10->flags & ~(VAR_3 | VAR_4))
  return -VAR_0;
 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;
 FUNC_3(VAR_9);
 VAR_12->kvm = VAR_9;
 VAR_12->index = VAR_10->start_index;
 VAR_12->flags = VAR_10->flags;
 VAR_12->first_pass = 1;

 VAR_13 = (VAR_10->flags & VAR_4) ? VAR_7 : VAR_6;
 VAR_11 = FUNC_0("kvm-htab", &VAR_8, VAR_12, VAR_13 | VAR_5);
 if (VAR_11 < 0) {
  FUNC_2(VAR_12);
  FUNC_4(VAR_9);
  return VAR_11;
 }

 if (VAR_13 == VAR_6) {
  FUNC_6(&VAR_9->slots_lock);
  FUNC_1(&VAR_9->arch.hpte_mod_interest);

  FUNC_8(&VAR_9->srcu);
  FUNC_7(&VAR_9->slots_lock);
 }

 return VAR_11;
}

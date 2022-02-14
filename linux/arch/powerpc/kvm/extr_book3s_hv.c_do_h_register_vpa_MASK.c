
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int word; int hword; } ;
struct reg_vpa {TYPE_1__ length; } ;
struct lppaca {int dummy; } ;
struct kvmppc_vpa {unsigned long next_gpa; unsigned long len; int update_pending; } ;
struct TYPE_4__ {int vpa_update_lock; struct kvmppc_vpa slb_shadow; struct kvmppc_vpa dtl; struct kvmppc_vpa vpa; } ;
struct kvm_vcpu {TYPE_2__ arch; struct kvm* kvm; } ;
struct kvm {int dummy; } ;
struct dtl_entry {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;



 unsigned long VAR_2 ;
 unsigned long VAR_3 ;



 int VAR_4 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 struct kvm_vcpu* FUNC_3 (struct kvm*,unsigned long) ;
 void* FUNC_4 (struct kvm*,unsigned long,unsigned long*) ;
 int FUNC_5 (struct kvm*,void*,unsigned long,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct kvmppc_vpa*) ;

__attribute__((used)) static unsigned long FUNC_9(struct kvm_vcpu *VAR_5,
           unsigned long VAR_6,
           unsigned long VAR_7, unsigned long VAR_8)
{
 struct kvm *VAR_9 = VAR_5->kvm;
 unsigned long VAR_10, VAR_11;
 void *VAR_12;
 struct kvm_vcpu *VAR_13;
 int VAR_14;
 int VAR_15;
 struct kvmppc_vpa *VAR_16;

 VAR_13 = FUNC_3(VAR_9, VAR_7);
 if (!VAR_13)
  return VAR_0;

 VAR_15 = (VAR_6 >> VAR_3) & VAR_2;
 if (VAR_15 == 128 || VAR_15 == 130 ||
     VAR_15 == 129) {

  if ((VAR_8 & (VAR_4 - 1)) || !VAR_8)
   return VAR_0;


  VAR_12 = FUNC_4(VAR_9, VAR_8, &VAR_11);
  if (VAR_12 == ((void*)0))
   return VAR_0;
  if (VAR_15 == 128)
   VAR_10 = FUNC_1(((struct reg_vpa *)VAR_12)->length.hword);
  else
   VAR_10 = FUNC_2(((struct reg_vpa *)VAR_12)->length.word);
  FUNC_5(VAR_9, VAR_12, VAR_8, 0);


  if (VAR_10 > VAR_11 || VAR_10 < sizeof(struct reg_vpa))
   return VAR_0;
 } else {
  VAR_8 = 0;
  VAR_10 = 0;
 }

 VAR_14 = VAR_0;
 VAR_16 = ((void*)0);
 FUNC_6(&VAR_13->arch.vpa_update_lock);

 switch (VAR_15) {
 case 128:






  FUNC_0(sizeof(struct lppaca) != 640);
  if (VAR_10 < sizeof(struct lppaca))
   break;
  VAR_16 = &VAR_13->arch.vpa;
  VAR_14 = 0;
  break;

 case 130:
  if (VAR_10 < sizeof(struct dtl_entry))
   break;
  VAR_10 -= VAR_10 % sizeof(struct dtl_entry);


  VAR_14 = VAR_1;
  if (!FUNC_8(&VAR_13->arch.vpa))
   break;

  VAR_16 = &VAR_13->arch.dtl;
  VAR_14 = 0;
  break;

 case 129:

  VAR_14 = VAR_1;
  if (!FUNC_8(&VAR_13->arch.vpa))
   break;

  VAR_16 = &VAR_13->arch.slb_shadow;
  VAR_14 = 0;
  break;

 case 131:

  VAR_14 = VAR_1;
  if (FUNC_8(&VAR_13->arch.dtl) ||
      FUNC_8(&VAR_13->arch.slb_shadow))
   break;

  VAR_16 = &VAR_13->arch.vpa;
  VAR_14 = 0;
  break;

 case 133:
  VAR_16 = &VAR_13->arch.dtl;
  VAR_14 = 0;
  break;

 case 132:
  VAR_16 = &VAR_13->arch.slb_shadow;
  VAR_14 = 0;
  break;
 }

 if (VAR_16) {
  VAR_16->next_gpa = VAR_8;
  VAR_16->len = VAR_10;
  VAR_16->update_pending = 1;
 }

 FUNC_7(&VAR_13->arch.vpa_update_lock);

 return VAR_14;
}

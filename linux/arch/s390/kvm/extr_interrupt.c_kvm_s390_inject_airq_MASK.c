
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_io_adapter {int isc; int id; int suppressible; } ;
struct kvm_s390_interrupt {int parm64; int parm; int type; } ;
struct kvm_s390_float_interrupt {int nimm; int simm; int ais_lock; } ;
struct TYPE_2__ {struct kvm_s390_float_interrupt float_int; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm*,struct kvm_s390_interrupt*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kvm*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int FUNC_9(struct kvm *VAR_1,
    struct s390_io_adapter *VAR_2)
{
 struct kvm_s390_float_interrupt *VAR_3 = &VAR_1->arch.float_int;
 struct kvm_s390_interrupt VAR_4 = {
  .type = FUNC_1(1, 0, 0, 0),
  .parm = 0,
  .parm64 = FUNC_2(VAR_2->isc),
 };
 int VAR_5 = 0;

 if (!FUNC_6(VAR_1, 72) || !VAR_2->suppressible)
  return FUNC_3(VAR_1, &VAR_4);

 FUNC_4(&VAR_3->ais_lock);
 if (VAR_3->nimm & FUNC_0(VAR_2->isc)) {
  FUNC_7(VAR_2->id, VAR_2->isc);
  goto out;
 }

 VAR_5 = FUNC_3(VAR_1, &VAR_4);
 if (!VAR_5 && (VAR_3->simm & FUNC_0(VAR_2->isc))) {
  VAR_3->nimm |= FUNC_0(VAR_2->isc);
  FUNC_8(VAR_2->isc,
            VAR_0, 2);
 }
out:
 FUNC_5(&VAR_3->ais_lock);
 return VAR_5;
}

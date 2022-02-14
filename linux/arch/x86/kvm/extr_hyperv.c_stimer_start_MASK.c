
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {scalar_t__ periodic; } ;
struct kvm_vcpu_hv_stimer {scalar_t__ exp_time; scalar_t__ count; int timer; int index; TYPE_1__ config; } ;
typedef int ktime_t ;
struct TYPE_4__ {int vcpu_id; int kvm; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct kvm_vcpu_hv_stimer*,int) ;
 TYPE_2__* FUNC_6 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu_hv_stimer *VAR_1)
{
 u64 VAR_2;
 ktime_t VAR_3;

 VAR_2 = FUNC_1(FUNC_6(VAR_1)->kvm);
 VAR_3 = FUNC_4();

 if (VAR_1->config.periodic) {
  if (VAR_1->exp_time) {
   if (VAR_2 >= VAR_1->exp_time) {
    u64 VAR_4;

    FUNC_0(VAR_2 - VAR_1->exp_time,
           VAR_1->count, &VAR_4);
    VAR_1->exp_time =
     VAR_2 + (VAR_1->count - VAR_4);
   }
  } else
   VAR_1->exp_time = VAR_2 + VAR_1->count;

  FUNC_8(
     FUNC_6(VAR_1)->vcpu_id,
     VAR_1->index,
     VAR_2, VAR_1->exp_time);

  FUNC_2(&VAR_1->timer,
         FUNC_3(VAR_3,
        100 * (VAR_1->exp_time - VAR_2)),
         VAR_0);
  return 0;
 }
 VAR_1->exp_time = VAR_1->count;
 if (VAR_2 >= VAR_1->count) {






  FUNC_5(VAR_1, 0);
  return 0;
 }

 FUNC_7(FUNC_6(VAR_1)->vcpu_id,
        VAR_1->index,
        VAR_2, VAR_1->count);

 FUNC_2(&VAR_1->timer,
        FUNC_3(VAR_3, 100 * (VAR_1->count - VAR_2)),
        VAR_0);
 return 0;
}

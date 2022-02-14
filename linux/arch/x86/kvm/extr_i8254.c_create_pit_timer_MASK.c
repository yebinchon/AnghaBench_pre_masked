
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_kpit_state {int flags; scalar_t__ period; int is_periodic; int timer; } ;
struct kvm_pit {int expired; struct kvm* kvm; struct kvm_kpit_state pit_state; } ;
struct kvm {int dummy; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (struct kvm_pit*) ;
 long long VAR_4 ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct kvm_pit *VAR_5, u32 VAR_6, int VAR_7)
{
 struct kvm_kpit_state *VAR_8 = &VAR_5->pit_state;
 struct kvm *VAR_9 = VAR_5->kvm;
 s64 VAR_10;

 if (!FUNC_2(VAR_9) ||
     VAR_8->flags & VAR_1)
  return;

 VAR_10 = FUNC_7(VAR_6, VAR_3, VAR_2);

 FUNC_8("create pit timer, interval is %llu nsec\n", VAR_10);


 FUNC_0(&VAR_8->timer);
 FUNC_3(&VAR_5->expired);
 VAR_8->period = VAR_10;
 VAR_8->is_periodic = VAR_7;

 FUNC_6(VAR_5);






 if (VAR_8->is_periodic) {
  s64 VAR_11 = VAR_4 * 1000LL;

  if (VAR_8->period < VAR_11) {
   FUNC_9(
       "kvm: requested %lld ns "
       "i8254 timer period limited to %lld ns\n",
       VAR_8->period, VAR_11);
   VAR_8->period = VAR_11;
  }
 }

 FUNC_1(&VAR_8->timer, FUNC_4(FUNC_5(), VAR_10),
        VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_kpit_state {scalar_t__ period; int timer; } ;
struct kvm_pit {struct kvm_kpit_state pit_state; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static s64 FUNC_2(struct kvm_pit *VAR_0)
{
 s64 VAR_1;
 ktime_t VAR_2;
 struct kvm_kpit_state *VAR_3 = &VAR_0->pit_state;

 if (!VAR_3->period)
  return 0;
 VAR_2 = FUNC_0(&VAR_3->timer);
 VAR_1 = VAR_3->period - FUNC_1(VAR_2);

 return VAR_1;
}

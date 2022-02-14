
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lppaca {int yield_count; int __old_status; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, struct lppaca *VAR_2)
{
 VAR_2->__old_status |= VAR_0;
 VAR_2->yield_count = FUNC_0(1);
}

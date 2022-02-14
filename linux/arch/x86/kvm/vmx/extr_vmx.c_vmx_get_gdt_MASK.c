
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct desc_ptr {int address; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2, struct desc_ptr *VAR_3)
{
 VAR_3->size = FUNC_0(VAR_1);
 VAR_3->address = FUNC_1(VAR_0);
}

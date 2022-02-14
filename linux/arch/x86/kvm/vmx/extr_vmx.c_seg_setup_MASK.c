
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vmx_segment_field {int ar_bytes; int limit; int base; int selector; } ;


 int VAR_0 ;
 struct kvm_vmx_segment_field* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
 const struct kvm_vmx_segment_field *VAR_3 = &VAR_1[VAR_2];
 unsigned int VAR_4;

 FUNC_0(VAR_3->selector, 0);
 FUNC_2(VAR_3->base, 0);
 FUNC_1(VAR_3->limit, 0xffff);
 VAR_4 = 0x93;
 if (VAR_2 == VAR_0)
  VAR_4 |= 0x08;

 FUNC_1(VAR_3->ar_bytes, VAR_4);
}

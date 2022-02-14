
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_s390_sie_block {int ipa; int ipb; int icptcode; } ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm_s390_sie_block *VAR_1,
        __u16 VAR_2)
{
 VAR_1->ipa = 0x1000;
 VAR_1->ipb = ((__u32) VAR_2) << 16;
 VAR_1->icptcode = VAR_0;
 return 1;
}

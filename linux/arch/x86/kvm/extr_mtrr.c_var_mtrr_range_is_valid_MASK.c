
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mtrr_range {int mask; } ;



__attribute__((used)) static bool FUNC_0(struct kvm_mtrr_range *VAR_0)
{
 return (VAR_0->mask & (1 << 11)) != 0;
}

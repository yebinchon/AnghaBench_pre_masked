
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_cpu_context {scalar_t__ cp15; } ;



__attribute__((used)) static u64 *FUNC_0(struct kvm_cpu_context *VAR_0, int VAR_1)
{
 return (u64 *)(VAR_0->cp15 + VAR_1);
}

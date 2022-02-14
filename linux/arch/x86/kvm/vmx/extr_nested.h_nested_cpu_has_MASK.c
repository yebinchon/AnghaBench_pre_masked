
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmcs12 {int cpu_based_vm_exec_control; } ;



__attribute__((used)) static inline bool FUNC_0(struct vmcs12 *VAR_0, u32 VAR_1)
{
 return VAR_0->cpu_based_vm_exec_control & VAR_1;
}

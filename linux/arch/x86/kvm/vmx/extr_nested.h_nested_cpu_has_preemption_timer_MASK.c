
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {int pin_based_vm_exec_control; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct vmcs12 *VAR_1)
{
 return VAR_1->pin_based_vm_exec_control &
  VAR_0;
}

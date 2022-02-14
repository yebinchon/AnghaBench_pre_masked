
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {int vm_function_control; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vmcs12*) ;

__attribute__((used)) static inline bool FUNC_1(struct vmcs12 *VAR_1)
{
 return FUNC_0(VAR_1) &&
  (VAR_1->vm_function_control &
   VAR_0);
}

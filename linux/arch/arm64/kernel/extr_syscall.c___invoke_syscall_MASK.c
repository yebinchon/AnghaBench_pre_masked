
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long (* syscall_fn_t ) (struct pt_regs*) ;
struct pt_regs {int dummy; } ;



__attribute__((used)) static long FUNC_0(struct pt_regs *VAR_0, syscall_fn_t VAR_1)
{
 return VAR_1(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_io_desc {int piod_len; void* piod_addr; void* piod_offs; int piod_op; } ;
typedef int pid_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(pid_t VAR_2, uintptr_t VAR_3, void *VAR_4, int VAR_5)
{
 struct ptrace_io_desc VAR_6;

 VAR_6.piod_op = VAR_0;
 VAR_6.piod_offs = (void *)VAR_3;
 VAR_6.piod_addr = VAR_4;
 VAR_6.piod_len = VAR_5;
 if (FUNC_0(VAR_1, VAR_2, (caddr_t)&VAR_6, 0) < 0)
  return (-1);
 return (0);
}

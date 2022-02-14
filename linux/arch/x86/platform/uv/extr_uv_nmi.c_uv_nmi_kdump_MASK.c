
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(int VAR_1, int VAR_2, struct pt_regs *VAR_3)
{
 if (VAR_2)
  FUNC_1("UV: NMI kdump: KEXEC not supported in this kernel\n");
 FUNC_0(&VAR_0, 1);
}

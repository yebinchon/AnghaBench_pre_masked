
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int msr; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct pt_regs *VAR_1)
{




 return ((VAR_1->msr & VAR_0) == 0);

}

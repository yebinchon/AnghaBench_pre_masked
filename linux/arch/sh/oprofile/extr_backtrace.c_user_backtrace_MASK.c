
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long*,unsigned long*,int) ;
 int FUNC_1 (unsigned long*,int) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static unsigned long *
FUNC_3(unsigned long *VAR_0, struct pt_regs *VAR_1)
{
 unsigned long VAR_2;


 if (!FUNC_1(VAR_0, sizeof(unsigned long)))
  return ((void*)0);

 if (FUNC_0(&VAR_2, VAR_0, sizeof(unsigned long)))
  return ((void*)0);


 if (VAR_2 & 3)
  return ((void*)0);

 FUNC_2(VAR_2);

 VAR_0++;

 return VAR_0;
}

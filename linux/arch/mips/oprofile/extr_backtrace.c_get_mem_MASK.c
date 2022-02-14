
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long*,unsigned long*,int) ;
 int FUNC_1 (unsigned long*,int) ;

__attribute__((used)) static inline int FUNC_2(unsigned long VAR_0, unsigned long *VAR_1)
{
 unsigned long *VAR_2 = (unsigned long *) VAR_0;
 if (!FUNC_1(VAR_2, sizeof(unsigned long)))
  return -1;
 if (FUNC_0(VAR_1, VAR_2, sizeof(unsigned long)))
  return -3;
 return 0;
}

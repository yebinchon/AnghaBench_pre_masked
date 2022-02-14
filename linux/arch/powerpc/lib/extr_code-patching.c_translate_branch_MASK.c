
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned int const*) ;
 unsigned int FUNC_1 (unsigned int const*,unsigned long,unsigned int const) ;
 unsigned int FUNC_2 (unsigned int const*,unsigned long,unsigned int const) ;
 scalar_t__ FUNC_3 (unsigned int const) ;
 scalar_t__ FUNC_4 (unsigned int const) ;

unsigned int FUNC_5(const unsigned int *VAR_0, const unsigned int *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 if (FUNC_4(*VAR_1))
  return FUNC_1(VAR_0, VAR_2, *VAR_1);
 else if (FUNC_3(*VAR_1))
  return FUNC_2(VAR_0, VAR_2, *VAR_1);

 return 0;
}

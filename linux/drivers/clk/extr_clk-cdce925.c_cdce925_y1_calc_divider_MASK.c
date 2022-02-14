
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static u16 FUNC_1(unsigned long VAR_0,
  unsigned long VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_0)
  return 0;
 if (VAR_0 >= VAR_1)
  return 1;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2 > 0x3FF)
  VAR_2 = 0x3FF;

 return (u16)VAR_2;
}

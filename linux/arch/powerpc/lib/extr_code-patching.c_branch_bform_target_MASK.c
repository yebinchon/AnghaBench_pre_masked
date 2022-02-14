
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int const VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(const unsigned int *VAR_1)
{
 signed long VAR_2;

 VAR_2 = *VAR_1 & 0xFFFC;


 if (VAR_2 & 0x8000)
  VAR_2 -= 0x10000;

 if ((*VAR_1 & VAR_0) == 0)
  VAR_2 += (unsigned long)VAR_1;

 return (unsigned long)VAR_2;
}

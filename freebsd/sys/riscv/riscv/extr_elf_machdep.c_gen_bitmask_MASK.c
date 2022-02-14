
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int mask ;



__attribute__((used)) static uint32_t
FUNC_0(int VAR_0, int VAR_1)
{
 uint32_t VAR_2;

 if (VAR_0 == sizeof(VAR_2) * 8 - 1)
  VAR_2 = ~0;
 else
  VAR_2 = (1U << (VAR_0 + 1)) - 1;

 if (VAR_1 > 0)
  VAR_2 &= ~((1U << VAR_1) - 1);

 return (VAR_2);
}

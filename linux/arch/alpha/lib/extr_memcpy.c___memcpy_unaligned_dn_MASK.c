
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0 (unsigned long VAR_0, unsigned long VAR_1,
       long VAR_2)
{

 VAR_1 += VAR_2;
 VAR_0 += VAR_2;
 while (VAR_2--)
  * (char *) --VAR_0 = * (char *) --VAR_1;
}

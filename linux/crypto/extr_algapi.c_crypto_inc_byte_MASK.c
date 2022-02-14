
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static inline void FUNC_0(u8 *VAR_0, unsigned int VAR_1)
{
 u8 *VAR_2 = (VAR_0 + VAR_1);
 u8 VAR_3;

 for (; VAR_1; VAR_1--) {
  VAR_3 = *--VAR_2 + 1;
  *VAR_2 = VAR_3;
  if (VAR_3)
   break;
 }
}

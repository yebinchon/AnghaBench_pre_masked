
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dma_cookie_t ;



__attribute__((used)) static inline bool FUNC_0(dma_cookie_t VAR_0,
  dma_cookie_t VAR_1, dma_cookie_t VAR_2)
{
 if (VAR_1 <= VAR_2) {
  if ((VAR_0 <= VAR_1) || (VAR_0 > VAR_2))
   return 1;
 } else {
  if ((VAR_0 <= VAR_1) && (VAR_0 > VAR_2))
   return 1;
 }
 return 0;
}

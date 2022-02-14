
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static __inline__ int
FUNC_1(uint32_t const **VAR_0, const uint32_t * VAR_1,
    uint32_t VAR_2)
{
 const uint32_t *VAR_3 = *VAR_0;

 if (VAR_1 - VAR_3 < VAR_2) {
  FUNC_0("Illegal termination of video command.\n");
  return 1;
 }
 while (VAR_2--) {
  if (*VAR_3++) {
   FUNC_0("Illegal video command tail.\n");
   return 1;
  }
 }
 *VAR_0 = VAR_3;
 return 0;
}

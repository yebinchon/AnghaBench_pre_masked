
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static __inline__ int
FUNC_1(const uint32_t **VAR_0, const uint32_t *VAR_1, unsigned VAR_2)
{
 if ((VAR_1 - *VAR_0) >= VAR_2) {
  *VAR_0 += VAR_2;
  return 0;
 }
 FUNC_0("Illegal termination of DMA command buffer\n");
 return 1;
}

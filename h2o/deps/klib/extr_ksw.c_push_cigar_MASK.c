
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* FUNC_0 (int*,int) ;

__attribute__((used)) static inline uint32_t *FUNC_1(int *VAR_0, int *VAR_1, uint32_t *VAR_2, int VAR_3, int VAR_4)
{
 if (*VAR_0 == 0 || VAR_3 != (VAR_2[(*VAR_0) - 1]&0xf)) {
  if (*VAR_0 == *VAR_1) {
   *VAR_1 = *VAR_1? (*VAR_1)<<1 : 4;
   VAR_2 = FUNC_0(VAR_2, (*VAR_1) << 2);
  }
  VAR_2[(*VAR_0)++] = VAR_4<<4 | VAR_3;
 } else VAR_2[(*VAR_0)-1] += VAR_4<<4;
 return VAR_2;
}

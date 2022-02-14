
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
typedef size_t u_int32_t ;
typedef size_t u_int ;
struct ber_oid {size_t bo_n; int* bo_id; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

size_t
FUNC_0(struct ber_oid *VAR_4, u_int8_t *VAR_5, size_t VAR_6)
{
 u_int32_t VAR_7;
 u_int VAR_8, VAR_9 = 0, VAR_10;

 if (VAR_4->bo_n < VAR_1 || VAR_4->bo_n > VAR_0 ||
     VAR_4->bo_id[0] > 2 || VAR_4->bo_id[1] > 40)
  return (0);

 VAR_7 = (VAR_4->bo_id[0] * 40) + VAR_4->bo_id[1];
 for (VAR_8 = 2, VAR_9 = 0; VAR_8 <= VAR_4->bo_n; VAR_7 = VAR_4->bo_id[VAR_8], VAR_8++) {
  for (VAR_10 = 28; VAR_10 >= 7; VAR_10 -= 7) {
   if (VAR_7 >= (u_int)(1 << VAR_10)) {
    if (VAR_6)
     VAR_5[VAR_9] = VAR_7 >> VAR_10 | VAR_2;
    VAR_9++;
   }
  }
  if (VAR_6)
   VAR_5[VAR_9] = VAR_7 & VAR_3;
  VAR_9++;
 }

 return (VAR_9);
}

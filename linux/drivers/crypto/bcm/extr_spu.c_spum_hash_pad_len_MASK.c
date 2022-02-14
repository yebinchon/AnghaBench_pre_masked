
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
typedef enum hash_mode { ____Placeholder_hash_mode } hash_mode ;
typedef enum hash_alg { ____Placeholder_hash_alg } hash_alg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u16 FUNC_0(enum hash_alg VAR_4, enum hash_mode VAR_5,
        u32 VAR_6, u16 VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;


 if ((VAR_4 == VAR_0) && (VAR_5 == VAR_3)) {
  VAR_9 = VAR_6 % VAR_7;
  VAR_10 = VAR_7 - VAR_9;
  if (VAR_10 >= VAR_7)
   VAR_10 -= VAR_7;
  return VAR_10;
 }

 VAR_9 = VAR_6 % VAR_7 + 1;
 if ((VAR_4 == VAR_1) || (VAR_4 == VAR_2))
  VAR_8 = 2 * sizeof(u64);
 else
  VAR_8 = sizeof(u64);

 VAR_9 += VAR_8;
 VAR_10 = VAR_7 - VAR_9;
 if (VAR_10 < 0)
  VAR_10 += VAR_7;

 VAR_10 += 1 + VAR_8;
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;



__attribute__((used)) static inline u64 FUNC_0(u64 VAR_0, u32 VAR_1, u32 *VAR_2)
{
 union {
  u64 v64;
  u32 v32[2];
 } VAR_3 = { VAR_0 };
 u32 VAR_4;

 VAR_4 = VAR_3.v32[1];
 VAR_3.v32[1] = 0;
 if (VAR_4 >= VAR_1) {
  VAR_3.v32[1] = VAR_4 / VAR_1;
  VAR_4 %= VAR_1;
 }
 asm ("divl %2" : "=a" (VAR_3.v32[0]), "=d" (*VAR_2) :
  "rm" (VAR_1), "0" (VAR_3.v32[0]), "1" (VAR_4));
 return VAR_3.v64;
}

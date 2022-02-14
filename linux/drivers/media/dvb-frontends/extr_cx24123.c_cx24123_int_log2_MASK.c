
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3 = 0;
 u32 VAR_4 = VAR_0 / VAR_1;
 if (VAR_0 % VAR_1 >= VAR_1 / 2)
  ++VAR_4;
 if (VAR_4 < (1UL << 31)) {
  for (VAR_2 = 1; VAR_4 > VAR_2; VAR_3++)
   VAR_2 += VAR_2;
 }
 return VAR_3;
}

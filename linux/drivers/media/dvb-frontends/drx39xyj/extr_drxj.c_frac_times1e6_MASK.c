
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;
 u32 VAR_3 = 0;
 VAR_3 = (((u32) VAR_0) * (1000000 >> 4)) / VAR_1;
 VAR_3 <<= 4;
 VAR_2 = (((u32) VAR_0) * (1000000 >> 4)) % VAR_1;
 VAR_2 <<= 4;
 VAR_3 += VAR_2 / VAR_1;
 VAR_2 = VAR_2 % VAR_1;
 if ((VAR_2 * 2) > VAR_1)
  VAR_3++;

 return VAR_3;
}

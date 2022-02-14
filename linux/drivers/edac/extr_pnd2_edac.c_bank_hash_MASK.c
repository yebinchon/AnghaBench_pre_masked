
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static int FUNC_0(u64 VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_1) {
 case 0:
  VAR_3 ^= ((VAR_0 >> (12 + VAR_2)) ^ (VAR_0 >> (9 + VAR_2))) & 1;
  break;
 case 1:
  VAR_3 ^= (((VAR_0 >> (10 + VAR_2)) ^ (VAR_0 >> (8 + VAR_2))) & 1) << 1;
  VAR_3 ^= ((VAR_0 >> 22) & 1) << 1;
  break;
 case 2:
  VAR_3 ^= (((VAR_0 >> (13 + VAR_2)) ^ (VAR_0 >> (11 + VAR_2))) & 1) << 2;
  break;
 }

 return VAR_3;
}

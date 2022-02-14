
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 VAR_0)
{
 int VAR_1 = VAR_0 ^ (VAR_0 >> 16);
 VAR_1 ^= VAR_1 >> 8;
 VAR_1 ^= VAR_1 >> 4;
 VAR_1 ^= VAR_1 >> 2;
 VAR_1 ^= VAR_1 >> 1;
 return VAR_1 & 1;
}

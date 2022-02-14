
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(void *VAR_0)
{
 u8 *VAR_1 = VAR_0;

 return ((u32) VAR_1[3] + ((u32) VAR_1[2] << 8) + ((u32) VAR_1[1] << 16) +
        ((u32) VAR_1[0] << 24));
}

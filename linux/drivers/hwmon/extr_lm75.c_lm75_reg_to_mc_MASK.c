
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s16 ;



__attribute__((used)) static inline long FUNC_0(s16 VAR_0, u8 VAR_1)
{
 return ((VAR_0 >> (16 - VAR_1)) * 1000) >> (VAR_1 - 8);
}

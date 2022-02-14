
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;



__attribute__((used)) static inline void FUNC_0(u64 *VAR_0, u64 *VAR_1, u64 VAR_2, u64 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 u64 VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_5 = VAR_2;
 VAR_7 = VAR_3;
 VAR_11 = (u64)VAR_5 * VAR_7;

 VAR_4 = VAR_2 >> 32;
 VAR_9 = (u64)VAR_4 * VAR_7;

 VAR_6 = VAR_3 >> 32;
 VAR_10 = (u64)VAR_5 * VAR_6;
 VAR_9 += VAR_10;

 VAR_8 = (u64)VAR_4 * VAR_6;
 VAR_8 += ((u64)(VAR_9 < VAR_10) << 32) + (VAR_9 >> 32);

 VAR_9 <<= 32;
 VAR_11 += VAR_9;
 VAR_8 += (VAR_11 < VAR_9);

 *VAR_1 = VAR_11;
 *VAR_0 = VAR_8;
}

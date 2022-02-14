
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_0(u64 * VAR_4, u64 * VAR_5, u64 * VAR_6, u64 VAR_7, int VAR_8)
{
 u64 VAR_9 = *VAR_4;
 u64 VAR_10 = *VAR_5;
 u64 VAR_11 = *VAR_6;

 VAR_11 ^= VAR_7;
 VAR_9 -= VAR_0[VAR_11 & 0xff] ^ VAR_1[(VAR_11 >> 16) & 0xff]
    ^ VAR_2[(VAR_11 >> 32) & 0xff] ^ VAR_3[(VAR_11 >> 48) & 0xff];
 VAR_10 += VAR_3[(VAR_11 >> 8) & 0xff] ^ VAR_2[(VAR_11 >> 24) & 0xff]
    ^ VAR_1[(VAR_11 >> 40) & 0xff] ^ VAR_0[(VAR_11 >> 56) & 0xff];
 VAR_10 *= VAR_8;

 *VAR_4 = VAR_9;
 *VAR_5 = VAR_10;
 *VAR_6 = VAR_11;
}

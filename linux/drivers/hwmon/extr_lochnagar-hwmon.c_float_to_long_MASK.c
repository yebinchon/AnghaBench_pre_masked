
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 long VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static long FUNC_1(u32 VAR_1, u32 VAR_2)
{
 u64 VAR_3 = VAR_1 & 0x007FFFFF;
 int VAR_4 = ((VAR_1 & 0x7F800000) >> 23) - 127 - 23;
 bool VAR_5 = VAR_1 & 0x80000000;
 long VAR_6;

 VAR_3 = (VAR_3 + (1 << 23)) * VAR_2;

 if (FUNC_0(VAR_3) + VAR_4 > (int)sizeof(long) * 8 - 1)
  VAR_6 = VAR_0;
 else if (VAR_4 < 0)
  VAR_6 = (VAR_3 + (1ull << (-VAR_4 - 1))) >> -VAR_4;
 else
  VAR_6 = VAR_3 << VAR_4;

 return VAR_5 ? -VAR_6 : VAR_6;
}

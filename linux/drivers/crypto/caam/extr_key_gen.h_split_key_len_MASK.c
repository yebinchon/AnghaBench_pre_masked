
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(u32 VAR_2)
{

 static const u8 VAR_3[] = { 16, 20, 32, 32, 64, 64 };
 u32 VAR_4;

 VAR_4 = (VAR_2 & VAR_1) >> VAR_0;

 return (u32)(VAR_3[VAR_4] * 2);
}

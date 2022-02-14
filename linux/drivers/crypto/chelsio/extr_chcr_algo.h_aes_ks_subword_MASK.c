
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;


 size_t* VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(const u32 VAR_1)
{
 u8 VAR_2[4];

 *(u32 *)(&VAR_2[0]) = VAR_1;
 VAR_2[0] = VAR_0[VAR_2[0]];
 VAR_2[1] = VAR_0[VAR_2[1]];
 VAR_2[2] = VAR_0[VAR_2[2]];
 VAR_2[3] = VAR_0[VAR_2[3]];
 return *(u32 *)(&VAR_2[0]);
}

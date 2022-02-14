
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int*) ;

int FUNC_1(u32 VAR_1, u32 VAR_2, u32 VAR_3,
   u32 VAR_4, u32 VAR_5, u32 *VAR_6)
{




 u64 VAR_7[4];

 VAR_7[0] = VAR_0 | VAR_1;
 VAR_7[1] = ((u64)VAR_3 << 32) | VAR_2;
 VAR_7[2] = ((u64)VAR_5 << 32) | VAR_4;

 return FUNC_0(VAR_7[0], VAR_7[1], VAR_7[2], VAR_6);
}

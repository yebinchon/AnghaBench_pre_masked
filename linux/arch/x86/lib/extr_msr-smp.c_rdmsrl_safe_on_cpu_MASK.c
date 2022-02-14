
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (unsigned int,int,int*,int*) ;

int FUNC_1(unsigned int VAR_0, u32 VAR_1, u64 *VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_3, &VAR_4);
 *VAR_2 = (u64)VAR_4 << 32 | VAR_3;

 return VAR_5;
}

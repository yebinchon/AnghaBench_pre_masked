
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;

bool FUNC_1(int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1 + VAR_0);
 VAR_3 &= 1 << (31 - VAR_2);

 return !VAR_3;
}

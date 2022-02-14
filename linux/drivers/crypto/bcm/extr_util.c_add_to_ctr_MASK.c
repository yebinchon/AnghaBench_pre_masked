
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int __be64 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(u8 *VAR_0, unsigned int VAR_1)
{
 __be64 *VAR_2 = (__be64 *)VAR_0;
 __be64 *VAR_3 = VAR_2 + 1;
 u64 VAR_4 = FUNC_0(*VAR_3);
 u64 VAR_5 = VAR_4 + (u64)VAR_1;

 *VAR_3 = FUNC_1(VAR_5);
 if (VAR_5 < VAR_4)

  *VAR_2 = FUNC_1(FUNC_0(*VAR_2) + 1);
}

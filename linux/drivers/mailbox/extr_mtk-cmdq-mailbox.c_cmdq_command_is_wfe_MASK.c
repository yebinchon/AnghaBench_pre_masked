
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_0(u64 VAR_6)
{
 u64 VAR_7 = VAR_3 | VAR_4 | VAR_5;
 u64 VAR_8 = (u64)(VAR_0 << VAR_2) << 32;
 u64 VAR_9 = (u64)VAR_1 << 32 | 0xffffffff;

 return ((VAR_6 & VAR_9) == (VAR_8 | VAR_7));
}

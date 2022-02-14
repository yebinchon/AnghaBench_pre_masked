
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(u64 VAR_3, u64 VAR_4)
{
 if (!FUNC_0(VAR_3))
  return 0;
 if (!FUNC_0(VAR_4))
  return 1;
 if ((VAR_3 ^ VAR_4) & VAR_0)
  return 1;
 VAR_3 ^= VAR_2;
 VAR_4 ^= VAR_2;
 return (VAR_3 & ~VAR_4 & VAR_1) != 0;
}

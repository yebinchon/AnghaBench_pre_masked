
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(u64 VAR_6, unsigned long *VAR_7)
{
 if (FUNC_0(VAR_0)) {
  if (FUNC_1(VAR_6) || (*VAR_7 & VAR_1))
   *VAR_7 &= VAR_3;
  else if (FUNC_2(VAR_6))
   *VAR_7 |= FUNC_2(VAR_6) << VAR_4;
  else
   *VAR_7 |= VAR_2;
 } else
  *VAR_7 |= VAR_5;
}

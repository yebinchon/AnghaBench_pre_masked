
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(int VAR_3, bool VAR_4, bool VAR_5)
{
 int VAR_6;
 u64 VAR_7;

 if (!FUNC_0(VAR_3))
  return 1;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_5 && !(FUNC_3() & (VAR_2 << VAR_6)))
  return 1;

 VAR_7 = FUNC_2();
 return ((!VAR_4 && !(VAR_7 & (VAR_0 << VAR_6))) ||
  (VAR_4 && !(VAR_7 & (VAR_1 << VAR_6))));
}

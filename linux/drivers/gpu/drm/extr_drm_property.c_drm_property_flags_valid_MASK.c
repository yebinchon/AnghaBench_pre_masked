
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(u32 VAR_4)
{
 u32 VAR_5 = VAR_4 & VAR_3;
 u32 VAR_6 = VAR_4 & VAR_1;


 if (VAR_4 & ~(VAR_3 |
        VAR_1 |
        VAR_2 |
        VAR_0))
  return 0;


 if (!VAR_5 == !VAR_6)
  return 0;


 if (VAR_5 && !FUNC_0(VAR_5))
  return 0;

 return 1;
}

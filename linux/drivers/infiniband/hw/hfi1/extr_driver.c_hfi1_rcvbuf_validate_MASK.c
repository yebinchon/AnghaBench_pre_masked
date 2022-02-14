
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(u32 VAR_5, u8 VAR_6, u16 *VAR_7)
{
 if (FUNC_2(!FUNC_0(VAR_5)))
  return 0;
 if (FUNC_2(VAR_5 < VAR_2))
  return 0;
 if (VAR_5 >
     (VAR_6 == VAR_4 ? VAR_0 : VAR_1))
  return 0;
 if (VAR_7)
  *VAR_7 = FUNC_1(VAR_5 / VAR_3) + 1;
 return 1;
}

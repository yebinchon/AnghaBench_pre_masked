
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(u16 VAR_0, u8 VAR_1, u8 VAR_2,
     u8 *VAR_3)
{
 u32 VAR_4 = VAR_0 + VAR_1;

 if (VAR_2 == 0)
  FUNC_1(*VAR_3, VAR_4);
 else
  *VAR_3 = FUNC_0(VAR_4);
}

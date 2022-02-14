
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(u8 **VAR_0, bool VAR_1, u32 VAR_2, u32 VAR_3)
{
 u8 *VAR_4 = *VAR_0;
 int VAR_5 = 0;

 if (VAR_1) {

  FUNC_2(VAR_2, VAR_3);
 } else {

  if (FUNC_5(VAR_2) || FUNC_5(VAR_3))
   FUNC_0(FUNC_3(0x40, VAR_2, VAR_3));
  FUNC_1(0x89, FUNC_4(0xC0, VAR_2, VAR_3));
 }

 *VAR_0 = VAR_4;
}

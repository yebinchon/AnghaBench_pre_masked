
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int **,int,int,int const) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(u8 **VAR_0, u32 VAR_1,
      const u32 VAR_2, const u32 VAR_3)
{
 u8 *VAR_4 = *VAR_0;
 int VAR_5 = 0;

 if (FUNC_5(((u64)VAR_2 << 32) | (u32)VAR_3)) {






  FUNC_4(&VAR_4, 0, VAR_1, VAR_3);
 } else {

  FUNC_1(FUNC_2(0x48, VAR_1), FUNC_3(0xB8, VAR_1));
  FUNC_0(VAR_3, 4);
  FUNC_0(VAR_2, 4);
 }

 *VAR_0 = VAR_4;
}

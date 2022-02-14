
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (int ,int const*,int const,int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static void FUNC_4 (const u8 *VAR_1, const int VAR_2, u8 *VAR_3)
{


  u8 VAR_4[100] = { 0 };

  FUNC_1 (VAR_0, (const u8 *) VAR_1, VAR_2, VAR_4);



  u32 VAR_5[4] = { 0 };

  FUNC_3 (VAR_5, VAR_4, 12);

  FUNC_3 (VAR_3, VAR_5, 12);



  u32 VAR_6[4] = { 0 };

  VAR_6[0] = FUNC_2 (0xa6707a7e);
  VAR_6[1] = FUNC_2 (0x8df91059);
  VAR_6[2] = FUNC_2 (0xdea70ae5);
  VAR_6[3] = FUNC_2 (0x2f9c2442);



  u32 *VAR_7 = (u32 *) (VAR_4 + 12);
  u32 *VAR_8 = (u32 *) (VAR_3 + 12);

  FUNC_0 (VAR_6, VAR_5, VAR_7, VAR_8);
}

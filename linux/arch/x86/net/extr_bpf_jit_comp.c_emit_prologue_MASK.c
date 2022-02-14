
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(u8 **VAR_1, u32 VAR_2, bool VAR_3)
{
 u8 *VAR_4 = *VAR_1;
 int VAR_5 = 0;

 FUNC_1(0x55);
 FUNC_3(0x48, 0x89, 0xE5);

 FUNC_4(0x48, 0x81, 0xEC, FUNC_5(VAR_2, 8));
 FUNC_1(0x53);
 FUNC_2(0x41, 0x55);
 FUNC_2(0x41, 0x56);
 FUNC_2(0x41, 0x57);
 if (!VAR_3) {

  FUNC_2(0x6a, 0x00);
  FUNC_0(VAR_5 != VAR_0);
 }
 *VAR_1 = VAR_4;
}

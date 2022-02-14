
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__ const) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int,int ,scalar_t__ const) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(u8 **VAR_0, bool VAR_1,
      u32 VAR_2, const u32 VAR_3)
{
 u8 *VAR_4 = *VAR_0;
 u8 VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;





 if (VAR_1 && (s32)VAR_3 < 0) {

  VAR_5 = FUNC_4(0x48, VAR_2);
  VAR_6 = 0xC7;
  VAR_7 = 0xC0;
  FUNC_3(VAR_5, VAR_6, FUNC_5(VAR_7, VAR_2), VAR_3);
  goto done;
 }





 if (VAR_3 == 0) {
  if (FUNC_8(VAR_2))
   FUNC_0(FUNC_6(0x40, VAR_2, VAR_2));
  VAR_6 = 0x31;
  VAR_7 = 0xC0;
  FUNC_2(VAR_6, FUNC_7(VAR_7, VAR_2, VAR_2));
  goto done;
 }


 if (FUNC_8(VAR_2))
  FUNC_0(FUNC_4(0x40, VAR_2));
 FUNC_1(FUNC_5(0xB8, VAR_2), VAR_3);
done:
 *VAR_0 = VAR_4;
}

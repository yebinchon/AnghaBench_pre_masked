
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int const) ;
 int FUNC_2 (int,int,int ,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_6(const u8 VAR_5[], const u32 VAR_6,
         bool VAR_7, u8 **VAR_8)
{
 u8 *VAR_9 = *VAR_8;
 int VAR_10 = 0;
 u8 VAR_11 = VAR_7 ? VAR_0 : VAR_4;
 u8 VAR_12 = VAR_7 ? VAR_2 : VAR_3;

 if (VAR_7) {
  FUNC_1(0x8B, FUNC_5(0x40, VAR_1, VAR_0),
        FUNC_3(VAR_4));
  FUNC_1(0x8B, FUNC_5(0x40, VAR_1, VAR_2),
        FUNC_3(VAR_3));
 }

 if (VAR_6 < 32) {

  FUNC_2(0x0F, 0xA4, FUNC_5(0xC0, VAR_12, VAR_11), VAR_6);

  FUNC_1(0xC1, FUNC_4(0xE0, VAR_11), VAR_6);
 } else if (VAR_6 >= 32 && VAR_6 < 64) {
  u32 VAR_13 = VAR_6 - 32;


  FUNC_1(0xC1, FUNC_4(0xE0, VAR_11), VAR_13);

  FUNC_0(0x89, FUNC_5(0xC0, VAR_12, VAR_11));

  FUNC_0(0x33, FUNC_5(0xC0, VAR_11, VAR_11));
 } else {

  FUNC_0(0x33, FUNC_5(0xC0, VAR_11, VAR_11));

  FUNC_0(0x33, FUNC_5(0xC0, VAR_12, VAR_12));
 }

 if (VAR_7) {

  FUNC_1(0x89, FUNC_5(0x40, VAR_1, VAR_11),
        FUNC_3(VAR_4));

  FUNC_1(0x89, FUNC_5(0x40, VAR_1, VAR_12),
        FUNC_3(VAR_3));
 }
 *VAR_8 = VAR_9;
}

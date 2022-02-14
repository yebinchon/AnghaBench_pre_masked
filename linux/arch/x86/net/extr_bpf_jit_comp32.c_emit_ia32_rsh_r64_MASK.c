
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline void FUNC_5(const u8 VAR_8[], const u8 VAR_9[], bool VAR_10,
         bool VAR_11, u8 **VAR_12)
{
 u8 *VAR_13 = *VAR_12;
 int VAR_14 = 0;
 u8 VAR_15 = VAR_10 ? VAR_0 : VAR_6;
 u8 VAR_16 = VAR_10 ? VAR_3 : VAR_5;

 if (VAR_10) {
  FUNC_1(0x8B, FUNC_4(0x40, VAR_1, VAR_0),
        FUNC_2(VAR_6));
  FUNC_1(0x8B, FUNC_4(0x40, VAR_1, VAR_3),
        FUNC_2(VAR_5));
 }

 if (VAR_11)

  FUNC_1(0x8B, FUNC_4(0x40, VAR_1, VAR_2),
        FUNC_2(VAR_7));
 else

  FUNC_0(0x8B, FUNC_4(0xC0, VAR_7, VAR_2));


 FUNC_1(0x0F, 0xAD, FUNC_4(0xC0, VAR_15, VAR_16));

 FUNC_0(0xD3, FUNC_3(0xE8, VAR_16));




 FUNC_1(0x83, FUNC_3(0xF8, VAR_2), 32);

 FUNC_0(VAR_4, 4);


 FUNC_0(0x89, FUNC_4(0xC0, VAR_15, VAR_16));

 FUNC_0(0x33, FUNC_4(0xC0, VAR_16, VAR_16));

 if (VAR_10) {

  FUNC_1(0x89, FUNC_4(0x40, VAR_1, VAR_15),
        FUNC_2(VAR_6));

  FUNC_1(0x89, FUNC_4(0x40, VAR_1, VAR_16),
        FUNC_2(VAR_5));
 }

 *VAR_12 = VAR_13;
}

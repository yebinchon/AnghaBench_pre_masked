
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int const) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline void FUNC_6(const u8 VAR_6[], const u32 VAR_7,
         bool VAR_8, u8 **VAR_9)
{
 u8 *VAR_10 = *VAR_9;
 int VAR_11 = 0;
 u32 VAR_12;

 VAR_12 = VAR_7 & (1<<31) ? (u32)~0 : 0;

 FUNC_1(0xC7, FUNC_4(0xC0, VAR_0), VAR_7);
 if (VAR_8)

  FUNC_2(0xF7, FUNC_4(0x60, VAR_1), FUNC_3(VAR_4));
 else

  FUNC_0(0xF7, FUNC_4(0xE0, VAR_4));


 FUNC_0(0x89, FUNC_5(0xC0, VAR_2, VAR_0));


 FUNC_1(0xC7, FUNC_4(0xC0, VAR_0), VAR_12);
 if (VAR_8)

  FUNC_2(0xF7, FUNC_4(0x60, VAR_1), FUNC_3(VAR_5));
 else

  FUNC_0(0xF7, FUNC_4(0xE0, VAR_5));

 FUNC_0(0x01, FUNC_5(0xC0, VAR_2, VAR_0));


 FUNC_1(0xC7, FUNC_4(0xC0, VAR_0), VAR_7);
 if (VAR_8)

  FUNC_2(0xF7, FUNC_4(0x60, VAR_1), FUNC_3(VAR_5));
 else

  FUNC_0(0xF7, FUNC_4(0xE0, VAR_5));


 FUNC_0(0x01, FUNC_5(0xC0, VAR_2, VAR_3));

 if (VAR_8) {

  FUNC_2(0x89, FUNC_5(0x40, VAR_1, VAR_0),
        FUNC_3(VAR_5));

  FUNC_2(0x89, FUNC_5(0x40, VAR_1, VAR_2),
        FUNC_3(VAR_4));
 } else {

  FUNC_0(0x89, FUNC_5(0xC0, VAR_5, VAR_0));

  FUNC_0(0x89, FUNC_5(0xC0, VAR_4, VAR_2));
 }

 *VAR_9 = VAR_10;
}

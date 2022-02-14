
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;




 int FUNC_0 (int const) ;



 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int,int const,int const) ;

__attribute__((used)) static inline void FUNC_5(const bool VAR_3, const bool VAR_4, const u8 VAR_5,
       const u8 VAR_6, const u8 VAR_7, bool VAR_8,
       bool VAR_9, u8 **VAR_10)
{
 u8 *VAR_11 = *VAR_10;
 int VAR_12 = 0;
 u8 VAR_13 = VAR_9 ? VAR_0 : VAR_7;
 u8 VAR_14 = VAR_8 ? VAR_2 : VAR_6;

 if (VAR_9)

  FUNC_2(0x8B, FUNC_4(0x40, VAR_1, VAR_0), FUNC_3(VAR_7));

 if (VAR_8)

  FUNC_2(0x8B, FUNC_4(0x40, VAR_1, VAR_2), FUNC_3(VAR_6));

 switch (FUNC_0(VAR_5)) {

 case 132:
  if (VAR_4 && VAR_3)
   FUNC_1(0x11, FUNC_4(0xC0, VAR_14, VAR_13));
  else
   FUNC_1(0x01, FUNC_4(0xC0, VAR_14, VAR_13));
  break;

 case 129:
  if (VAR_4 && VAR_3)
   FUNC_1(0x19, FUNC_4(0xC0, VAR_14, VAR_13));
  else
   FUNC_1(0x29, FUNC_4(0xC0, VAR_14, VAR_13));
  break;

 case 130:
  FUNC_1(0x09, FUNC_4(0xC0, VAR_14, VAR_13));
  break;

 case 131:
  FUNC_1(0x21, FUNC_4(0xC0, VAR_14, VAR_13));
  break;

 case 128:
  FUNC_1(0x31, FUNC_4(0xC0, VAR_14, VAR_13));
  break;
 }

 if (VAR_8)

  FUNC_2(0x89, FUNC_4(0x40, VAR_1, VAR_14),
        FUNC_3(VAR_6));
 *VAR_10 = VAR_11;
}

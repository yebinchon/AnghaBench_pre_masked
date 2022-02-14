
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s32 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int const) ;
 int FUNC_2 (int,int ,int const) ;
 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const FUNC_3 (int const) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int const) ;
 scalar_t__ FUNC_6 (int const) ;

__attribute__((used)) static inline void FUNC_7(const bool VAR_3, const bool VAR_4, const u8 VAR_5,
       const u8 VAR_6, const s32 VAR_7, bool VAR_8,
       u8 **VAR_9)
{
 u8 *VAR_10 = *VAR_9;
 int VAR_11 = 0;
 u8 VAR_12 = VAR_8 ? VAR_0 : VAR_6;
 u8 VAR_13 = VAR_2;

 if (VAR_8)

  FUNC_2(0x8B, FUNC_5(0x40, VAR_1, VAR_0), FUNC_3(VAR_6));

 if (!FUNC_6(VAR_7))

  FUNC_1(0xC7, FUNC_4(0xC0, VAR_2), VAR_7);

 switch (VAR_5) {

 case 133:
  if (VAR_4 && VAR_3) {
   if (FUNC_6(VAR_7))
    FUNC_2(0x83, FUNC_4(0xD0, VAR_12), VAR_7);
   else
    FUNC_0(0x11, FUNC_5(0xC0, VAR_12, VAR_13));
  } else {
   if (FUNC_6(VAR_7))
    FUNC_2(0x83, FUNC_4(0xC0, VAR_12), VAR_7);
   else
    FUNC_0(0x01, FUNC_5(0xC0, VAR_12, VAR_13));
  }
  break;

 case 129:
  if (VAR_4 && VAR_3) {
   if (FUNC_6(VAR_7))
    FUNC_2(0x83, FUNC_4(0xD8, VAR_12), VAR_7);
   else
    FUNC_0(0x19, FUNC_5(0xC0, VAR_12, VAR_13));
  } else {
   if (FUNC_6(VAR_7))
    FUNC_2(0x83, FUNC_4(0xE8, VAR_12), VAR_7);
   else
    FUNC_0(0x29, FUNC_5(0xC0, VAR_12, VAR_13));
  }
  break;

 case 130:
  if (FUNC_6(VAR_7))
   FUNC_2(0x83, FUNC_4(0xC8, VAR_12), VAR_7);
  else
   FUNC_0(0x09, FUNC_5(0xC0, VAR_12, VAR_13));
  break;

 case 132:
  if (FUNC_6(VAR_7))
   FUNC_2(0x83, FUNC_4(0xE0, VAR_12), VAR_7);
  else
   FUNC_0(0x21, FUNC_5(0xC0, VAR_12, VAR_13));
  break;

 case 128:
  if (FUNC_6(VAR_7))
   FUNC_2(0x83, FUNC_4(0xF0, VAR_12), VAR_7);
  else
   FUNC_0(0x31, FUNC_5(0xC0, VAR_12, VAR_13));
  break;
 case 131:
  FUNC_0(0xF7, FUNC_4(0xD8, VAR_12));
  break;
 }

 if (VAR_8)

  FUNC_2(0x89, FUNC_5(0x40, VAR_1, VAR_12),
        FUNC_3(VAR_6));
 *VAR_9 = VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;





 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_2 (scalar_t__ const) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static inline void FUNC_5(const u8 VAR_3, const u8 VAR_4, const u8 VAR_5,
         bool VAR_6, bool VAR_7, u8 **VAR_8)
{
 u8 *VAR_9 = *VAR_8;
 int VAR_10 = 0;
 u8 VAR_11 = VAR_6 ? VAR_0 : VAR_4;
 u8 VAR_12;

 if (VAR_6)

  FUNC_1(0x8B, FUNC_4(0x40, VAR_1, VAR_0), FUNC_2(VAR_4));

 if (VAR_7)

  FUNC_1(0x8B, FUNC_4(0x40, VAR_1, VAR_2), FUNC_2(VAR_5));
 else if (VAR_5 != VAR_2)

  FUNC_0(0x8B, FUNC_4(0xC0, VAR_5, VAR_2));

 switch (VAR_3) {
 case 129:
  VAR_12 = 0xE0; break;
 case 128:
  VAR_12 = 0xE8; break;
 case 130:
  VAR_12 = 0xF8; break;
 default:
  return;
 }
 FUNC_0(0xD3, FUNC_3(VAR_12, VAR_11));

 if (VAR_6)

  FUNC_1(0x89, FUNC_4(0x40, VAR_1, VAR_11), FUNC_2(VAR_4));
 *VAR_8 = VAR_9;
}

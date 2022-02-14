
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 int FUNC_2 (scalar_t__ const) ;
 int FUNC_3 (int,scalar_t__ const) ;
 int FUNC_4 (int,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static inline void FUNC_5(const u8 VAR_5, const u8 VAR_6, const u8 VAR_7,
           bool VAR_8, bool VAR_9, u8 **VAR_10)
{
 u8 *VAR_11 = *VAR_10;
 int VAR_12 = 0;

 if (VAR_9)

  FUNC_1(0x8B, FUNC_4(0x40, VAR_2, VAR_3),
        FUNC_2(VAR_7));
 else if (VAR_7 != VAR_3)

  FUNC_0(0x8B, FUNC_4(0xC0, VAR_7, VAR_3));

 if (VAR_8)

  FUNC_1(0x8B, FUNC_4(0x40, VAR_2, VAR_1),
        FUNC_2(VAR_6));
 else

  FUNC_0(0x8B, FUNC_4(0xC0, VAR_6, VAR_1));


 FUNC_0(0x31, FUNC_4(0xC0, VAR_4, VAR_4));

 FUNC_0(0xF7, FUNC_3(0xF0, VAR_3));

 if (VAR_5 == VAR_0) {
  if (VAR_8)
   FUNC_1(0x89, FUNC_4(0x40, VAR_2, VAR_4),
         FUNC_2(VAR_6));
  else
   FUNC_0(0x89, FUNC_4(0xC0, VAR_6, VAR_4));
 } else {
  if (VAR_8)
   FUNC_1(0x89, FUNC_4(0x40, VAR_2, VAR_1),
         FUNC_2(VAR_6));
  else
   FUNC_0(0x89, FUNC_4(0xC0, VAR_6, VAR_1));
 }
 *VAR_10 = VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int const,int const) ;

__attribute__((used)) static inline void FUNC_5(const u8 VAR_3, const u8 VAR_4, bool VAR_5,
       bool VAR_6, u8 **VAR_7)
{
 u8 *VAR_8 = *VAR_7;
 int VAR_9 = 0;
 u8 VAR_10 = VAR_6 ? VAR_2 : VAR_4;

 if (VAR_6)

  FUNC_1(0x8B, FUNC_4(0x40, VAR_1, VAR_2), FUNC_2(VAR_4));

 if (VAR_5)

  FUNC_1(0x8B, FUNC_4(0x40, VAR_1, VAR_0), FUNC_2(VAR_3));
 else

  FUNC_0(0x8B, FUNC_4(0xC0, VAR_3, VAR_0));


 FUNC_0(0xF7, FUNC_3(0xE0, VAR_10));

 if (VAR_5)

  FUNC_1(0x89, FUNC_4(0x40, VAR_1, VAR_0),
        FUNC_2(VAR_3));
 else

  FUNC_0(0x89, FUNC_4(0xC0, VAR_3, VAR_0));

 *VAR_7 = VAR_8;
}

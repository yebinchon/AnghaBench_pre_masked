
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int,int const,int const) ;

__attribute__((used)) static inline void FUNC_4(const u8 VAR_2, const u8 VAR_3, bool VAR_4,
       bool VAR_5, u8 **VAR_6)
{
 u8 *VAR_7 = *VAR_6;
 int VAR_8 = 0;
 u8 VAR_9 = VAR_5 ? VAR_0 : VAR_3;

 if (VAR_5)

  FUNC_1(0x8B, FUNC_3(0x40, VAR_1, VAR_0), FUNC_2(VAR_3));
 if (VAR_4)

  FUNC_1(0x89, FUNC_3(0x40, VAR_1, VAR_9), FUNC_2(VAR_2));
 else

  FUNC_0(0x89, FUNC_3(0xC0, VAR_2, VAR_9));

 *VAR_6 = VAR_7;
}

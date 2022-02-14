
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,scalar_t__ const) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int ,int ,scalar_t__ const) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int,int const) ;
 int FUNC_6 (int,int const,int const) ;

__attribute__((used)) static inline void FUNC_7(const u8 VAR_2, const u32 VAR_3, bool VAR_4,
       u8 **VAR_5)
{
 u8 *VAR_6 = *VAR_5;
 int VAR_7 = 0;

 if (VAR_4) {
  if (VAR_3 == 0) {

   FUNC_0(0x33, FUNC_6(0xC0, VAR_0, VAR_0));

   FUNC_2(0x89, FUNC_6(0x40, VAR_1, VAR_0),
         FUNC_4(VAR_2));
  } else {
   FUNC_3(0xC7, FUNC_5(0x40, VAR_1),
        FUNC_4(VAR_2), VAR_3);
  }
 } else {
  if (VAR_3 == 0)
   FUNC_0(0x33, FUNC_6(0xC0, VAR_2, VAR_2));
  else
   FUNC_1(0xC7, FUNC_5(0xC0, VAR_2),
        VAR_3);
 }
 *VAR_5 = VAR_6;
}

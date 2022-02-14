
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(bool VAR_5)
{
 static u32 VAR_6;
 u32 VAR_7;

 if (VAR_5) {
  VAR_6 = VAR_7 = FUNC_1(VAR_4 + VAR_3);
  VAR_7 |= VAR_0;
  VAR_7 &= ~VAR_2;
  FUNC_2(VAR_7, VAR_4 + VAR_3);
  while (!(FUNC_0(VAR_4 + VAR_3) & VAR_1))
   ;
 } else {
   FUNC_2(VAR_6, VAR_4 + VAR_3);
 }
}

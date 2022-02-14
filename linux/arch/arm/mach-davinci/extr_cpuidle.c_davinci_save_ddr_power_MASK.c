
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4, bool VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_3 + VAR_1);

 if (VAR_4) {
  if (VAR_5)
   VAR_6 |= VAR_2;
  else
   VAR_6 &= ~VAR_2;
  VAR_6 |= VAR_0;
 } else {
  VAR_6 &= ~(VAR_2 | VAR_0);
 }

 FUNC_1(VAR_6, VAR_3 + VAR_1);
}

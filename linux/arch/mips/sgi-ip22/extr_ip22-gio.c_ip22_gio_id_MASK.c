
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int,int*) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_0, u32 *VAR_1)
{
 u8 VAR_2;
 u8 VAR_3;
 u32 VAR_4;
 u8 *VAR_5;
 u16 *VAR_6;
 u32 *VAR_7;

 VAR_7 = (void *)FUNC_0(VAR_0);
 if (!FUNC_1(VAR_4, VAR_7)) {
  VAR_5 = (void *)FUNC_0(VAR_0 + 3);
  if (FUNC_1(VAR_2, VAR_5)) {






   *VAR_1 = VAR_4;
   return 1;
  }
  VAR_6 = (void *)FUNC_0(VAR_0 + 2);
  FUNC_1(VAR_3, VAR_6);
  if (VAR_2 == (VAR_3 & 0xff) &&
      VAR_2 == (VAR_4 & 0xff) &&
      VAR_3 == (VAR_4 & 0xffff)) {
   *VAR_1 = VAR_4;
   return 1;
  }
 }
 return 0;
}

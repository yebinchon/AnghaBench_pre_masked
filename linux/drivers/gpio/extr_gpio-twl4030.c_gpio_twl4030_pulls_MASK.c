
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int ,int) ;

__attribute__((used)) static int FUNC_1(u32 VAR_2, u32 VAR_3)
{
 u8 VAR_4[5];
 unsigned VAR_5, VAR_6;




 for (VAR_6 = 1, VAR_5 = 0; VAR_5 < 5; VAR_5++) {
  u8 VAR_7;
  unsigned VAR_8;

  for (VAR_7 = 0, VAR_8 = 0; VAR_8 < 8; VAR_8 += 2, VAR_6 <<= 1) {
   if (VAR_2 & VAR_6)
    VAR_7 |= 1 << (VAR_8 + 1);
   else if (VAR_3 & VAR_6)
    VAR_7 |= 1 << (VAR_8 + 0);
  }
  VAR_4[VAR_5] = VAR_7;
 }

 return FUNC_0(VAR_1, VAR_4,
    VAR_0, 5);
}

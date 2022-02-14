
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (int,unsigned long*) ;

__attribute__((used)) static void FUNC_2(unsigned long *VAR_2,
            unsigned long *VAR_3,
            u32 VAR_4, int VAR_5)
{
 int VAR_6 = sizeof(unsigned long);






 if (VAR_4 <= 0x1fff) {
  if (VAR_5 & VAR_0 &&
     !FUNC_1(VAR_4, VAR_2 + 0x000 / VAR_6))

   FUNC_0(VAR_4, VAR_3 + 0x000 / VAR_6);

  if (VAR_5 & VAR_1 &&
     !FUNC_1(VAR_4, VAR_2 + 0x800 / VAR_6))

   FUNC_0(VAR_4, VAR_3 + 0x800 / VAR_6);

 } else if ((VAR_4 >= 0xc0000000) && (VAR_4 <= 0xc0001fff)) {
  VAR_4 &= 0x1fff;
  if (VAR_5 & VAR_0 &&
     !FUNC_1(VAR_4, VAR_2 + 0x400 / VAR_6))

   FUNC_0(VAR_4, VAR_3 + 0x400 / VAR_6);

  if (VAR_5 & VAR_1 &&
     !FUNC_1(VAR_4, VAR_2 + 0xc00 / VAR_6))

   FUNC_0(VAR_4, VAR_3 + 0xc00 / VAR_6);

 }
}

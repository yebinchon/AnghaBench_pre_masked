
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,unsigned int,int) ;

__attribute__((used)) static int FUNC_5(u16 VAR_3, u8 VAR_4, u16 VAR_5, u8 VAR_6)
{
 u8 VAR_7;
 int VAR_8;







 const int VAR_9 = 64;
 const int VAR_10 = 32;


 VAR_7 = FUNC_0(VAR_3 + 1);
 FUNC_2(VAR_7, VAR_3 + 1);


 FUNC_2(0x00, VAR_3 + 2);
 FUNC_2(0x80, VAR_3 + 3);


 FUNC_2(VAR_4, VAR_3 + 4);
 FUNC_2(0x01, VAR_3 + 5);
 FUNC_2(0x04, VAR_3 + 2);


 if (VAR_4 == VAR_2)
  FUNC_2(VAR_6, VAR_3 + 4);


 FUNC_2(VAR_5 & 0xff, VAR_3 + 6);
 FUNC_2(VAR_5 >> 8, VAR_3 + 7);


 FUNC_2(0x01, VAR_3);


 for (VAR_8 = 0; VAR_8 < VAR_9 + VAR_10; VAR_8++) {
  if (VAR_8 >= VAR_9)
   FUNC_1(1);

  VAR_7 = FUNC_0(VAR_3 + 8);

  if (VAR_7)
   FUNC_2(VAR_7, VAR_3 + 8);

  if (VAR_7 & 0x01)
   break;
 }
 if (VAR_8 == VAR_9 + VAR_10) {
  FUNC_3("Max retries exceeded reading virtual register 0x%04hx (%d)\n",
         VAR_5, 1);
  return -VAR_0;
 }





 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {

  VAR_7 = FUNC_0(VAR_3 + 1);

  if (VAR_7 == 0x01)
   break;

  if (VAR_8 == 0)
   FUNC_4("EC reports: 0x%02x reading virtual register 0x%04hx\n",
    (unsigned int)VAR_7, VAR_5);
 }
 if (VAR_8 == VAR_9) {
  FUNC_3("Max retries exceeded reading virtual register 0x%04hx (%d)\n",
         VAR_5, 2);
  return -VAR_0;
 }
 if (VAR_4 == VAR_1)
  return FUNC_0(VAR_3 + 4);

 return 0;
}

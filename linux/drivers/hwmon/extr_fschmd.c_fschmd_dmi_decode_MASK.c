
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dmi_header {int type; int length; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(const struct dmi_header *VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6[3] = { 0 }, VAR_7[3] = { 0 }, VAR_8 = 0, VAR_9 = 0;







 u8 *VAR_10 = (u8 *)VAR_3;


 if (VAR_3->type != 185)
  return;





 if (VAR_3->length < 5 || VAR_10[4] != 19)
  return;






 for (VAR_5 = 6; (VAR_5 + 4) < VAR_3->length; VAR_5 += 5) {

  if (VAR_10[VAR_5] >= 1 && VAR_10[VAR_5] <= 3) {

   const int VAR_11[3] = { 1, 0, 2 };
   int VAR_12 = VAR_11[VAR_10[VAR_5] - 1];


   if (VAR_9 & (1 << VAR_12))
    return;

   VAR_6[VAR_12] = VAR_10[VAR_5 + 1] | (VAR_10[VAR_5 + 2] << 8);
   VAR_7[VAR_12] = VAR_10[VAR_5 + 3] | (VAR_10[VAR_5 + 4] << 8);

   VAR_9 |= 1 << VAR_12;
  }


  if (VAR_10[VAR_5] == 7) {

   if (VAR_9 & 0x08)
    return;

   VAR_8 = VAR_10[VAR_5 + 1] | (VAR_10[VAR_5 + 2] << 8);

   VAR_9 |= 0x08;
  }
 }

 if (VAR_9 == 0x0F) {
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
   VAR_0[VAR_5] = VAR_6[VAR_5] * 10;
   VAR_1[VAR_5] = VAR_7[VAR_5] * 10;
  }





  VAR_0[3] = VAR_0[2];
  VAR_0[4] = VAR_0[1];
  VAR_0[5] = VAR_0[2];
  VAR_1[3] = VAR_1[2];
  VAR_1[4] = VAR_1[1];
  VAR_1[5] = VAR_1[2];
  VAR_2 = VAR_8;
 }
}

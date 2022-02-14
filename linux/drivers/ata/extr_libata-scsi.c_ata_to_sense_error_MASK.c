
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



 int VAR_0 ;






 int FUNC_0 (char*,unsigned int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(unsigned VAR_1, u8 VAR_2, u8 VAR_3, u8 *VAR_4,
          u8 *VAR_5, u8 *VAR_6, int VAR_7)
{
 int VAR_8;


 static const unsigned char VAR_9[][4] = {

  {0xd1, 134, 0x00, 0x00},


  {0xd0, 134, 0x00, 0x00},


  {0x61, 133, 0x00, 0x00},


  {0x84, 134, 0x47, 0x00},


  {0x37, 130, 0x04, 0x00},


  {0x09, 130, 0x04, 0x00},


  {0x01, 131, 0x13, 0x00},


  {0x02, 133, 0x00, 0x00},



  {0x08, 130, 0x04, 0x00},


  {0x10, 132, 0x21, 0x00},


  {0x20, 128, 0x28, 0x00},


  {0x40, 131, 0x11, 0x04},


  {0x80, 131, 0x11, 0x04},

  {0xFF, 0xFF, 0xFF, 0xFF},
 };
 static const unsigned char VAR_10[][4] = {

  {0x80, 134, 0x47, 0x00},

  {0x40, 132, 0x21, 0x04},

  {0x20, 133, 0x44, 0x00},

  {0x08, 134, 0x47, 0x00},

  {0x04, 129, 0x11, 0x00},

  {0xFF, 0xFF, 0xFF, 0xFF},
 };




 if (VAR_2 & VAR_0) {
  VAR_3 = 0;
 }

 if (VAR_3) {

  for (VAR_8 = 0; VAR_9[VAR_8][0] != 0xFF; VAR_8++) {

   if ((VAR_9[VAR_8][0] & VAR_3) ==
       VAR_9[VAR_8][0]) {
    *VAR_4 = VAR_9[VAR_8][1];
    *VAR_5 = VAR_9[VAR_8][2];
    *VAR_6 = VAR_9[VAR_8][3];
    goto translate_done;
   }
  }
 }






 for (VAR_8 = 0; VAR_10[VAR_8][0] != 0xFF; VAR_8++) {
  if (VAR_10[VAR_8][0] & VAR_2) {
   *VAR_4 = VAR_10[VAR_8][1];
   *VAR_5 = VAR_10[VAR_8][2];
   *VAR_6 = VAR_10[VAR_8][3];
   goto translate_done;
  }
 }





 *VAR_4 = 134;
 *VAR_5 = 0x00;
 *VAR_6 = 0x00;

 translate_done:
 if (VAR_7)
  FUNC_0("ata%u: translated ATA stat/err 0x%02x/%02x to SCSI SK/ASC/ASCQ 0x%x/%02x/%02x\n",
         VAR_1, VAR_2, VAR_3, *VAR_4, *VAR_5, *VAR_6);
 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
struct helene_priv {scalar_t__ xtal; TYPE_1__* i2c; } ;
typedef int rdata ;
typedef int data ;
typedef int cdata ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct helene_priv*,int,int*) ;
 int FUNC_3 (struct helene_priv*,int,int*,int) ;
 int FUNC_4 (struct helene_priv*,int,int) ;
 int FUNC_5 (struct helene_priv*,int,int*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct helene_priv *VAR_2)
{


 u8 VAR_3[] = { 0x06, 0x00, 0x02, 0x00 };

 u8 VAR_4[] = { 0x05, 0x06 };
 u8 VAR_5[] = {0x7A, 0x01};
 u8 VAR_6[20];
 u8 VAR_7[2];


 FUNC_4(VAR_2, 0x01, 0x00);

 FUNC_4(VAR_2, 0x67, VAR_3[3]);
 FUNC_4(VAR_2, 0x43, VAR_4[1]);
 FUNC_5(VAR_2, 0x5E, VAR_3, 3);
 FUNC_4(VAR_2, 0x0C, VAR_4[0]);


 FUNC_5(VAR_2, 0x99, VAR_5, sizeof(VAR_5));


 if (VAR_2->xtal == VAR_1)
  VAR_6[0] = 0x10;
 else
  VAR_6[0] = 0x18;
 VAR_6[1] = (uint8_t)(0x80 | (0x04 & 0x1F));
 VAR_6[2] = (uint8_t)(0x80 | (0x26 & 0x7F));
 VAR_6[3] = 0x80;
 VAR_6[4] = 0x00;
 VAR_6[5] = 0x00;
 VAR_6[6] = 0xC4;
 VAR_6[7] = 0x40;
 VAR_6[8] = 0x10;


 VAR_6[9] = 0x00;
 VAR_6[10] = 0x45;
 VAR_6[11] = 0x75;

 VAR_6[12] = 0x07;


 VAR_6[13] = 0x1C;
 VAR_6[14] = 0x3F;
 VAR_6[15] = 0x02;
 VAR_6[16] = 0x10;
 VAR_6[17] = 0x20;
 VAR_6[18] = 0x0A;
 VAR_6[19] = 0x00;

 FUNC_5(VAR_2, 0x81, VAR_6, sizeof(VAR_6));


 FUNC_4(VAR_2, 0x9B, 0x00);

 FUNC_6(20);


 FUNC_3(VAR_2, 0x1A, VAR_7, sizeof(VAR_7));

 if (VAR_7[0] != 0x00) {
  FUNC_0(&VAR_2->i2c->dev,
    "HELENE tuner CPU error 0x%x\n", VAR_7[0]);
  return -VAR_0;
 }


 VAR_5[0] = 0x90;
 VAR_5[1] = 0x06;
 FUNC_5(VAR_2, 0x17, VAR_5, sizeof(VAR_5));
 FUNC_6(20);
 FUNC_2(VAR_2, 0x19, VAR_6);
 FUNC_4(VAR_2, 0x95, (uint8_t)((VAR_6[0] >> 4) & 0x0F));


 FUNC_4(VAR_2, 0x74, 0x02);


 FUNC_4(VAR_2, 0x88, 0x00);


 FUNC_4(VAR_2, 0x87, 0xC0);


 FUNC_4(VAR_2, 0x80, 0x01);


 VAR_5[0] = 0x07;
 VAR_5[1] = 0x00;
 FUNC_5(VAR_2, 0x41, VAR_5, sizeof(VAR_5));

 FUNC_1(&VAR_2->i2c->dev,
   "HELENE tuner x_pon done\n");

 return 0;
}

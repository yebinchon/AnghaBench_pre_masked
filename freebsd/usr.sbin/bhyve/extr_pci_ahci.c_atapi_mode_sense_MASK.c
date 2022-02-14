
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ahci_port {int sense_key; int asc; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (struct ahci_port*,int,int*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct ahci_port*,int,int*,int*,int) ;

__attribute__((used)) static void
FUNC_5(struct ahci_port *VAR_6, int VAR_7, uint8_t *VAR_8)
{
 uint8_t *VAR_9;
 uint32_t VAR_10;
 uint8_t VAR_11, VAR_12;
 int VAR_13;

 VAR_9 = VAR_8 + 0x40;
 VAR_13 = FUNC_1(VAR_9 + 7);
 VAR_11 = VAR_9[2] >> 6;
 VAR_12 = VAR_9[2] & 0x3f;

 switch (VAR_11) {
 case 0:
  switch (VAR_12) {
  case 128:
  {
   uint8_t VAR_14[16];

   if (VAR_13 > sizeof(VAR_14))
    VAR_13 = sizeof(VAR_14);

   FUNC_3(VAR_14, 0, sizeof(VAR_14));
   FUNC_2(VAR_14, 16 - 2);
   VAR_14[2] = 0x70;
   VAR_14[8] = 0x01;
   VAR_14[9] = 16 - 10;
   VAR_14[11] = 0x05;
   FUNC_4(VAR_6, VAR_7, VAR_8, VAR_14, VAR_13);
   VAR_10 = VAR_5 | VAR_3;
   break;
  }
  case 129:
  {
   uint8_t VAR_15[30];

   if (VAR_13 > sizeof(VAR_15))
    VAR_13 = sizeof(VAR_15);

   FUNC_3(VAR_15, 0, sizeof(VAR_15));
   FUNC_2(VAR_15, 30 - 2);
   VAR_15[2] = 0x70;
   VAR_15[8] = 0x2A;
   VAR_15[9] = 30 - 10;
   VAR_15[10] = 0x08;
   VAR_15[12] = 0x71;
   FUNC_2(&VAR_15[18], 2);
   FUNC_2(&VAR_15[20], 512);
   FUNC_4(VAR_6, VAR_7, VAR_8, VAR_15, VAR_13);
   VAR_10 = VAR_5 | VAR_3;
   break;
  }
  default:
   goto error;
   break;
  }
  break;
 case 3:
  VAR_6->sense_key = VAR_2;
  VAR_6->asc = 0x39;
  VAR_10 = (VAR_6->sense_key << 12) | VAR_5 | VAR_4;
  break;
error:
 case 1:
 case 2:
  VAR_6->sense_key = VAR_2;
  VAR_6->asc = 0x24;
  VAR_10 = (VAR_6->sense_key << 12) | VAR_5 | VAR_4;
  break;
 }
 VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_10);
}

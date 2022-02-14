
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int path ;
struct TYPE_2__ {int block_address; int block_size; int block_alignment; } ;
typedef TYPE_1__ ng_bt3c_firmware_block_ep ;
typedef int buffer ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *,int*,int*) ;
 scalar_t__ FUNC_1 (int,char*,int ,int ,void const*,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (int ,int,int ) ;
 char* VAR_11 ;
 int FUNC_14 (char*,int,char*,char*) ;
 char* FUNC_15 (int) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 () ;

int
FUNC_18(int VAR_12, char *VAR_13[])
{
 FILE *VAR_14 = ((void*)0);
 char VAR_15[80], VAR_16[VAR_9],
  *VAR_17 = ((void*)0);
 uint8_t *VAR_18 = ((void*)0);
 int VAR_19, VAR_20, VAR_21, VAR_22;

 FUNC_12(VAR_16, 0, sizeof(VAR_16));
 FUNC_13(VAR_0, VAR_3|VAR_5|VAR_4, VAR_6);

 while ((VAR_20 = FUNC_8(VAR_12, VAR_13, "f:hn:")) != -1) {
  switch (VAR_20) {
  case 'f':
   VAR_17 = VAR_11;
   break;

  case 'n':
   FUNC_14(VAR_16, sizeof(VAR_16), "%s:", VAR_11);
   break;

  case 'h':
  default:
   FUNC_17();

  }
 }

 if (VAR_17 == ((void*)0) || VAR_16[0] == 0)
  FUNC_17();


 VAR_18 = (uint8_t *) FUNC_2(VAR_1,
     sizeof(uint8_t));
 if (VAR_18 == ((void*)0)) {
  FUNC_16(VAR_2, "Could not allocate firmware buffer");
  FUNC_3(255);
 }

 if ((VAR_14 = FUNC_6(VAR_17, "r")) == ((void*)0)) {
  FUNC_16(VAR_2, "Could not open BT3C firmware file %s. %s (%d)",
    VAR_17, FUNC_15(VAR_10), VAR_10);
  FUNC_3(255);
 }

 VAR_19 = 0;

 while (FUNC_5(VAR_15, sizeof(VAR_15), VAR_14)) {
  int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;

  VAR_24 = FUNC_11(VAR_15 + 2);
  VAR_25 = FUNC_10(VAR_15 + 4);
  VAR_27 = FUNC_11(VAR_15 + 2 + VAR_24 * 2);

  if (VAR_15[1] == '3') {
   ng_bt3c_firmware_block_ep *VAR_28 = ((void*)0);
   uint16_t *VAR_29 = ((void*)0);

   VAR_28 = (ng_bt3c_firmware_block_ep *)
      (VAR_18 + VAR_19);

   VAR_19 += sizeof(*VAR_28);
   if (VAR_19 >= VAR_1) {
    FUNC_16(VAR_2, "Could not add new firmware " "block. Firmware file %s is " "too big, firmware_size=%d",


      VAR_17,
      VAR_19);
    FUNC_3(255);
   }

   VAR_28->block_address = VAR_25;
   VAR_28->block_size = (VAR_24 - 4) / 2;
   VAR_28->block_alignment = (VAR_28->block_size * 2) % 3;
   if (VAR_28->block_alignment != 0)
    VAR_28->block_alignment = 3 - VAR_28->block_alignment;

   VAR_19 += (VAR_28->block_size * 2);
   VAR_19 += VAR_28->block_alignment;
   if (VAR_19 >= VAR_1) {
    FUNC_16(VAR_2, "Could not add new firmware " "data. Firmware file %s is " "too big, firmware_size=%d",


      VAR_17,
      VAR_19);
    FUNC_3(255);
   }


   VAR_26 = 0;
   for (VAR_23 = 0; VAR_23 < 5; VAR_23++)
    VAR_26 += FUNC_11(VAR_15 + 2 + VAR_23 * 2);


   VAR_29 = (uint16_t *)(VAR_28 + 1);
   for (VAR_23 = 0; VAR_23 < VAR_28->block_size; VAR_23++) {
    VAR_29[VAR_23] = FUNC_9(VAR_15 + (VAR_23 * 4) + 12);
    VAR_26 += (((VAR_29[VAR_23] & 0xff00) >> 8) & 0xff);
    VAR_26 += (VAR_29[VAR_23] & 0x00ff);
   }
  } else
   for (VAR_26 = 0, VAR_23 = 0; VAR_23 < VAR_24; VAR_23++)
    VAR_26 += FUNC_11(VAR_15 + 2 + VAR_23 * 2);

  if (((VAR_26 + VAR_27) & 0xff) != 0xff) {
   FUNC_16(VAR_2, "Invalid firmware file %s. Checksum " "error, cs=%#x, fcs=%#x, checksum=%#x",

     VAR_17, (VAR_26 & 0xff), VAR_27,
     ((VAR_26 + VAR_27) & 0xff));
   FUNC_3(255);
  }
 }


 if (FUNC_0(((void*)0), &VAR_21, &VAR_22) < 0) {
  FUNC_16(VAR_2, "Could not create Netgraph socket. %s (%d)",
    FUNC_15(VAR_10), VAR_10);
  FUNC_3(255);
 }

 if (FUNC_1(VAR_21, VAR_16, VAR_7,
   VAR_8,
   (void const *) VAR_18, VAR_19) < 0) {
  FUNC_16(VAR_2, "Could not send Netgraph message. %s (%d)",
    FUNC_15(VAR_10), VAR_10);
  FUNC_3(255);
 }

 FUNC_7(VAR_18);
 VAR_18 = ((void*)0);
 FUNC_4(VAR_14);

 return (0);
}

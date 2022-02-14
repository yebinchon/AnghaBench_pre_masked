
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tveeprom {unsigned char has_radio; int has_ir; unsigned char model; unsigned char revision; unsigned char serial_number; int* MAC_address; int has_MAC_address; int* rev_str; int tuner_hauppauge_model; int tuner2_hauppauge_model; int decoder_processor; void* audio_processor; void* tuner2_type; void* tuner_type; int tuner2_formats; int tuner_formats; } ;
struct TYPE_6__ {char* name; void* id; } ;
struct TYPE_5__ {char* name; int id; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (struct tveeprom*,int ,int) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,...) ;

void FUNC_7(struct tveeprom *VAR_6,
          unsigned char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 int VAR_15 = 0, VAR_16 = 0, VAR_17 = -1;
 const char *VAR_18 = ((void*)0);
 const char *VAR_19[8] = { " none", "", "", "", "", "", "", "" };

 int VAR_20 = 0, VAR_21 = 0;
 const char *VAR_22 = ((void*)0);
 const char *VAR_23[8] = { " none", "", "", "", "", "", "", "" };

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->tuner_type = VAR_0;
 VAR_6->tuner2_type = VAR_0;

 VAR_11 = VAR_10 = VAR_12 = 0;


 if (VAR_7[0] == 0x1a &&
     VAR_7[1] == 0xeb &&
     VAR_7[2] == 0x67 &&
     VAR_7[3] == 0x95)
  VAR_14 = 0xa0;
 else if ((VAR_7[0] & 0xe1) == 0x01 &&
   VAR_7[1] == 0x00 &&
   VAR_7[2] == 0x00 &&
   VAR_7[8] == 0x84)
  VAR_14 = 8;
 else if (VAR_7[1] == 0x70 &&
   VAR_7[2] == 0x00 &&
   VAR_7[4] == 0x74 &&
   VAR_7[8] == 0x84)
  VAR_14 = 8;
 else
  VAR_14 = 0;

 for (VAR_8 = VAR_14; !VAR_11 && VAR_8 < 256; VAR_8 += VAR_10) {
  if (VAR_7[VAR_8] == 0x84) {
   VAR_10 = VAR_7[VAR_8 + 1] + (VAR_7[VAR_8 + 2] << 8);
   VAR_8 += 3;
  } else if ((VAR_7[VAR_8] & 0xf0) == 0x70) {
   if (VAR_7[VAR_8] & 0x08) {

    VAR_11 = 1;
    break;
   }
   VAR_10 = VAR_7[VAR_8] & 0x07;
   ++VAR_8;
  } else {
   FUNC_6("Encountered bad packet header [%02x]. Corrupt or not a Hauppauge eeprom.\n",
    VAR_7[VAR_8]);
   return;
  }

  FUNC_4("Tag [%02x] + %d bytes: %*ph\n",
   VAR_7[VAR_8], VAR_10 - 1, VAR_10, &VAR_7[VAR_8]);


  VAR_13 = VAR_7[VAR_8];
  switch (VAR_13) {
  case 0x00:

   VAR_15 = VAR_7[VAR_8+6];
   VAR_16 = VAR_7[VAR_8+5];
   VAR_6->has_radio = VAR_7[VAR_8+VAR_10-1];


   VAR_6->has_ir = 0;
   VAR_6->model =
    VAR_7[VAR_8+8] +
    (VAR_7[VAR_8+9] << 8);
   VAR_6->revision = VAR_7[VAR_8+10] +
    (VAR_7[VAR_8+11] << 8) +
    (VAR_7[VAR_8+12] << 16);
   break;

  case 0x01:

   VAR_6->serial_number =
    VAR_7[VAR_8+6] +
    (VAR_7[VAR_8+7] << 8) +
    (VAR_7[VAR_8+8] << 16);
   break;

  case 0x02:




   VAR_17 = VAR_7[VAR_8+2] & 0x7f;
   if (VAR_17 < FUNC_0(VAR_2))
    VAR_6->audio_processor = VAR_2[VAR_17].id;
   else
    VAR_6->audio_processor = VAR_1;
   break;



  case 0x04:

   VAR_6->serial_number =
    VAR_7[VAR_8+5] +
    (VAR_7[VAR_8+6] << 8) +
    (VAR_7[VAR_8+7] << 16)+
    (VAR_7[VAR_8+8] << 24);

   if (VAR_7[VAR_8 + 8] == 0xf0) {
    VAR_6->MAC_address[0] = 0x00;
    VAR_6->MAC_address[1] = 0x0D;
    VAR_6->MAC_address[2] = 0xFE;
    VAR_6->MAC_address[3] = VAR_7[VAR_8 + 7];
    VAR_6->MAC_address[4] = VAR_7[VAR_8 + 6];
    VAR_6->MAC_address[5] = VAR_7[VAR_8 + 5];
    VAR_6->has_MAC_address = 1;
   }
   break;

  case 0x05:




   VAR_17 = VAR_7[VAR_8+1] & 0x7f;
   if (VAR_17 < FUNC_0(VAR_2))
    VAR_6->audio_processor = VAR_2[VAR_17].id;
   else
    VAR_6->audio_processor = VAR_1;

   break;

  case 0x06:

   VAR_6->model =
    VAR_7[VAR_8 + 1] +
    (VAR_7[VAR_8 + 2] << 8) +
    (VAR_7[VAR_8 + 3] << 16) +
    (VAR_7[VAR_8 + 4] << 24);
   VAR_6->revision =
    VAR_7[VAR_8 + 5] +
    (VAR_7[VAR_8 + 6] << 8) +
    (VAR_7[VAR_8 + 7] << 16);
   break;

  case 0x07:


   break;



  case 0x09:

   VAR_6->decoder_processor = VAR_7[VAR_8 + 1];
   break;

  case 0x0a:

   if (VAR_12 == 0) {
    VAR_15 = VAR_7[VAR_8 + 2];
    VAR_16 = VAR_7[VAR_8 + 1];
    VAR_12 = 1;
   } else {

    VAR_20 = VAR_7[VAR_8 + 2];
    VAR_21 = VAR_7[VAR_8 + 1];

    if (VAR_21 == 0)
     VAR_6->has_radio = 1;
   }
   break;

  case 0x0b:



   break;




  case 0x0e:

   VAR_6->has_radio = VAR_7[VAR_8+1];
   break;

  case 0x0f:

   VAR_6->has_ir = 1 | (VAR_7[VAR_8+1] << 1);
   break;





  default:
   FUNC_4("Not sure what to do with tag [%02x]\n",
     VAR_13);

  }
 }

 if (!VAR_11) {
  FUNC_6("Ran out of data!\n");
  return;
 }

 if (VAR_6->revision != 0) {
  VAR_6->rev_str[0] = 32 + ((VAR_6->revision >> 18) & 0x3f);
  VAR_6->rev_str[1] = 32 + ((VAR_6->revision >> 12) & 0x3f);
  VAR_6->rev_str[2] = 32 + ((VAR_6->revision >> 6) & 0x3f);
  VAR_6->rev_str[3] = 32 + (VAR_6->revision & 0x3f);
  VAR_6->rev_str[4] = 0;
 }

 if (FUNC_2(VAR_15) && !VAR_6->has_radio) {
  FUNC_5("The eeprom says no radio is present, but the tuner type\n");
  FUNC_5("indicates otherwise. I will assume that radio is present.\n");
  VAR_6->has_radio = 1;
 }

 if (VAR_15 < FUNC_0(VAR_4)) {
  VAR_6->tuner_type = VAR_4[VAR_15].id;
  VAR_18 = VAR_4[VAR_15].name;
 } else {
  VAR_18 = "unknown";
 }

 if (VAR_20 < FUNC_0(VAR_4)) {
  VAR_6->tuner2_type = VAR_4[VAR_20].id;
  VAR_22 = VAR_4[VAR_20].name;
 } else {
  VAR_22 = "unknown";
 }

 VAR_6->tuner_hauppauge_model = VAR_15;
 VAR_6->tuner2_hauppauge_model = VAR_20;
 VAR_6->tuner_formats = 0;
 VAR_6->tuner2_formats = 0;
 for (VAR_8 = VAR_9 = 0; VAR_8 < 8; VAR_8++) {
  if (VAR_16 & (1 << VAR_8)) {
   VAR_6->tuner_formats |= VAR_5[VAR_8].id;
   VAR_19[VAR_9++] = VAR_5[VAR_8].name;
  }
 }
 for (VAR_8 = VAR_9 = 0; VAR_8 < 8; VAR_8++) {
  if (VAR_21 & (1 << VAR_8)) {
   VAR_6->tuner2_formats |= VAR_5[VAR_8].id;
   VAR_23[VAR_9++] = VAR_5[VAR_8].name;
  }
 }

 FUNC_5("Hauppauge model %d, rev %s, serial# %u\n",
  VAR_6->model, VAR_6->rev_str, VAR_6->serial_number);
 if (VAR_6->has_MAC_address == 1)
  FUNC_5("MAC address is %pM\n", VAR_6->MAC_address);
 FUNC_5("tuner model is %s (idx %d, type %d)\n",
  VAR_18, VAR_15, VAR_6->tuner_type);
 FUNC_5("TV standards%s%s%s%s%s%s%s%s (eeprom 0x%02x)\n",
  VAR_19[0], VAR_19[1], VAR_19[2],
  VAR_19[3], VAR_19[4], VAR_19[5],
  VAR_19[6], VAR_19[7], VAR_16);
 if (VAR_20)
  FUNC_5("second tuner model is %s (idx %d, type %d)\n",
     VAR_22, VAR_20, VAR_6->tuner2_type);
 if (VAR_21)
  FUNC_5("TV standards%s%s%s%s%s%s%s%s (eeprom 0x%02x)\n",
   VAR_23[0], VAR_23[1], VAR_23[2],
   VAR_23[3], VAR_23[4], VAR_23[5],
   VAR_23[6], VAR_23[7], VAR_21);
 if (VAR_17 < 0) {
  FUNC_5("audio processor is unknown (no idx)\n");
  VAR_6->audio_processor = VAR_1;
 } else {
  if (VAR_17 < FUNC_0(VAR_2))
   FUNC_5("audio processor is %s (idx %d)\n",
     VAR_2[VAR_17].name, VAR_17);
  else
   FUNC_5("audio processor is unknown (idx %d)\n",
        VAR_17);
 }
 if (VAR_6->decoder_processor)
  FUNC_5("decoder processor is %s (idx %d)\n",
   FUNC_1(VAR_3, VAR_6->decoder_processor),
   VAR_6->decoder_processor);
 if (VAR_6->has_ir)
  FUNC_5("has %sradio, has %sIR receiver, has %sIR transmitter\n",
    VAR_6->has_radio ? "" : "no ",
    (VAR_6->has_ir & 2) ? "" : "no ",
    (VAR_6->has_ir & 4) ? "" : "no ");
 else
  FUNC_5("has %sradio\n",
    VAR_6->has_radio ? "" : "no ");
}

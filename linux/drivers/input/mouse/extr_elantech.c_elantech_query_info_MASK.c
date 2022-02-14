
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
struct elantech_device_info {unsigned char fw_version; int hw_version; int* capabilities; int* samples; int has_trackpoint; int x_res; int y_res; int x_max; int y_max; unsigned char width; unsigned char x_traces; unsigned char y_traces; int has_middle_button; scalar_t__ (* send_cmd ) (struct psmouse*,int ,unsigned char*) ;int y_min; int x_min; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (struct psmouse*,int*,int*,int *) ;
 int FUNC_3 (struct elantech_device_info*) ;
 scalar_t__ FUNC_4 (struct elantech_device_info*) ;
 int FUNC_5 (struct elantech_device_info*,int ,int) ;
 int FUNC_6 (struct psmouse*,char*) ;
 int FUNC_7 (struct psmouse*,char*,...) ;
 int FUNC_8 (struct psmouse*,char*) ;
 scalar_t__ FUNC_9 (struct psmouse*,int ,int*) ;
 scalar_t__ FUNC_10 (struct psmouse*,int ,int*) ;
 scalar_t__ FUNC_11 (struct psmouse*,int ,unsigned char*) ;
 scalar_t__ FUNC_12 (struct psmouse*,int ,unsigned char*) ;
 scalar_t__ FUNC_13 (struct psmouse*,int ,unsigned char*) ;
 scalar_t__ FUNC_14 (struct psmouse*,int ,unsigned char*) ;
 scalar_t__ FUNC_15 (struct psmouse*,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_16(struct psmouse *VAR_15,
          struct elantech_device_info *VAR_16)
{
 unsigned char VAR_17[3];
 unsigned char VAR_18;

 FUNC_5(VAR_16, 0, sizeof(*VAR_16));




 if (FUNC_15(VAR_15, VAR_4, VAR_17)) {
  FUNC_6(VAR_15, "failed to query firmware version.\n");
  return -VAR_0;
 }
 VAR_16->fw_version = (VAR_17[0] << 16) | (VAR_17[1] << 8) | VAR_17[2];

 if (FUNC_4(VAR_16)) {
  FUNC_6(VAR_15, "unknown hardware version, aborting...\n");
  return -VAR_0;
 }
 FUNC_7(VAR_15,
       "assuming hardware version %d (with firmware version 0x%02x%02x%02x)\n",
       VAR_16->hw_version, VAR_17[0], VAR_17[1], VAR_17[2]);

 if (VAR_16->send_cmd(VAR_15, VAR_2,
     VAR_16->capabilities)) {
  FUNC_6(VAR_15, "failed to query capabilities.\n");
  return -VAR_0;
 }
 FUNC_7(VAR_15,
       "Synaptics capabilities query result 0x%02x, 0x%02x, 0x%02x.\n",
       VAR_16->capabilities[0], VAR_16->capabilities[1],
       VAR_16->capabilities[2]);

 if (VAR_16->hw_version != 1) {
  if (VAR_16->send_cmd(VAR_15, VAR_5, VAR_16->samples)) {
   FUNC_6(VAR_15, "failed to query sample data\n");
   return -VAR_0;
  }
  FUNC_7(VAR_15,
        "Elan sample query result %02x, %02x, %02x\n",
        VAR_16->samples[0],
        VAR_16->samples[1],
        VAR_16->samples[2]);
 }

 if (VAR_16->samples[1] == 0x74 && VAR_16->hw_version == 0x03) {





  FUNC_7(VAR_15,
        "absolute mode broken, forcing standard PS/2 protocol\n");
  return -VAR_1;
 }


 VAR_16->has_trackpoint = (VAR_16->capabilities[0] & 0x80) == 0x80;

 VAR_16->x_res = 31;
 VAR_16->y_res = 31;
 if (VAR_16->hw_version == 4) {
  if (FUNC_2(VAR_15,
            &VAR_16->x_res,
            &VAR_16->y_res,
            &VAR_16->bus)) {
   FUNC_8(VAR_15,
         "failed to query resolution data.\n");
  }
 }


 switch (VAR_16->hw_version) {
 case 1:
  VAR_16->x_min = VAR_8;
  VAR_16->y_min = VAR_12;
  VAR_16->x_max = VAR_6;
  VAR_16->y_max = VAR_10;
  break;

 case 2:
  if (VAR_16->fw_version == 0x020800 ||
      VAR_16->fw_version == 0x020b00 ||
      VAR_16->fw_version == 0x020030) {
   VAR_16->x_min = VAR_9;
   VAR_16->y_min = VAR_13;
   VAR_16->x_max = VAR_7;
   VAR_16->y_max = VAR_11;
  } else {
   int VAR_19;
   int VAR_20;

   VAR_19 = (VAR_16->fw_version > 0x020800 &&
        VAR_16->fw_version < 0x020900) ? 1 : 2;

   if (VAR_16->send_cmd(VAR_15, VAR_3, VAR_17))
    return -VAR_0;

   VAR_20 = VAR_17[1] & 0x10;

   if (((VAR_16->fw_version >> 16) == 0x14) && VAR_20) {
    if (VAR_16->send_cmd(VAR_15, VAR_5, VAR_17))
     return -VAR_0;

    VAR_16->x_max = (VAR_16->capabilities[1] - VAR_19) * VAR_17[1] / 2;
    VAR_16->y_max = (VAR_16->capabilities[2] - VAR_19) * VAR_17[2] / 2;
   } else if (VAR_16->fw_version == 0x040216) {
    VAR_16->x_max = 819;
    VAR_16->y_max = 405;
   } else if (VAR_16->fw_version == 0x040219 || VAR_16->fw_version == 0x040215) {
    VAR_16->x_max = 900;
    VAR_16->y_max = 500;
   } else {
    VAR_16->x_max = (VAR_16->capabilities[1] - VAR_19) * 64;
    VAR_16->y_max = (VAR_16->capabilities[2] - VAR_19) * 64;
   }
  }
  break;

 case 3:
  if (VAR_16->send_cmd(VAR_15, VAR_3, VAR_17))
   return -VAR_0;

  VAR_16->x_max = (0x0f & VAR_17[0]) << 8 | VAR_17[1];
  VAR_16->y_max = (0xf0 & VAR_17[0]) << 4 | VAR_17[2];
  break;

 case 4:
  if (VAR_16->send_cmd(VAR_15, VAR_3, VAR_17))
   return -VAR_0;

  VAR_16->x_max = (0x0f & VAR_17[0]) << 8 | VAR_17[1];
  VAR_16->y_max = (0xf0 & VAR_17[0]) << 4 | VAR_17[2];
  VAR_18 = VAR_16->capabilities[1];
  if ((VAR_18 < 2) || (VAR_18 > VAR_16->x_max))
   return -VAR_0;

  VAR_16->width = VAR_16->x_max / (VAR_18 - 1);


  VAR_16->x_traces = VAR_18;


  VAR_18 = VAR_16->capabilities[2];
  if ((VAR_18 >= 2) && (VAR_18 <= VAR_16->y_max))
   VAR_16->y_traces = VAR_18;

  break;
 }


 VAR_16->has_middle_button = FUNC_1(VAR_14) ||
      (FUNC_0(VAR_16->fw_version) &&
       !FUNC_3(VAR_16));

 return 0;
}

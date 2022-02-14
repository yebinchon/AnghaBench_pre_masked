
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct solos_card {scalar_t__ fpga_version; TYPE_1__* dev; scalar_t__ config_regs; int fw_wq; scalar_t__ atmel_flash; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (struct solos_card*,int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct firmware const*) ;
 scalar_t__ FUNC_5 (struct firmware const**,char const*,int *) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct solos_card *VAR_15, int VAR_16)
{
 const struct firmware *VAR_17;
 const char *VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21;

 switch (VAR_16) {
 case 0:
  VAR_18 = "solos-FPGA.bin";
  if (VAR_15->atmel_flash)
   VAR_19 = VAR_0;
  else
   VAR_19 = VAR_13;
  break;
 case 1:
  VAR_18 = "solos-Firmware.bin";
  if (VAR_15->atmel_flash)
   VAR_19 = VAR_1;
  else
   VAR_19 = VAR_13;
  break;
 case 2:
  if (VAR_15->fpga_version > VAR_12){
   VAR_18 = "solos-db-FPGA.bin";
   if (VAR_15->atmel_flash)
    VAR_19 = VAR_0;
   else
    VAR_19 = VAR_13;
  } else {
   FUNC_1(&VAR_15->dev->dev, "FPGA version doesn't support"
     " daughter board upgrades\n");
   return -VAR_6;
  }
  break;
 case 3:
  if (VAR_15->fpga_version > VAR_12){
   VAR_18 = "solos-Firmware.bin";
   if (VAR_15->atmel_flash)
    VAR_19 = VAR_1;
   else
    VAR_19 = VAR_13;
  } else {
   FUNC_1(&VAR_15->dev->dev, "FPGA version doesn't support"
     " daughter board upgrades\n");
   return -VAR_6;
  }
  break;
 default:
  return -VAR_4;
 }

 if (FUNC_5(&VAR_17, VAR_18, &VAR_15->dev->dev))
  return -VAR_5;

 FUNC_1(&VAR_15->dev->dev, "Flash upgrade starting\n");


 FUNC_3(VAR_3, VAR_15->config_regs + VAR_2);

 VAR_20 = VAR_17->size / VAR_19;
 FUNC_1(&VAR_15->dev->dev, "Firmware size: %zd\n", VAR_17->size);
 FUNC_1(&VAR_15->dev->dev, "Number of blocks: %d\n", VAR_20);

 FUNC_1(&VAR_15->dev->dev, "Changing FPGA to Update mode\n");
 FUNC_3(1, VAR_15->config_regs + VAR_11);
 (void) FUNC_2(VAR_15->config_regs + VAR_11);


 if(VAR_16 == 0 || VAR_16 == 2)
  FUNC_1(&VAR_15->dev->dev, "Set FPGA Flash mode to FPGA Chip Erase\n");
 if(VAR_16 == 1 || VAR_16 == 3)
  FUNC_1(&VAR_15->dev->dev, "Set FPGA Flash mode to Solos Chip Erase\n");
 FUNC_3((VAR_16 * 2), VAR_15->config_regs + VAR_10);


 FUNC_3(1, VAR_15->config_regs + VAR_14);
 FUNC_7(VAR_15->fw_wq, !FUNC_2(VAR_15->config_regs + VAR_9));

 for (VAR_21 = 0; VAR_21 < VAR_17->size; VAR_21 += VAR_19) {
  int VAR_22;


  FUNC_3(0, VAR_15->config_regs + VAR_14);



  FUNC_3(((VAR_16 * 2) + 1), VAR_15->config_regs + VAR_10);


  for(VAR_22 = 0; VAR_22 < VAR_19; VAR_22 += 4) {
   uint32_t VAR_23;
   if (VAR_15->atmel_flash)
    VAR_23 = FUNC_6((uint32_t *)(VAR_17->data + VAR_21 + VAR_22));
   else
    VAR_23 = *(uint32_t *)(VAR_17->data + VAR_21 + VAR_22);
   if(VAR_15->fpga_version > VAR_12)
    FUNC_3(VAR_23, VAR_8 + VAR_22);
   else
    FUNC_3(VAR_23, FUNC_0(VAR_15, 3) + VAR_22);
  }


  FUNC_3(VAR_21 / VAR_19, VAR_15->config_regs + VAR_7);
  FUNC_3(1, VAR_15->config_regs + VAR_14);
  FUNC_7(VAR_15->fw_wq, !FUNC_2(VAR_15->config_regs + VAR_9));
 }

 FUNC_4(VAR_17);
 FUNC_3(0, VAR_15->config_regs + VAR_14);
 FUNC_3(0, VAR_15->config_regs + VAR_11);
 FUNC_3(0, VAR_15->config_regs + VAR_10);
 FUNC_1(&VAR_15->dev->dev, "Returning FPGA to Data mode\n");
 return 0;
}

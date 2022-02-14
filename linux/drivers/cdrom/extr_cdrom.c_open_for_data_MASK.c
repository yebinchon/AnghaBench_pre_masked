
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; scalar_t__ data; } ;
typedef TYPE_1__ tracktype ;
struct cdrom_device_ops {int (* drive_status ) (struct cdrom_device_info*,int ) ;int (* tray_move ) (struct cdrom_device_info*,int ) ;int (* open ) (struct cdrom_device_info*,int ) ;int (* lock_door ) (struct cdrom_device_info*,int) ;} ;
struct cdrom_device_info {int options; struct cdrom_device_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct cdrom_device_info*,TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_3 (struct cdrom_device_info*,int ) ;
 int FUNC_4 (struct cdrom_device_info*,int ) ;
 int FUNC_5 (struct cdrom_device_info*,int ) ;
 int FUNC_6 (struct cdrom_device_info*,int ) ;
 int FUNC_7 (struct cdrom_device_info*,int ) ;
 int FUNC_8 (struct cdrom_device_info*,int) ;
 int FUNC_9 (struct cdrom_device_info*,int) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static
int FUNC_11(struct cdrom_device_info *VAR_14)
{
 int VAR_15;
 const struct cdrom_device_ops *VAR_16 = VAR_14->ops;
 tracktype VAR_17;
 FUNC_1(VAR_9, "entering open_for_data\n");


 if (VAR_16->drive_status != ((void*)0)) {
  VAR_15 = VAR_16->drive_status(VAR_14, VAR_5);
  FUNC_1(VAR_9, "drive_status=%d\n", VAR_15);
  if (VAR_15 == VAR_8) {
   FUNC_1(VAR_9, "the tray is open...\n");

   if (FUNC_0(VAR_0) &&
       VAR_14->options & VAR_2) {
    FUNC_1(VAR_9, "trying to close the tray\n");
    VAR_15=VAR_16->tray_move(VAR_14,0);
    if (VAR_15) {
     FUNC_1(VAR_9, "bummer. tried to close the tray but failed.\n");





     VAR_15=-VAR_12;
     goto clean_up_and_return;
    }
   } else {
    FUNC_1(VAR_9, "bummer. this drive can't close the tray.\n");
    VAR_15=-VAR_12;
    goto clean_up_and_return;
   }

   VAR_15 = VAR_16->drive_status(VAR_14, VAR_5);
   if ((VAR_15 == VAR_7) || (VAR_15==VAR_8)) {
    FUNC_1(VAR_9, "bummer. the tray is still not closed.\n");
    FUNC_1(VAR_9, "tray might not contain a medium\n");
    VAR_15=-VAR_12;
    goto clean_up_and_return;
   }
   FUNC_1(VAR_9, "the tray is now closed\n");
  }

  VAR_15 = VAR_16->drive_status(VAR_14, VAR_5);
  if (VAR_15!=VAR_6) {
   VAR_15 = -VAR_12;
   goto clean_up_and_return;
  }
 }
 FUNC_2(VAR_14, &VAR_17);
 if (VAR_17.error == VAR_7) {
  FUNC_1(VAR_9, "bummer. no disc.\n");
  VAR_15=-VAR_12;
  goto clean_up_and_return;
 }


 if (VAR_17.data==0) {
  if (VAR_14->options & VAR_3) {


      FUNC_1(VAR_9, "bummer. wrong media type.\n");
      FUNC_1(VAR_10, "pid %d must open device O_NONBLOCK!\n",
      (unsigned int)FUNC_10(VAR_13));
      VAR_15=-VAR_11;
      goto clean_up_and_return;
  }
  else {
      FUNC_1(VAR_9, "wrong media type, but CDO_CHECK_TYPE not set\n");
  }
 }

 FUNC_1(VAR_9, "all seems well, opening the devicen");


 VAR_15 = VAR_16->open(VAR_14, 0);
 FUNC_1(VAR_9, "opening the device gave me %d\n", VAR_15);



 if (VAR_15) {
  FUNC_1(VAR_9, "open device failed\n");
  goto clean_up_and_return;
 }
 if (FUNC_0(VAR_1) && (VAR_14->options & VAR_4)) {
   VAR_16->lock_door(VAR_14, 1);
   FUNC_1(VAR_9, "door locked\n");
 }
 FUNC_1(VAR_9, "device opened successfully\n");
 return VAR_15;






clean_up_and_return:
 FUNC_1(VAR_9, "open failed\n");
 if (FUNC_0(VAR_1) && VAR_14->options & VAR_4) {
   VAR_16->lock_door(VAR_14, 0);
   FUNC_1(VAR_9, "door unlocked\n");
 }
 return VAR_15;
}

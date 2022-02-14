
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct trackpoint_data {size_t variant_id; size_t firmware_id; } ;
struct ps2dev {TYPE_1__* serio; } ;
struct psmouse {char* name; int vendor; struct trackpoint_data* private; TYPE_2__* dev; int disconnect; int reconnect; struct ps2dev ps2dev; } ;
struct TYPE_4__ {int propbit; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (struct trackpoint_data*) ;
 struct trackpoint_data* FUNC_4 (int,int ) ;
 int FUNC_5 (struct psmouse*,char*,int) ;
 int FUNC_6 (struct psmouse*,char*,int ,size_t,size_t,size_t) ;
 int FUNC_7 (struct psmouse*,char*) ;
 int VAR_8 ;
 int FUNC_8 (struct trackpoint_data*) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (struct ps2dev*) ;
 int FUNC_10 (struct ps2dev*,int ,size_t*) ;
 int VAR_10 ;
 int FUNC_11 (struct psmouse*,size_t*,size_t*) ;
 int FUNC_12 (struct psmouse*,int) ;
 int * VAR_11 ;

int FUNC_13(struct psmouse *VAR_12, bool VAR_13)
{
 struct ps2dev *VAR_14 = &VAR_12->ps2dev;
 struct trackpoint_data *VAR_15;
 u8 VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 int VAR_19;

 VAR_19 = FUNC_11(VAR_12, &VAR_16, &VAR_17);
 if (VAR_19)
  return VAR_19;

 if (!VAR_13)
  return 0;

 VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 FUNC_8(VAR_15);
 VAR_15->variant_id = VAR_16;
 VAR_15->firmware_id = VAR_17;

 VAR_12->private = VAR_15;

 VAR_12->vendor = VAR_11[VAR_16];
 VAR_12->name = "TrackPoint";

 VAR_12->reconnect = VAR_10;
 VAR_12->disconnect = VAR_9;

 if (VAR_16 != VAR_7) {

  VAR_18 = 0x33;
 } else {
  VAR_19 = FUNC_10(VAR_14, VAR_6, &VAR_18);
  if (VAR_19) {
   FUNC_7(VAR_12,
         "failed to get extended button data, assuming 3 buttons\n");
   VAR_18 = 0x33;
  } else if (!VAR_18) {
   FUNC_7(VAR_12,
         "got 0 in extended button data, assuming 3 buttons\n");
   VAR_18 = 0x33;
  }
 }

 if ((VAR_18 & 0x0f) >= 3)
  FUNC_2(VAR_12->dev, VAR_2, VAR_0);

 FUNC_0(VAR_4, VAR_12->dev->propbit);
 FUNC_0(VAR_5, VAR_12->dev->propbit);

 if (VAR_16 != VAR_7 ||
     FUNC_9(VAR_14) != 0) {



  FUNC_12(VAR_12, 0);
 }

 VAR_19 = FUNC_1(&VAR_14->serio->dev, &VAR_8);
 if (VAR_19) {
  FUNC_5(VAR_12,
       "failed to create sysfs attributes, error: %d\n",
       VAR_19);
  FUNC_3(VAR_12->private);
  VAR_12->private = ((void*)0);
  return -1;
 }

 FUNC_6(VAR_12,
       "%s TrackPoint firmware: 0x%02x, buttons: %d/%d\n",
       VAR_12->vendor, VAR_17,
       (VAR_18 & 0xf0) >> 4, VAR_18 & 0x0f);

 return 0;
}

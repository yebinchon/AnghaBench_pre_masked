
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct urb {int status; struct gtco* context; } ;
struct TYPE_4__ {scalar_t__ product; } ;
struct input_dev {TYPE_2__ id; } ;
struct gtco {int* buffer; int max_X; TYPE_1__* intf; struct input_dev* inputdevice; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_23 ;
 int FUNC_3 (struct input_dev*,int ,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*,scalar_t__,int) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_9(struct urb *VAR_24)
{
 struct gtco *VAR_25 = VAR_24->context;
 struct input_dev *VAR_26;
 int VAR_27;
 u32 VAR_28 = 0;
 char VAR_29[2];

 VAR_26 = VAR_25->inputdevice;


 if (VAR_24->status == -VAR_8 ||
     VAR_24->status == -VAR_9 ||
     VAR_24->status == -VAR_10) {


  return;
 }

 if (VAR_24->status != 0) {




  goto resubmit;
 }






 if (VAR_26->id.product == VAR_18 ||
     VAR_26->id.product == VAR_19 ||
     VAR_26->id.product == VAR_20) {







  switch (VAR_25->buffer[0]) {
  case 5:

   VAR_28 = ((u16)(VAR_25->buffer[8]) << 1);
   VAR_28 |= (u16)(VAR_25->buffer[7] >> 7);
   FUNC_4(VAR_26, VAR_2,
      VAR_25->buffer[8]);


   VAR_25->buffer[7] = (u8)((VAR_25->buffer[7]) & 0x7F);


  case 4:

   FUNC_4(VAR_26, VAR_3,
      FUNC_7(VAR_25->buffer[6], 6));

   FUNC_4(VAR_26, VAR_4,
      FUNC_7(VAR_25->buffer[7], 6));


  case 2:
  case 3:

   VAR_28 = (VAR_25->buffer[5]) & VAR_13;



   FUNC_3(VAR_26, VAR_11, VAR_17, VAR_28);


  case 1:

   VAR_28 = FUNC_2(&VAR_25->buffer[1]);
   FUNC_4(VAR_26, VAR_5, VAR_28);

   VAR_28 = FUNC_2(&VAR_25->buffer[3]);
   FUNC_4(VAR_26, VAR_6, VAR_28);


   VAR_28 = VAR_25->buffer[5] & VAR_14 ? 1 : 0;
   FUNC_4(VAR_26, VAR_0, VAR_28);



   if (VAR_25->buffer[0] == 1) {






    VAR_28 = VAR_25->buffer[5] & VAR_13;
    FUNC_0(&VAR_25->intf->dev,
     "======>>>>>>REPORT 1: val 0x%X(%d)\n",
     VAR_28, VAR_28);





    FUNC_3(VAR_26, VAR_11, VAR_17, VAR_28);
   }
   break;

  case 7:

   FUNC_3(VAR_26, VAR_11, VAR_16,
        VAR_25->buffer[1]);
   break;
  }
 }


 if (VAR_26->id.product == VAR_21 ||
     VAR_26->id.product == VAR_22) {


  if (VAR_25->buffer[0] == 2) {

   FUNC_3(VAR_26, VAR_11, VAR_16, VAR_25->buffer[1]);
  }


  if (VAR_25->buffer[0] == 1) {
   char VAR_30;


   if (VAR_25->max_X > 0x10000) {

    VAR_28 = (u16)(((u16)(VAR_25->buffer[2] << 8)) | (u8)VAR_25->buffer[1]);
    VAR_28 |= (u32)(((u8)VAR_25->buffer[3] & 0x1) << 16);

    FUNC_4(VAR_26, VAR_5, VAR_28);

    VAR_29[0] = (u8)((u8)(VAR_25->buffer[3]) >> 1);
    VAR_29[0] |= (u8)((VAR_25->buffer[3] & 0x1) << 7);

    VAR_29[1] = (u8)(VAR_25->buffer[4] >> 1);
    VAR_29[1] |= (u8)((VAR_25->buffer[5] & 0x1) << 7);

    VAR_28 = FUNC_2(VAR_29);
    FUNC_4(VAR_26, VAR_6, VAR_28);





    VAR_30 = VAR_25->buffer[5] >> 1;
   } else {

    VAR_28 = FUNC_2(&VAR_25->buffer[1]);
    FUNC_4(VAR_26, VAR_5, VAR_28);

    VAR_28 = FUNC_2(&VAR_25->buffer[3]);
    FUNC_4(VAR_26, VAR_6, VAR_28);

    VAR_30 = VAR_25->buffer[5];
   }


   VAR_28 = VAR_30 & VAR_14 ? 1 : 0;
   FUNC_4(VAR_26, VAR_0, VAR_28);


   VAR_28 = VAR_30 & 0x0F;





   FUNC_3(VAR_26, VAR_11, VAR_17, VAR_28);



   FUNC_4(VAR_26, VAR_1, VAR_25->buffer[6]);
  }
 }


 FUNC_3(VAR_26, VAR_11, VAR_15, VAR_25->buffer[0]);


 FUNC_6(VAR_26);

 resubmit:
 VAR_27 = FUNC_8(VAR_24, VAR_12);
 if (VAR_27 != 0)
  FUNC_1(&VAR_25->intf->dev,
   "usb_submit_urb failed rc=0x%x\n", VAR_27);
}

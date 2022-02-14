
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbhid_device {int outhead; int outtail; int ctrlhead; int ctrltail; int intf; int iofl; scalar_t__ urbctrl; int lock; scalar_t__ last_ctrl; TYPE_2__* ctrl; scalar_t__ urbout; scalar_t__ last_out; TYPE_1__* out; } ;
struct hid_report {scalar_t__ type; } ;
struct hid_device {int quirks; struct usbhid_device* driver_data; } ;
struct TYPE_4__ {unsigned char dir; struct hid_report* report; void* raw_report; } ;
struct TYPE_3__ {struct hid_report* report; void* raw_report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 void* FUNC_0 (struct hid_report*,int ) ;
 int FUNC_1 (struct hid_report*,void*) ;
 int FUNC_2 (struct hid_device*,char*) ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct usbhid_device*) ;
 int FUNC_13 (struct usbhid_device*) ;

__attribute__((used)) static void FUNC_14(struct hid_device *VAR_12, struct hid_report *VAR_13,
       unsigned char VAR_14)
{
 int VAR_15;
 struct usbhid_device *VAR_16 = VAR_12->driver_data;

 if (((VAR_12->quirks & VAR_7) && VAR_14 == VAR_9) ||
  FUNC_5(VAR_3, &VAR_16->iofl))
  return;

 if (VAR_16->urbout && VAR_14 == VAR_10 && VAR_13->type == VAR_5) {
  if ((VAR_15 = (VAR_16->outhead + 1) & (VAR_4 - 1)) == VAR_16->outtail) {
   FUNC_2(VAR_12, "output queue full\n");
   return;
  }

  VAR_16->out[VAR_16->outhead].raw_report = FUNC_0(VAR_13, VAR_0);
  if (!VAR_16->out[VAR_16->outhead].raw_report) {
   FUNC_2(VAR_12, "output queueing failed\n");
   return;
  }
  FUNC_1(VAR_13, VAR_16->out[VAR_16->outhead].raw_report);
  VAR_16->out[VAR_16->outhead].report = VAR_13;
  VAR_16->outhead = VAR_15;


  if (!FUNC_5(VAR_6, &VAR_16->iofl)) {
   FUNC_13(VAR_16);


  } else if (FUNC_6(VAR_11, VAR_16->last_out + VAR_8 * 5)) {


   FUNC_7(VAR_16->intf);






   FUNC_9(VAR_16->urbout);


   FUNC_4(&VAR_16->lock);

   FUNC_11(VAR_16->urbout);
   FUNC_3(&VAR_16->lock);
   FUNC_10(VAR_16->urbout);


   if (!FUNC_5(VAR_6, &VAR_16->iofl))
    FUNC_13(VAR_16);


   FUNC_8(VAR_16->intf);
  }
  return;
 }

 if ((VAR_15 = (VAR_16->ctrlhead + 1) & (VAR_1 - 1)) == VAR_16->ctrltail) {
  FUNC_2(VAR_12, "control queue full\n");
  return;
 }

 if (VAR_14 == VAR_10) {
  VAR_16->ctrl[VAR_16->ctrlhead].raw_report = FUNC_0(VAR_13, VAR_0);
  if (!VAR_16->ctrl[VAR_16->ctrlhead].raw_report) {
   FUNC_2(VAR_12, "control queueing failed\n");
   return;
  }
  FUNC_1(VAR_13, VAR_16->ctrl[VAR_16->ctrlhead].raw_report);
 }
 VAR_16->ctrl[VAR_16->ctrlhead].report = VAR_13;
 VAR_16->ctrl[VAR_16->ctrlhead].dir = VAR_14;
 VAR_16->ctrlhead = VAR_15;


 if (!FUNC_5(VAR_2, &VAR_16->iofl)) {
  FUNC_12(VAR_16);


 } else if (FUNC_6(VAR_11, VAR_16->last_ctrl + VAR_8 * 5)) {


  FUNC_7(VAR_16->intf);






  FUNC_9(VAR_16->urbctrl);


  FUNC_4(&VAR_16->lock);

  FUNC_11(VAR_16->urbctrl);
  FUNC_3(&VAR_16->lock);
  FUNC_10(VAR_16->urbctrl);


  if (!FUNC_5(VAR_2, &VAR_16->iofl))
   FUNC_12(VAR_16);


  FUNC_8(VAR_16->intf);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct usb_interface {int dev; int cur_altsetting; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct pxrc {TYPE_1__* input; int phys; int urb; struct usb_interface* intf; int pm_mutex; } ;
struct TYPE_6__ {char* name; int close; int open; int id; int phys; } ;


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
 int VAR_10 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,struct pxrc*) ;
 TYPE_1__* FUNC_2 (int *) ;
 void* FUNC_3 (int *,size_t,int ) ;
 struct pxrc* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,struct pxrc*) ;
 struct usb_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ,int ) ;
 size_t FUNC_13 (struct usb_endpoint_descriptor*) ;
 int FUNC_14 (int ,struct usb_device*,int ,void*,size_t,int ,struct pxrc*,int) ;
 int FUNC_15 (int ,int *,int *,struct usb_endpoint_descriptor**,int *) ;
 int FUNC_16 (struct usb_device*,int ,int) ;
 int FUNC_17 (struct usb_device*,int ) ;
 int FUNC_18 (struct usb_interface*,struct pxrc*) ;
 int FUNC_19 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_20(struct usb_interface *VAR_15,
        const struct usb_device_id *VAR_16)
{
 struct usb_device *VAR_17 = FUNC_9(VAR_15);
 struct pxrc *VAR_18;
 struct usb_endpoint_descriptor *VAR_19;
 size_t VAR_20;
 void *VAR_21;
 int VAR_22;





 VAR_22 = FUNC_15(VAR_15->cur_altsetting,
       ((void*)0), ((void*)0), &VAR_19, ((void*)0));
 if (VAR_22) {
  FUNC_0(&VAR_15->dev, "Could not find endpoint\n");
  return VAR_22;
 }

 VAR_18 = FUNC_4(&VAR_15->dev, sizeof(*VAR_18), VAR_10);
 if (!VAR_18)
  return -VAR_8;

 FUNC_10(&VAR_18->pm_mutex);
 VAR_18->intf = VAR_15;

 FUNC_18(VAR_18->intf, VAR_18);

 VAR_20 = FUNC_13(VAR_19);
 VAR_21 = FUNC_3(&VAR_15->dev, VAR_20, VAR_10);
 if (!VAR_21)
  return -VAR_8;

 VAR_18->urb = FUNC_12(0, VAR_10);
 if (!VAR_18->urb)
  return -VAR_8;

 VAR_22 = FUNC_1(&VAR_15->dev, VAR_12, VAR_18);
 if (VAR_22)
  return VAR_22;

 FUNC_14(VAR_18->urb, VAR_17,
    FUNC_17(VAR_17, VAR_19->bEndpointAddress),
    VAR_21, VAR_20, VAR_14, VAR_18, 1);

 VAR_18->input = FUNC_2(&VAR_15->dev);
 if (!VAR_18->input) {
  FUNC_0(&VAR_15->dev, "couldn't allocate input device\n");
  return -VAR_8;
 }

 VAR_18->input->name = "PXRC Flight Controller Adapter";

 FUNC_16(VAR_17, VAR_18->phys, sizeof(VAR_18->phys));
 FUNC_11(VAR_18->phys, "/input0", sizeof(VAR_18->phys));
 VAR_18->input->phys = VAR_18->phys;

 FUNC_19(VAR_17, &VAR_18->input->id);

 VAR_18->input->open = VAR_13;
 VAR_18->input->close = VAR_11;

 FUNC_7(VAR_18->input, VAR_9, VAR_7);
 FUNC_6(VAR_18->input, VAR_5, 0, 255, 0, 0);
 FUNC_6(VAR_18->input, VAR_6, 0, 255, 0, 0);
 FUNC_6(VAR_18->input, VAR_2, 0, 255, 0, 0);
 FUNC_6(VAR_18->input, VAR_3, 0, 255, 0, 0);
 FUNC_6(VAR_18->input, VAR_1, 0, 255, 0, 0);
 FUNC_6(VAR_18->input, VAR_4, 0, 255, 0, 0);
 FUNC_6(VAR_18->input, VAR_0, 0, 255, 0, 0);

 FUNC_8(VAR_18->input, VAR_18);

 VAR_22 = FUNC_5(VAR_18->input);
 if (VAR_22)
  return VAR_22;

 return 0;
}

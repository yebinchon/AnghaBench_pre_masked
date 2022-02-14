
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct usb_hcd {int rsrc_start; int rsrc_len; int * regs; } ;
struct resource {int start; } ;
struct TYPE_6__ {int coherent_dma_mask; int * dma_mask; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hc_driver {int description; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 struct hc_driver VAR_7 ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (struct resource*) ;
 int FUNC_11 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_12 (struct hc_driver const*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct usb_hcd *VAR_9;
 const struct hc_driver *VAR_10 = &VAR_7;
 struct resource *VAR_11;
 int VAR_12;
 int VAR_13;

 if (FUNC_13())
  return -VAR_2;

 VAR_11 = FUNC_7(VAR_8, VAR_4, 0);
 if (!VAR_11) {
  FUNC_2(&VAR_8->dev,
   "Found HC with no IRQ. Check %s setup!\n",
   FUNC_4(&VAR_8->dev));
  return -VAR_2;
 }
 VAR_12 = VAR_11->start;

 VAR_8->dev.coherent_dma_mask = FUNC_0(32);
 VAR_8->dev.dma_mask = &VAR_8->dev.coherent_dma_mask;

 VAR_9 = FUNC_12(VAR_10, &VAR_8->dev, FUNC_4(&VAR_8->dev));
 if (!VAR_9) {
  VAR_13 = -VAR_3;
  goto fail_create_hcd;
 }

 VAR_11 = FUNC_7(VAR_8, VAR_5, 0);
 if (!VAR_11) {
  FUNC_2(&VAR_8->dev,
   "Found HC with no register addr. Check %s setup!\n",
   FUNC_4(&VAR_8->dev));
  VAR_13 = -VAR_2;
  goto fail_request_resource;
 }
 VAR_9->rsrc_start = VAR_11->start;
 VAR_9->rsrc_len = FUNC_10(VAR_11);

 if (!FUNC_9(VAR_9->rsrc_start, VAR_9->rsrc_len,
    VAR_10->description)) {
  FUNC_1(&VAR_8->dev, "controller already in use\n");
  VAR_13 = -VAR_0;
  goto fail_request_resource;
 }

 VAR_9->regs = FUNC_5(VAR_9->rsrc_start, VAR_9->rsrc_len);
 if (VAR_9->regs == ((void*)0)) {
  FUNC_1(&VAR_8->dev, "error mapping memory\n");
  VAR_13 = -VAR_1;
  goto fail_ioremap;
 }

 VAR_13 = FUNC_11(VAR_9, VAR_12, VAR_6);
 if (VAR_13)
  goto fail_add_hcd;

 FUNC_3(&VAR_8->dev, "added MCS814X EHCI driver\n");

 return VAR_13;

fail_add_hcd:
 FUNC_6(VAR_9->regs);
fail_ioremap:
 FUNC_8(VAR_9->rsrc_start, VAR_9->rsrc_len);
fail_request_resource:
 FUNC_14(VAR_9);
fail_create_hcd:
 FUNC_2(&VAR_8->dev, "init %s fail, %d\n", FUNC_4(&VAR_8->dev), VAR_13);
 return VAR_13;
}

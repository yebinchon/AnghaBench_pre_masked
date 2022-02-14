
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {scalar_t__ rsrc_len; scalar_t__ rsrc_start; int * regs; } ;
struct TYPE_4__ {int coherent_dma_mask; int * dma_mask; } ;
struct platform_device {TYPE_1__* resource; TYPE_2__ dev; } ;
struct hc_driver {int dummy; } ;
struct TYPE_3__ {scalar_t__ flags; scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_hcd*) ;
 int * FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (struct usb_hcd*,scalar_t__,int ) ;
 struct usb_hcd* FUNC_9 (struct hc_driver const*,TYPE_2__*,char*) ;
 int FUNC_10 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_11(const struct hc_driver *VAR_5,
    struct platform_device *VAR_6)
{
 int VAR_7;
 struct usb_hcd *VAR_8;

 if (VAR_6->resource[1].flags != VAR_2) {
  FUNC_5("resource[1] is not IORESOURCE_IRQ");
  return -VAR_1;
 }

 VAR_6->dev.coherent_dma_mask = FUNC_0(32);
 VAR_6->dev.dma_mask = &VAR_6->dev.coherent_dma_mask;

 VAR_8 = FUNC_9(VAR_5, &VAR_6->dev, "mcs814x");
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_8->rsrc_start = VAR_6->resource[0].start;
 VAR_8->rsrc_len = VAR_6->resource[0].end - VAR_6->resource[0].start + 1;
 if (!FUNC_7(VAR_8->rsrc_start, VAR_8->rsrc_len, VAR_4)) {
  FUNC_10(VAR_8);
  VAR_7 = -VAR_0;
  goto err1;
 }

 VAR_8->regs = FUNC_2(VAR_8->rsrc_start, VAR_8->rsrc_len);
 if (VAR_8->regs == ((void*)0)) {
  FUNC_5("ioremap failed");
  VAR_7 = -VAR_1;
  goto err2;
 }

 FUNC_4(FUNC_1(VAR_8));

 VAR_7 = FUNC_8(VAR_8, VAR_6->resource[1].start, VAR_3);
 if (VAR_7 == 0)
  return VAR_7;

 FUNC_3(VAR_8->regs);
err2:
 FUNC_6(VAR_8->rsrc_start, VAR_8->rsrc_len);
err1:
 FUNC_10(VAR_8);

 return VAR_7;
}

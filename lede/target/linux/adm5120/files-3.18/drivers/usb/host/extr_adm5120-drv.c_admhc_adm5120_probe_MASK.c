
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {scalar_t__ rsrc_len; scalar_t__ rsrc_start; int regs; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dev; } ;
struct hc_driver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_10 (struct hc_driver const*,int *,char*) ;
 int FUNC_11 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_12(const struct hc_driver *VAR_5,
    struct platform_device *VAR_6)
{
 int VAR_7;
 struct usb_hcd *VAR_8;
 int VAR_9;
 struct resource *VAR_10;


 VAR_10 = FUNC_6(VAR_6, VAR_3, 0);
 if (!VAR_10) {
  FUNC_0("no IOMEM resource found\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_5(VAR_6, 0);
 if (VAR_9 < 0) {
  FUNC_0("no IRQ resource found\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_10(VAR_5, &VAR_6->dev, "ADM5120");
 if (!VAR_8)
  return -VAR_2;

 VAR_8->rsrc_start = VAR_10->start;
 VAR_8->rsrc_len = VAR_10->end - VAR_10->start + 1;

 if (!FUNC_8(VAR_8->rsrc_start, VAR_8->rsrc_len, VAR_4)) {
  FUNC_0("request_mem_region failed\n");
  VAR_7 = -VAR_0;
  goto err_dev;
 }

 VAR_8->regs = FUNC_3(VAR_8->rsrc_start, VAR_8->rsrc_len);
 if (!VAR_8->regs) {
  FUNC_0("ioremap failed\n");
  VAR_7 = -VAR_2;
  goto err_mem;
 }

 FUNC_1(FUNC_2(VAR_8));

 VAR_7 = FUNC_9(VAR_8, VAR_9, 0);
 if (VAR_7)
  goto err_io;

 return 0;

err_io:
 FUNC_4(VAR_8->regs);
err_mem:
 FUNC_7(VAR_8->rsrc_start, VAR_8->rsrc_len);
err_dev:
 FUNC_11(VAR_8);
 return VAR_7;
}

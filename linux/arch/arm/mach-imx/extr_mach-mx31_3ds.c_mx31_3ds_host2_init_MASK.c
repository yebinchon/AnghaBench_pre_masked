
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int id; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_15)
{
 int VAR_16;

 FUNC_6(VAR_6, VAR_14);
 FUNC_6(VAR_9, VAR_14);
 FUNC_6(VAR_10, VAR_14);
 FUNC_6(VAR_11, VAR_14);
 FUNC_6(VAR_7, VAR_14);
 FUNC_6(VAR_8, VAR_14);
 FUNC_6(VAR_5, VAR_14);
 FUNC_6(VAR_1, VAR_14);
 FUNC_6(VAR_2, VAR_14);
 FUNC_6(VAR_3, VAR_14);
 FUNC_6(VAR_0, VAR_14);
 FUNC_6(VAR_4, VAR_14);

 VAR_16 = FUNC_2(VAR_13, "usbh2-reset");
 if (VAR_16) {
  FUNC_7("Failed to request the USB Host 2 reset gpio\n");
  return VAR_16;
 }

 VAR_16 = FUNC_0(VAR_13, 0);
 if (VAR_16) {
  FUNC_7("Failed to drive the USB Host 2 reset gpio\n");
  goto usbotg_free_reset;
 }

 FUNC_4(1);
 FUNC_3(VAR_13, 1);

 FUNC_4(10);

 return FUNC_5(VAR_15->id, VAR_12);

usbotg_free_reset:
 FUNC_1(VAR_13);
 return VAR_16;
}

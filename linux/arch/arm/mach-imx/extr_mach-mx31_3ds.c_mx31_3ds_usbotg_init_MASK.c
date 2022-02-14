
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_14;

 FUNC_5(VAR_1, VAR_13);
 FUNC_5(VAR_2, VAR_13);
 FUNC_5(VAR_3, VAR_13);
 FUNC_5(VAR_4, VAR_13);
 FUNC_5(VAR_5, VAR_13);
 FUNC_5(VAR_6, VAR_13);
 FUNC_5(VAR_7, VAR_13);
 FUNC_5(VAR_8, VAR_13);
 FUNC_5(VAR_0, VAR_13);
 FUNC_5(VAR_9, VAR_13);
 FUNC_5(VAR_10, VAR_13);
 FUNC_5(VAR_11, VAR_13);

 VAR_14 = FUNC_2(VAR_12, "otgusb-reset");
 if (VAR_14) {
  FUNC_6("Failed to request the USB OTG reset gpio\n");
  return VAR_14;
 }

 VAR_14 = FUNC_0(VAR_12, 0);
 if (VAR_14) {
  FUNC_6("Failed to drive the USB OTG reset gpio\n");
  goto usbotg_free_reset;
 }

 FUNC_4(1);
 FUNC_3(VAR_12, 1);
 return 0;

usbotg_free_reset:
 FUNC_1(VAR_12);
 return VAR_14;
}

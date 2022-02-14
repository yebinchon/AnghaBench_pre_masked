
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_18)
{
 int VAR_19;

 FUNC_7(VAR_7, VAR_17);
 FUNC_7(VAR_10, VAR_17);
 FUNC_7(VAR_11, VAR_17);
 FUNC_7(VAR_12, VAR_17);
 FUNC_7(VAR_8, VAR_17);
 FUNC_7(VAR_9, VAR_17);
 FUNC_7(VAR_4, VAR_17);
 FUNC_7(VAR_6, VAR_17);
 FUNC_7(VAR_2, VAR_17);
 FUNC_7(VAR_1, VAR_17);
 FUNC_7(VAR_3, VAR_17);
 FUNC_7(VAR_5, VAR_17);

 FUNC_6(VAR_0, 1);



 VAR_19 = FUNC_2(VAR_15, "USB-H2-CS");
 if (VAR_19) {
  FUNC_8("Failed to request the usb host 2 CS gpio\n");
  return VAR_19;
 }

 VAR_19 = FUNC_0(VAR_15, 0 );
 if (VAR_19) {
  FUNC_8("Failed to drive the usb host 2 CS gpio\n");
  goto h2_free_cs;
 }


 VAR_19 = FUNC_2(VAR_16, "USB-H2-RESET");
 if (VAR_19) {
  FUNC_8("Failed to request the usb host 2 reset gpio\n");
  goto h2_free_cs;
 }

 VAR_19 = FUNC_0(VAR_16, 1 );
 if (VAR_19) {
  FUNC_8("Failed to reset the usb host 2 phy\n");
  goto h2_free_reset;
 }

 FUNC_3(VAR_16, 0 );
 FUNC_4(5);
 FUNC_3(VAR_16, 1 );
 FUNC_4(10);

 return FUNC_5(VAR_18->id, VAR_14 |
   VAR_13);

h2_free_reset:
 FUNC_1(VAR_16);
h2_free_cs:
 FUNC_1(VAR_15);
 return VAR_19;
}

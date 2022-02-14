
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cht_wc_extcon_data {int usb_host; unsigned int previous_cable; int edev; int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cht_wc_extcon_data*,int) ;
 int FUNC_1 (struct cht_wc_extcon_data*,int) ;
 int FUNC_2 (struct cht_wc_extcon_data*,int) ;
 int FUNC_3 (struct cht_wc_extcon_data*,int) ;
 int FUNC_4 (struct cht_wc_extcon_data*,int ) ;
 int FUNC_5 (struct cht_wc_extcon_data*,unsigned int,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_9(struct cht_wc_extcon_data *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12 = VAR_2;

 bool VAR_13 = VAR_8->usb_host;

 VAR_9 = FUNC_8(VAR_8->regmap, VAR_0, &VAR_10);
 if (VAR_9) {
  FUNC_6(VAR_8->dev, "Error reading pwrsrc status: %d\n", VAR_9);
  return;
 }

 VAR_11 = FUNC_2(VAR_8, VAR_10);
 if (VAR_11 == VAR_4) {
  FUNC_0(VAR_8, 0);
  FUNC_3(VAR_8, 1);


  goto charger_det_done;
 }

 FUNC_3(VAR_8, 0);
 FUNC_0(VAR_8, 1);


 if (!(VAR_10 & VAR_1)) {

  FUNC_4(VAR_8, VAR_6);
  goto set_state;
 }

 VAR_9 = FUNC_1(VAR_8, VAR_13);
 if (VAR_9 >= 0)
  VAR_12 = VAR_9;

charger_det_done:

 FUNC_4(VAR_8, VAR_7);

set_state:
 if (VAR_12 != VAR_8->previous_cable) {
  FUNC_5(VAR_8, VAR_12, 1);
  FUNC_5(VAR_8, VAR_8->previous_cable, 0);
  VAR_8->previous_cable = VAR_12;
 }

 VAR_8->usb_host = ((VAR_11 == VAR_4) || (VAR_11 == VAR_5));
 FUNC_7(VAR_8->edev, VAR_3, VAR_8->usb_host);
}

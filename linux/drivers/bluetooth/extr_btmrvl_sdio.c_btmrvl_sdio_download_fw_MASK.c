
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct btmrvl_sdio_card {int func; scalar_t__ helper; TYPE_1__* reg; } ;
struct TYPE_2__ {int card_fw_status0; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct btmrvl_sdio_card*) ;
 int FUNC_3 (struct btmrvl_sdio_card*) ;
 scalar_t__ FUNC_4 (struct btmrvl_sdio_card*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct btmrvl_sdio_card *VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 int VAR_7 = VAR_3;

 if (!VAR_4 || !VAR_4->func) {
  FUNC_1("card or function is NULL!");
  return -VAR_0;
 }

 if (!FUNC_4(VAR_4, 1)) {
  FUNC_0("Firmware already downloaded!");
  return 0;
 }

 FUNC_5(VAR_4->func);


 VAR_6 = FUNC_6(VAR_4->func, VAR_4->reg->card_fw_status0, &VAR_5);
 if (VAR_5) {
  FUNC_1("Failed to read FW downloading status!");
  VAR_5 = -VAR_1;
  goto done;
 }
 if (VAR_6) {
  FUNC_0("BT not the winner (%#x). Skip FW downloading", VAR_6);


  VAR_7 *= 10;
 } else {
  if (VAR_4->helper) {
   VAR_5 = FUNC_3(VAR_4);
   if (VAR_5) {
    FUNC_1("Failed to download helper!");
    VAR_5 = -VAR_1;
    goto done;
   }
  }

  if (FUNC_2(VAR_4)) {
   FUNC_1("Failed to download firmware!");
   VAR_5 = -VAR_1;
   goto done;
  }
 }





 if (FUNC_4(VAR_4, VAR_7)) {
  FUNC_1("FW failed to be active in time!");
  VAR_5 = -VAR_2;
  goto done;
 }

 FUNC_7(VAR_4->func);

 return 0;

done:
 FUNC_7(VAR_4->func);
 return VAR_5;
}

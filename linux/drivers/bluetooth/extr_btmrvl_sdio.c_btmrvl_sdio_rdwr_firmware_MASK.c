
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct btmrvl_sdio_card {TYPE_2__* reg; int func; } ;
struct TYPE_3__ {struct btmrvl_sdio_card* card; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;
typedef enum rdwr_status { ____Placeholder_rdwr_status } rdwr_status ;
struct TYPE_4__ {int fw_dump_ctrl; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,scalar_t__,int ,int*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static enum
rdwr_status FUNC_5(struct btmrvl_private *VAR_6,
          u8 VAR_7)
{
 struct btmrvl_sdio_card *VAR_8 = VAR_6->btmrvl_dev.card;
 int VAR_9, VAR_10;
 u8 VAR_11 = 0;

 FUNC_3(VAR_8->func, VAR_1, VAR_8->reg->fw_dump_ctrl,
      &VAR_9);

 if (VAR_9) {
  FUNC_0("SDIO write err");
  return VAR_4;
 }

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_11 = FUNC_2(VAR_8->func, VAR_8->reg->fw_dump_ctrl,
           &VAR_9);

  if (VAR_9) {
   FUNC_0("SDIO read err");
   return VAR_4;
  }

  if (VAR_11 == VAR_0)
   break;
  if (VAR_7 && VAR_11 == VAR_7)
   return VAR_3;
  if (VAR_11 != VAR_1) {
   FUNC_1("The ctrl reg was changed, re-try again!");
   FUNC_3(VAR_8->func, VAR_1,
        VAR_8->reg->fw_dump_ctrl, &VAR_9);
   if (VAR_9) {
    FUNC_0("SDIO write err");
    return VAR_4;
   }
  }
  FUNC_4(100, 200);
 }

 if (VAR_11 == VAR_1) {
  FUNC_0("Fail to pull ctrl_data");
  return VAR_4;
 }

 return VAR_5;
}

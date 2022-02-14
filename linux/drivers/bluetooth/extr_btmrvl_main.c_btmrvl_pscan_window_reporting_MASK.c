
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btmrvl_sdio_card {int support_pscan_win_report; } ;
struct TYPE_2__ {struct btmrvl_sdio_card* card; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct btmrvl_private*,int ,int *,int) ;

int FUNC_2(struct btmrvl_private *VAR_1, u8 VAR_2)
{
 struct btmrvl_sdio_card *VAR_3 = VAR_1->btmrvl_dev.card;
 int VAR_4;

 if (!VAR_3->support_pscan_win_report)
  return 0;

 VAR_4 = FUNC_1(VAR_1, VAR_0,
       &VAR_2, 1);
 if (VAR_4)
  FUNC_0("PSCAN_WIN_REPORT_ENABLE command failed: %#x", VAR_4);

 return VAR_4;
}

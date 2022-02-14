
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
struct btmrvl_sdio_card {int func; } ;
struct TYPE_2__ {int tx_dnld_rdy; struct btmrvl_sdio_card* card; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; int driver_lock; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct btmrvl_private*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct btmrvl_private *VAR_3)
{
 ulong VAR_4;
 u8 VAR_5;
 struct btmrvl_sdio_card *VAR_6 = VAR_3->btmrvl_dev.card;

 FUNC_4(&VAR_3->driver_lock, VAR_4);
 VAR_5 = VAR_2;
 VAR_2 = 0;
 FUNC_5(&VAR_3->driver_lock, VAR_4);

 FUNC_2(VAR_6->func);
 if (VAR_5 & VAR_0) {
  if (VAR_3->btmrvl_dev.tx_dnld_rdy)
   FUNC_0("tx_done already received: "
    " int_status=0x%x", VAR_5);
  else
   VAR_3->btmrvl_dev.tx_dnld_rdy = 1;
 }

 if (VAR_5 & VAR_1)
  FUNC_1(VAR_3);

 FUNC_3(VAR_6->func);

 return 0;
}

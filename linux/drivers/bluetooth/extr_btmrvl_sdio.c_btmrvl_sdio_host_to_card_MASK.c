
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct btmrvl_sdio_card {int func; int ioport; } ;
struct TYPE_2__ {int tx_dnld_rdy; struct btmrvl_sdio_card* card; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;


 scalar_t__ FUNC_0 (void*,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_10(struct btmrvl_private *VAR_7,
    u8 *VAR_8, u16 VAR_9)
{
 struct btmrvl_sdio_card *VAR_10 = VAR_7->btmrvl_dev.card;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13 = 0;
 u8 *VAR_14 = ((void*)0);
 void *VAR_15 = ((void*)0);
 int VAR_16;

 if (!VAR_10 || !VAR_10->func) {
  FUNC_2("card or function is NULL!");
  return -VAR_1;
 }

 VAR_12 = FUNC_3(VAR_9, VAR_6) * VAR_6;

 VAR_14 = VAR_8;
 if ((unsigned long) VAR_8 & (VAR_0 - 1) ||
     VAR_9 < VAR_12) {
  VAR_16 = FUNC_1(VAR_12, VAR_0) +
      VAR_0;
  VAR_15 = FUNC_5(VAR_16, VAR_4);
  if (!VAR_15)
   return -VAR_3;
  VAR_14 = (u8 *) FUNC_0(VAR_15, VAR_0);
  FUNC_6(VAR_14, VAR_8, VAR_9);
 }

 FUNC_7(VAR_10->func);

 do {

  VAR_11 = FUNC_9(VAR_10->func, VAR_10->ioport, VAR_14,
       VAR_12);
  if (VAR_11 < 0) {
   VAR_13++;
   FUNC_2("i=%d writesb failed: %d", VAR_13, VAR_11);
   FUNC_2("hex: %*ph", VAR_9, VAR_8);
   VAR_11 = -VAR_2;
   if (VAR_13 > VAR_5)
    goto exit;
  }
 } while (VAR_11);

 VAR_7->btmrvl_dev.tx_dnld_rdy = 0;

exit:
 FUNC_8(VAR_10->func);
 FUNC_4(VAR_15);

 return VAR_11;
}

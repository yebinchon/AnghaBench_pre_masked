
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
struct sdio_func {int dummy; } ;
struct btmrvl_sdio_card {TYPE_1__* reg; struct btmrvl_private* priv; } ;
struct btmrvl_private {int driver_lock; scalar_t__ surprise_removed; } ;
struct TYPE_2__ {scalar_t__ int_read_to_clear; } ;


 int FUNC_0 (char*,struct sdio_func*,struct btmrvl_sdio_card*) ;
 int FUNC_1 (struct btmrvl_private*) ;
 int FUNC_2 (struct btmrvl_sdio_card*,int *) ;
 int FUNC_3 (struct btmrvl_sdio_card*,int *) ;
 struct btmrvl_sdio_card* FUNC_4 (struct sdio_func*) ;
 int VAR_0 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct sdio_func *VAR_1)
{
 struct btmrvl_private *VAR_2;
 struct btmrvl_sdio_card *VAR_3;
 ulong VAR_4;
 u8 VAR_5 = 0;
 int VAR_6;

 VAR_3 = FUNC_4(VAR_1);
 if (!VAR_3 || !VAR_3->priv) {
  FUNC_0("sbi_interrupt(%p) card or priv is NULL, card=%p",
         VAR_1, VAR_3);
  return;
 }

 VAR_2 = VAR_3->priv;

 if (VAR_2->surprise_removed)
  return;

 if (VAR_3->reg->int_read_to_clear)
  VAR_6 = FUNC_2(VAR_3, &VAR_5);
 else
  VAR_6 = FUNC_3(VAR_3, &VAR_5);

 if (VAR_6)
  return;

 FUNC_5(&VAR_2->driver_lock, VAR_4);
 VAR_0 |= VAR_5;
 FUNC_6(&VAR_2->driver_lock, VAR_4);

 FUNC_1(VAR_2);
}

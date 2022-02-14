
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {int dummy; } ;
struct btmrvl_sdio_card {TYPE_1__* priv; } ;
struct TYPE_3__ {int surprise_removed; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct btmrvl_sdio_card*) ;
 int FUNC_3 (struct btmrvl_sdio_card*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 struct btmrvl_sdio_card* FUNC_5 (struct sdio_func*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_6(struct sdio_func *VAR_2)
{
 struct btmrvl_sdio_card *VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_5(VAR_2);
  if (VAR_3) {



   if (VAR_1) {
    FUNC_4(VAR_3->priv,
       VAR_0);
    FUNC_2(VAR_3);
   }
   FUNC_0("unregister dev");
   VAR_3->priv->surprise_removed = 1;
   FUNC_3(VAR_3);
   FUNC_1(VAR_3->priv);
  }
 }
}

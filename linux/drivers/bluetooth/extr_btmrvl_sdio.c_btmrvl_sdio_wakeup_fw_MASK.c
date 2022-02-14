
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btmrvl_sdio_card {int func; TYPE_2__* reg; } ;
struct TYPE_3__ {struct btmrvl_sdio_card* card; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;
struct TYPE_4__ {int cfg; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct btmrvl_private *VAR_2)
{
 struct btmrvl_sdio_card *VAR_3 = VAR_2->btmrvl_dev.card;
 int VAR_4 = 0;

 if (!VAR_3 || !VAR_3->func) {
  FUNC_1("card or function is NULL!");
  return -VAR_0;
 }

 FUNC_2(VAR_3->func);

 FUNC_4(VAR_3->func, VAR_1, VAR_3->reg->cfg, &VAR_4);

 FUNC_3(VAR_3->func);

 FUNC_0("wake up firmware");

 return VAR_4;
}

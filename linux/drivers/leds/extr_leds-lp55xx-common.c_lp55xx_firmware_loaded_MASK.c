
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lp55xx_chip {int engine_idx; struct firmware const* fw; int lock; TYPE_3__* cfg; TYPE_2__* engines; TYPE_1__* cl; } ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;
typedef enum lp55xx_engine_index { ____Placeholder_lp55xx_engine_index } lp55xx_engine_index ;
struct TYPE_6__ {int (* firmware_cb ) (struct lp55xx_chip*) ;} ;
struct TYPE_5__ {int mode; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct lp55xx_chip*) ;

__attribute__((used)) static void FUNC_5(const struct firmware *VAR_1, void *VAR_2)
{
 struct lp55xx_chip *VAR_3 = VAR_2;
 struct device *VAR_4 = &VAR_3->cl->dev;
 enum lp55xx_engine_index VAR_5 = VAR_3->engine_idx;

 if (!VAR_1) {
  FUNC_0(VAR_4, "firmware request failed\n");
  return;
 }


 FUNC_1(&VAR_3->lock);

 VAR_3->engines[VAR_5 - 1].mode = VAR_0;
 VAR_3->fw = VAR_1;
 if (VAR_3->cfg->firmware_cb)
  VAR_3->cfg->firmware_cb(VAR_3);

 FUNC_2(&VAR_3->lock);


 FUNC_3(VAR_3->fw);
 VAR_3->fw = ((void*)0);
}

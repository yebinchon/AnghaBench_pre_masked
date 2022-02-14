
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lp55xx_predef_pattern {int size_b; int b; int size_g; int g; int size_r; int r; } ;
struct lp55xx_chip {int engine_idx; TYPE_2__* cl; TYPE_1__* pdata; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct lp55xx_predef_pattern* patterns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct lp55xx_predef_pattern*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct lp55xx_chip*) ;
 int FUNC_3 (struct lp55xx_chip*,int) ;
 int FUNC_4 (struct lp55xx_chip*) ;
 int FUNC_5 (struct lp55xx_chip*,scalar_t__,int ,int ) ;
 int FUNC_6 (struct lp55xx_chip*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct lp55xx_chip *VAR_9, int VAR_10)
{
 struct lp55xx_predef_pattern *VAR_11;
 int VAR_12;

 if (VAR_10 == VAR_2) {
  FUNC_3(VAR_9, 0);
  return 0;
 }

 VAR_11 = VAR_9->pdata->patterns + (VAR_10 - 1);
 if (!VAR_11 || FUNC_0(VAR_11)) {
  FUNC_1(&VAR_9->cl->dev, "invalid pattern data\n");
  return -VAR_0;
 }

 FUNC_4(VAR_9);


 FUNC_6(VAR_9, VAR_3, VAR_1);


 for (VAR_12 = VAR_7; VAR_12 <= VAR_8; VAR_12++) {
  VAR_9->engine_idx = VAR_12;
  FUNC_2(VAR_9);
 }


 FUNC_6(VAR_9, VAR_4, 0);
 FUNC_6(VAR_9, VAR_4 + 1, 0);
 FUNC_6(VAR_9, VAR_5, 0);
 FUNC_6(VAR_9, VAR_5 + 1, 0);
 FUNC_6(VAR_9, VAR_6, 0);
 FUNC_6(VAR_9, VAR_6 + 1, 0);


 FUNC_5(VAR_9, VAR_4,
    VAR_11->r, VAR_11->size_r);
 FUNC_5(VAR_9, VAR_5,
    VAR_11->g, VAR_11->size_g);
 FUNC_5(VAR_9, VAR_6,
    VAR_11->b, VAR_11->size_b);


 FUNC_3(VAR_9, 1);

 return 0;
}

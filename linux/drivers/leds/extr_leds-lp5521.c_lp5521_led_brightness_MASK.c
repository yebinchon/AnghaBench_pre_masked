
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_led {int brightness; scalar_t__ chan_nr; struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lp55xx_chip*,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct lp55xx_led *VAR_1)
{
 struct lp55xx_chip *VAR_2 = VAR_1->chip;
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_0(VAR_2, VAR_0 + VAR_1->chan_nr,
  VAR_1->brightness);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}

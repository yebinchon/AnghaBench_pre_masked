
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_led {size_t chan_nr; int brightness; struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int lock; } ;






 int FUNC_0 (struct lp55xx_chip*,int const,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct lp55xx_led *VAR_0)
{
 struct lp55xx_chip *VAR_1 = VAR_0->chip;
 static const u8 VAR_2[] = {
  129,
  130,
  131,
  128,
 };
 int VAR_3;

 FUNC_1(&VAR_1->lock);
 VAR_3 = FUNC_0(VAR_1, VAR_2[VAR_0->chan_nr], VAR_0->brightness);
 FUNC_2(&VAR_1->lock);

 return VAR_3;
}

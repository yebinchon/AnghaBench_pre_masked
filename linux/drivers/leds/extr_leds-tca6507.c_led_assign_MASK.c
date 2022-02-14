
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tca6507_led {scalar_t__ offtime; scalar_t__ ontime; struct tca6507_chip* chip; } ;
struct tca6507_chip {int work; scalar_t__ reg_set; int lock; } ;


 int FUNC_0 (struct tca6507_led*) ;
 int FUNC_1 (struct tca6507_led*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tca6507_led *VAR_0)
{
 struct tca6507_chip *VAR_1 = VAR_0->chip;
 int VAR_2;
 unsigned long VAR_3;

 FUNC_3(&VAR_1->lock, VAR_3);
 FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {




  VAR_0->ontime = 0;
  VAR_0->offtime = 0;
  FUNC_0(VAR_0);
 }
 FUNC_4(&VAR_1->lock, VAR_3);

 if (VAR_1->reg_set)
  FUNC_2(&VAR_1->work);
 return VAR_2;
}

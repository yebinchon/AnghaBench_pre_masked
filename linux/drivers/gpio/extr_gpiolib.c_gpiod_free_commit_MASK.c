
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {int flags; int label; TYPE_1__* gdev; } ;
struct gpio_chip {int (* free ) (struct gpio_chip*,int ) ;int can_sleep; } ;
struct TYPE_2__ {struct gpio_chip* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct gpio_desc*,int *) ;
 int FUNC_2 (struct gpio_desc*) ;
 int VAR_5 ;
 int FUNC_3 (struct gpio_desc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct gpio_chip*,int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static bool FUNC_11(struct gpio_desc *VAR_6)
{
 bool VAR_7 = 0;
 unsigned long VAR_8;
 struct gpio_chip *VAR_9;

 FUNC_5();

 FUNC_3(VAR_6);

 FUNC_7(&VAR_5, VAR_8);

 VAR_9 = VAR_6->gdev->chip;
 if (VAR_9 && FUNC_10(VAR_4, &VAR_6->flags)) {
  if (VAR_9->free) {
   FUNC_8(&VAR_5, VAR_8);
   FUNC_6(VAR_9->can_sleep);
   VAR_9->free(VAR_9, FUNC_2(VAR_6));
   FUNC_7(&VAR_5, VAR_8);
  }
  FUNC_4(VAR_6->label);
  FUNC_1(VAR_6, ((void*)0));
  FUNC_0(VAR_0, &VAR_6->flags);
  FUNC_0(VAR_4, &VAR_6->flags);
  FUNC_0(VAR_2, &VAR_6->flags);
  FUNC_0(VAR_3, &VAR_6->flags);
  FUNC_0(VAR_1, &VAR_6->flags);
  VAR_7 = 1;
 }

 FUNC_8(&VAR_5, VAR_8);
 return VAR_7;
}

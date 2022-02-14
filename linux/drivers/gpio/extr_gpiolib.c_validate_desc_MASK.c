
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {TYPE_1__* gdev; } ;
struct TYPE_2__ {int dev; int chip; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc const*) ;
 int FUNC_1 (struct gpio_desc const*) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int FUNC_4(const struct gpio_desc *VAR_1, const char *VAR_2)
{
 if (!VAR_1)
  return 0;
 if (FUNC_0(VAR_1)) {
  FUNC_3("%s: invalid GPIO (errorpointer)\n", VAR_2);
  return FUNC_1(VAR_1);
 }
 if (!VAR_1->gdev) {
  FUNC_3("%s: invalid GPIO (no device)\n", VAR_2);
  return -VAR_0;
 }
 if (!VAR_1->gdev->chip) {
  FUNC_2(&VAR_1->gdev->dev,
    "%s: backing chip is gone\n", VAR_2);
  return 0;
 }
 return 1;
}

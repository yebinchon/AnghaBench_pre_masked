
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct dln2_gpio {int pdev; } ;
typedef int duration ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 struct dln2_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_3, unsigned VAR_4,
    unsigned long VAR_5)
{
 struct dln2_gpio *VAR_6 = FUNC_2(VAR_3);
 __le32 VAR_7;

 if (FUNC_4(VAR_5) != VAR_2)
  return -VAR_1;

 VAR_7 = FUNC_0(FUNC_3(VAR_5));
 return FUNC_1(VAR_6->pdev, VAR_0,
    &VAR_7, sizeof(VAR_7));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gpio_desc*,int) ;
 int FUNC_1 (struct gpio_desc*,int) ;
 int FUNC_2 (struct gpio_desc*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct gpio_desc *VAR_3, int VAR_4)
{
 if (FUNC_3(VAR_0, &VAR_3->flags))
  VAR_4 = !VAR_4;
 if (FUNC_3(VAR_1, &VAR_3->flags))
  FUNC_0(VAR_3, VAR_4);
 else if (FUNC_3(VAR_2, &VAR_3->flags))
  FUNC_1(VAR_3, VAR_4);
 else
  FUNC_2(VAR_3, VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio {int gpio; int label; int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(const struct gpio *VAR_0, size_t VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++, VAR_0++) {
  VAR_3 = FUNC_1(VAR_0->gpio, VAR_0->flags, VAR_0->label);
  if (VAR_3)
   goto err_free;
 }
 return 0;

err_free:
 while (VAR_2--)
  FUNC_0((--VAR_0)->gpio);
 return VAR_3;
}

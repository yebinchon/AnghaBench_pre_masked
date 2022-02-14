
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct uniphier_gpio_priv {TYPE_2__ chip; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int * FUNC_1 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct uniphier_gpio_priv *VAR_2,
           unsigned int VAR_3)
{
 struct device_node *VAR_4 = VAR_2->chip.parent->of_node;
 const __be32 *VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = FUNC_1(VAR_4, "socionext,interrupt-ranges", &VAR_9);
 if (!VAR_5)
  return -VAR_0;

 VAR_9 /= sizeof(*VAR_5);

 for (; VAR_9 >= 3; VAR_9 -= 3) {
  VAR_6 = FUNC_0(*VAR_5++);
  VAR_7 = FUNC_0(*VAR_5++);
  VAR_8 = FUNC_0(*VAR_5++);

  if (VAR_6 <= VAR_3 && VAR_3 < VAR_6 + VAR_8)
   return VAR_3 - VAR_6 + VAR_7;
 }

 return -VAR_1;
}

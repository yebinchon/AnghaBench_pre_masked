
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_device_config {int (* post_init_device ) (struct lp55xx_chip*) ;} ;
struct lp55xx_chip {struct lp55xx_device_config* cfg; } ;


 int FUNC_0 (struct lp55xx_chip*) ;

__attribute__((used)) static int FUNC_1(struct lp55xx_chip *VAR_0)
{
 struct lp55xx_device_config *VAR_1 = VAR_0->cfg;

 if (!VAR_1->post_init_device)
  return 0;

 return VAR_1->post_init_device(VAR_0);
}

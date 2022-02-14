
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {int dummy; } ;
struct ad5272_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct ad5272_data*,int ,int ) ;
 struct gpio_desc* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct gpio_desc*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct ad5272_data *VAR_2)
{
 struct gpio_desc *VAR_3;

 VAR_3 = FUNC_3(&VAR_2->client->dev, "reset",
  VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 if (VAR_3) {
  FUNC_5(1);
  FUNC_4(VAR_3, 1);
 } else {
  FUNC_2(VAR_2, VAR_0, 0);
 }
 FUNC_6(1000, 2000);

 return 0;
}

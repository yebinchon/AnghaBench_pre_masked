
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct gpio_desc {int dummy; } ;
struct ad5592r_state {TYPE_1__* ops; int dev; } ;
struct TYPE_2__ {int (* reg_write ) (struct ad5592r_state*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 struct gpio_desc* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct gpio_desc*,int) ;
 struct iio_dev* FUNC_4 (struct ad5592r_state*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ad5592r_state*,int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ad5592r_state *VAR_2)
{
 struct gpio_desc *VAR_3;
 struct iio_dev *VAR_4 = FUNC_4(VAR_2);

 VAR_3 = FUNC_2(VAR_2->dev, "reset", VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 if (VAR_3) {
  FUNC_8(1);
  FUNC_3(VAR_3, 1);
 } else {
  FUNC_5(&VAR_4->mlock);

  VAR_2->ops->reg_write(VAR_2, VAR_0, 0xdac);
  FUNC_6(&VAR_4->mlock);
 }

 FUNC_8(250);

 return 0;
}

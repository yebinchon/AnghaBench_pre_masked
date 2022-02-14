
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ak8974 {TYPE_1__* i2c; int map; int drdy_complete; scalar_t__ drdy_irq; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ak8974 *VAR_4)
{
 int VAR_5 = 2;
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_4->drdy_irq) {
  VAR_7 = FUNC_4(&VAR_4->drdy_complete,
     1 + FUNC_1(1000));
  if (!VAR_7) {
   FUNC_0(&VAR_4->i2c->dev,
    "timeout waiting for DRDY IRQ\n");
   return -VAR_3;
  }
  return 0;
 }


 do {
  FUNC_2(VAR_0);
  VAR_7 = FUNC_3(VAR_4->map, VAR_1, &VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_6 & VAR_2)
   return 0;
 } while (--VAR_5);

 FUNC_0(&VAR_4->i2c->dev, "timeout waiting for DRDY\n");
 return -VAR_3;
}

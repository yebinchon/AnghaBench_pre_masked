
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ak8974 {int drdy_complete; TYPE_1__* i2c; int map; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct ak8974 *VAR_6 = VAR_5;
 unsigned int VAR_7;
 int VAR_8;


 VAR_8 = FUNC_2(VAR_6->map, VAR_0, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_6->i2c->dev, "error reading DRDY status\n");
  return VAR_2;
 }
 if (VAR_7 & VAR_1) {

  FUNC_0(&VAR_6->drdy_complete);
  return VAR_2;
 }


 return VAR_3;
}

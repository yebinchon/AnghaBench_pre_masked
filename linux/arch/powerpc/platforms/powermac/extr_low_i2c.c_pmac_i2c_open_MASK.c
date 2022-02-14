
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_i2c_bus {int polled; int opened; int (* open ) (struct pmac_i2c_bus*) ;int mutex; int mode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pmac_i2c_bus*) ;

int FUNC_3(struct pmac_i2c_bus *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_2->mutex);
 VAR_2->polled = VAR_3 || VAR_0;
 VAR_2->opened = 1;
 VAR_2->mode = VAR_1;
 if (VAR_2->open && (VAR_4 = VAR_2->open(VAR_2)) != 0) {
  VAR_2->opened = 0;
  FUNC_1(&VAR_2->mutex);
  return VAR_4;
 }
 return 0;
}

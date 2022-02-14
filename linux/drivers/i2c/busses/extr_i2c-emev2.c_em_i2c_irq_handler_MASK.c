
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em_i2c_device {int msg_done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct em_i2c_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct em_i2c_device *VAR_3 = VAR_2;

 if (FUNC_1(VAR_3))
  return VAR_0;

 FUNC_0(&VAR_3->msg_done);

 return VAR_0;
}

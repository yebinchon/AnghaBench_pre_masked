
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ dev; } ;
struct TYPE_4__ {TYPE_1__ connector; struct i2c_client* stdp4028_i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct i2c_client *VAR_6
   = VAR_3->stdp4028_i2c;

 FUNC_1(VAR_6,
      VAR_2,
      VAR_1);

 if (VAR_3->connector.dev)
  FUNC_0(VAR_3->connector.dev);

 return VAR_0;
}

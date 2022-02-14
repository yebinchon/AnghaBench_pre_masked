
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i2c_client {int dev; } ;
struct ak8975_data {TYPE_1__* def; int eoc_gpio; struct i2c_client* client; } ;
struct TYPE_2__ {int * ctrl_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ak8975_data *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 u32 VAR_6 = VAR_1;
 int VAR_7;


 while (VAR_6) {
  FUNC_3(VAR_0);
  if (FUNC_1(VAR_4->eoc_gpio))
   break;
  VAR_6 -= VAR_0;
 }
 if (!VAR_6) {
  FUNC_0(&VAR_5->dev, "Conversion timeout happened\n");
  return -VAR_2;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_4->def->ctrl_regs[VAR_3]);
 if (VAR_7 < 0)
  FUNC_0(&VAR_5->dev, "Error in reading ST1\n");

 return VAR_7;
}

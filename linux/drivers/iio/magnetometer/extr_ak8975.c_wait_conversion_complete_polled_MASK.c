
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct i2c_client {int dev; } ;
struct ak8975_data {TYPE_1__* def; struct i2c_client* client; } ;
struct TYPE_2__ {int * ctrl_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ak8975_data *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 u8 VAR_6;
 u32 VAR_7 = VAR_1;
 int VAR_8;


 while (VAR_7) {
  FUNC_2(VAR_0);
  VAR_8 = FUNC_1(VAR_5,
            VAR_4->def->ctrl_regs[VAR_3]);
  if (VAR_8 < 0) {
   FUNC_0(&VAR_5->dev, "Error in reading ST1\n");
   return VAR_8;
  }
  VAR_6 = VAR_8;
  if (VAR_6)
   break;
  VAR_7 -= VAR_0;
 }
 if (!VAR_7) {
  FUNC_0(&VAR_5->dev, "Conversion timeout happened\n");
  return -VAR_2;
 }

 return VAR_6;
}

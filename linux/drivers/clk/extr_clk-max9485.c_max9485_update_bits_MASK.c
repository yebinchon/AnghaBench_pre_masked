
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max9485_driver_data {int reg_value; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct max9485_driver_data *VAR_0,
          u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_0->reg_value &= ~VAR_1;
 VAR_0->reg_value |= VAR_2;

 FUNC_0(&VAR_0->client->dev,
  "updating mask 0x%02x value 0x%02x -> 0x%02x\n",
  VAR_1, VAR_2, VAR_0->reg_value);

 VAR_3 = FUNC_1(VAR_0->client,
         &VAR_0->reg_value,
         sizeof(VAR_0->reg_value));

 return VAR_3 < 0 ? VAR_3 : 0;
}

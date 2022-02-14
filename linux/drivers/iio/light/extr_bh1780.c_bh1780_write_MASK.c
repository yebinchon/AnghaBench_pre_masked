
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bh1780_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_2(struct bh1780_data *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1->client,
         VAR_0 | VAR_2,
         VAR_3);
 if (VAR_4 < 0)
  FUNC_0(&VAR_1->client->dev,
   "i2c_smbus_write_byte_data failed error "
   "%d, register %01x\n",
   VAR_4, VAR_2);
 return VAR_4;
}

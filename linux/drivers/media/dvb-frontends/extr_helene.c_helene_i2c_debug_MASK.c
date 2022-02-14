
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct helene_priv {TYPE_1__* i2c; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,scalar_t__,int ) ;
 int FUNC_1 (char*,int ,scalar_t__ const*,int ) ;

__attribute__((used)) static void FUNC_2(struct helene_priv *VAR_1,
  u8 VAR_2, u8 VAR_3, const u8 *VAR_4, u32 VAR_5)
{
 FUNC_0(&VAR_1->i2c->dev, "helene: I2C %s reg 0x%02x size %d\n",
   (VAR_3 == 0 ? "read" : "write"), VAR_2, VAR_5);
 FUNC_1("helene: I2C data: ",
   VAR_0, VAR_4, VAR_5);
}

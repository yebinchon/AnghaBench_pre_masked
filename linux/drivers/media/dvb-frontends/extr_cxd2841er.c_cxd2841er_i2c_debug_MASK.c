
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct cxd2841er_priv {TYPE_1__* i2c; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char*,scalar_t__,scalar_t__,int ,int ,scalar_t__ const*) ;

__attribute__((used)) static void FUNC_1(struct cxd2841er_priv *VAR_0,
    u8 VAR_1, u8 VAR_2, u8 VAR_3,
    const u8 *VAR_4, u32 VAR_5)
{
 FUNC_0(&VAR_0->i2c->dev,
  "cxd2841er: I2C %s addr %02x reg 0x%02x size %d data %*ph\n",
  (VAR_3 == 0 ? "read" : "write"), VAR_1, VAR_2, VAR_5, VAR_5, VAR_4);
}

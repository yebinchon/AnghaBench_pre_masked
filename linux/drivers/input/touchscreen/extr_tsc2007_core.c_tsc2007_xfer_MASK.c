
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tsc2007 {TYPE_1__* client; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,scalar_t__,int) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(struct tsc2007 *VAR_0, u8 VAR_1)
{
 s32 VAR_2;
 u16 VAR_3;

 VAR_2 = FUNC_2(VAR_0->client, VAR_1);
 if (VAR_2 < 0) {
  FUNC_1(&VAR_0->client->dev, "i2c io error: %d\n", VAR_2);
  return VAR_2;
 }





 VAR_3 = FUNC_3(VAR_2) >> 4;

 FUNC_0(&VAR_0->client->dev, "data: 0x%x, val: 0x%x\n", VAR_2, VAR_3);

 return VAR_3;
}

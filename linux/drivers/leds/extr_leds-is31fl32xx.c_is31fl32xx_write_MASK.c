
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct is31fl32xx_priv {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct is31fl32xx_priv *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0->client->dev, "writing register 0x%02X=0x%02X", VAR_1, VAR_2);

 VAR_3 = FUNC_2(VAR_0->client, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(&VAR_0->client->dev,
   "register write to 0x%02X failed (error %d)",
   VAR_1, VAR_3);
 }
 return VAR_3;
}

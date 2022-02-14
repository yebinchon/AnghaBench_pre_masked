
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stts751_priv {int interval; int res; int config; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct stts751_priv *VAR_3)
{
 u8 VAR_4;

 switch (VAR_3->interval) {
 case 9:

  VAR_4 = 0;
  break;
 case 8:

  VAR_4 = 1;
  break;
 default:

  VAR_4 = 3;
  break;
 }

 if (VAR_3->res == VAR_4)
  return 0;

 VAR_3->config &= ~VAR_0;
 VAR_3->config |= VAR_4 << VAR_1;
 FUNC_0(&VAR_3->client->dev, "setting res %d. config %x",
  VAR_4, VAR_3->config);
 VAR_3->res = VAR_4;

 return FUNC_1(VAR_3->client,
    VAR_2, VAR_3->config);
}

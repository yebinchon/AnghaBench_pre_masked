
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct elan_tp_data {TYPE_2__* client; TYPE_1__* ops; int vcc; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int (* power_control ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(struct elan_tp_data *VAR_1)
{
 int VAR_2 = VAR_0;
 int VAR_3;

 do {
  VAR_3 = VAR_1->ops->power_control(VAR_1->client, 0);
  if (!VAR_3) {
   VAR_3 = FUNC_2(VAR_1->vcc);
   if (VAR_3) {
    FUNC_0(&VAR_1->client->dev,
     "failed to disable regulator: %d\n",
     VAR_3);

    VAR_1->ops->power_control(VAR_1->client, 1);
    break;
   }

   return 0;
  }

  FUNC_1(30);
 } while (--VAR_2 > 0);

 FUNC_0(&VAR_1->client->dev, "failed to disable power: %d\n", VAR_3);
 return VAR_3;
}

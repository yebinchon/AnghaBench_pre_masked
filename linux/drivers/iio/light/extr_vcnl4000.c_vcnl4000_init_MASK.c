
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcnl4000_data {int rev; int al_scale; int vcnl4000_lock; TYPE_1__* client; int id; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vcnl4000_data *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_4->client, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = VAR_5 >> 4;
 switch (VAR_6) {
 case 129:
  if (VAR_4->id != VAR_1)
   FUNC_0(&VAR_4->client->dev,
     "wrong device id, use vcnl4000");
  break;
 case 128:
  if (VAR_4->id != VAR_3)
   FUNC_0(&VAR_4->client->dev,
     "wrong device id, use vcnl4010/4020");
  break;
 default:
  return -VAR_0;
 }

 VAR_4->rev = VAR_5 & 0xf;
 VAR_4->al_scale = 250000;
 FUNC_2(&VAR_4->vcnl4000_lock);

 return 0;
}

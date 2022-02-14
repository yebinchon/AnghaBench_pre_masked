
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bma180_data {TYPE_1__* client; scalar_t__ sleep_state; } ;
typedef enum bma180_chan { ____Placeholder_bma180_chan } bma180_chan ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(struct bma180_data *VAR_3, enum bma180_chan VAR_4)
{
 int VAR_5;

 if (VAR_3->sleep_state)
  return -VAR_2;

 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_1(VAR_3->client, VAR_1);
  if (VAR_5 < 0)
   FUNC_0(&VAR_3->client->dev, "failed to read temp register\n");
  break;
 default:
  VAR_5 = FUNC_2(VAR_3->client,
   VAR_0 + VAR_4 * 2);
  if (VAR_5 < 0)
   FUNC_0(&VAR_3->client->dev,
    "failed to read accel_%c register\n",
    'x' + VAR_4);
 }

 return VAR_5;
}

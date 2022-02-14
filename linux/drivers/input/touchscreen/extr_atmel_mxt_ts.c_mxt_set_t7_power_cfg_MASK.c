
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct t7_config {int idle; int active; } ;
struct mxt_data {int T7_address; TYPE_1__* client; struct t7_config t7_cfg; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,struct t7_config*) ;
 int FUNC_1 (struct device*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mxt_data *VAR_1, u8 VAR_2)
{
 struct device *VAR_3 = &VAR_1->client->dev;
 int VAR_4;
 struct t7_config *VAR_5;
 struct t7_config VAR_6 = { .active = 0, .idle = 0 };

 if (VAR_2 == VAR_0)
  VAR_5 = &VAR_6;
 else
  VAR_5 = &VAR_1->t7_cfg;

 VAR_4 = FUNC_0(VAR_1->client, VAR_1->T7_address,
    sizeof(VAR_1->t7_cfg), VAR_5);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3, "Set T7 ACTV:%d IDLE:%d\n",
  VAR_5->active, VAR_5->idle);

 return 0;
}

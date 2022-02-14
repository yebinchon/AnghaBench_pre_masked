
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int active; int idle; } ;
struct mxt_data {TYPE_2__ t7_cfg; int T7_address; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,TYPE_2__*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct mxt_data*,int ) ;
 int FUNC_3 (struct mxt_data*) ;

__attribute__((used)) static int FUNC_4(struct mxt_data *VAR_1)
{
 struct device *VAR_2 = &VAR_1->client->dev;
 int VAR_3;
 bool VAR_4 = 0;

recheck:
 VAR_3 = FUNC_0(VAR_1->client, VAR_1->T7_address,
    sizeof(VAR_1->t7_cfg), &VAR_1->t7_cfg);
 if (VAR_3)
  return VAR_3;

 if (VAR_1->t7_cfg.active == 0 || VAR_1->t7_cfg.idle == 0) {
  if (!VAR_4) {
   FUNC_1(VAR_2, "T7 cfg zero, resetting\n");
   FUNC_3(VAR_1);
   VAR_4 = 1;
   goto recheck;
  } else {
   FUNC_1(VAR_2, "T7 cfg zero after reset, overriding\n");
   VAR_1->t7_cfg.active = 20;
   VAR_1->t7_cfg.idle = 100;
   return FUNC_2(VAR_1, VAR_0);
  }
 }

 FUNC_1(VAR_2, "Initialized power cfg: ACTV %d, IDLE %d\n",
  VAR_1->t7_cfg.active, VAR_1->t7_cfg.idle);
 return 0;
}

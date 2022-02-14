
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int g_range; } ;
struct kxtj9_data {TYPE_2__* client; int last_poll_interval; int ctrl_reg1; TYPE_1__ pdata; int int_ctrl; } ;
struct TYPE_5__ {int dev; scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (struct kxtj9_data*) ;
 int FUNC_4 (struct kxtj9_data*) ;
 int FUNC_5 (struct kxtj9_data*,int ) ;
 int FUNC_6 (struct kxtj9_data*,int ) ;

__attribute__((used)) static int FUNC_7(struct kxtj9_data *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_4->client, VAR_0, 0);
 if (VAR_5 < 0)
  return VAR_5;


 if (VAR_4->client->irq) {
  VAR_5 = FUNC_2(VAR_4->client,
      VAR_1, VAR_4->int_ctrl);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_5 = FUNC_5(VAR_4, VAR_4->pdata.g_range);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_4->ctrl_reg1 |= VAR_3;
 VAR_5 = FUNC_2(VAR_4->client, VAR_0, VAR_4->ctrl_reg1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_6(VAR_4, VAR_4->last_poll_interval);
 if (VAR_5 < 0)
  return VAR_5;


 if (VAR_4->client->irq) {
  VAR_5 = FUNC_1(VAR_4->client, VAR_2);
  if (VAR_5 < 0) {
   FUNC_0(&VAR_4->client->dev,
    "error clearing interrupt: %d\n", VAR_5);
   goto fail;
  }
 }

 return 0;

fail:
 FUNC_3(VAR_4);
 return VAR_5;
}

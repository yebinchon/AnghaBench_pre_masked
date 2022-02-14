
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* power_off ) () ;} ;
struct kxtj9_data {TYPE_1__ pdata; TYPE_2__* client; int ctrl_reg1; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct kxtj9_data *VAR_2)
{
 int VAR_3;

 VAR_2->ctrl_reg1 &= VAR_1;
 VAR_3 = FUNC_1(VAR_2->client, VAR_0, VAR_2->ctrl_reg1);
 if (VAR_3 < 0)
  FUNC_0(&VAR_2->client->dev, "soft power off failed\n");

 if (VAR_2->pdata.power_off)
  VAR_2->pdata.power_off();
}

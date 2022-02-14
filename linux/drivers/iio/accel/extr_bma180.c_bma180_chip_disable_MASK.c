
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bma180_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct bma180_data*,int) ;
 scalar_t__ FUNC_1 (struct bma180_data*,int) ;
 scalar_t__ FUNC_2 (struct bma180_data*,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(struct bma180_data *VAR_0)
{
 if (FUNC_1(VAR_0, 0))
  goto err;
 if (FUNC_0(VAR_0, 0))
  goto err;
 if (FUNC_2(VAR_0, 1))
  goto err;

 return;

err:
 FUNC_3(&VAR_0->client->dev, "failed to disable the chip\n");
}

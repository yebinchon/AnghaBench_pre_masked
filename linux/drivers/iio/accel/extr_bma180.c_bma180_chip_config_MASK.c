
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bma180_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bma180_data*) ;
 int FUNC_1 (struct bma180_data*,int ,int ,int) ;
 int FUNC_2 (struct bma180_data*,int) ;
 int FUNC_3 (struct bma180_data*,int) ;
 int FUNC_4 (struct bma180_data*,int) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct bma180_data *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4);

 if (VAR_5)
  goto err;
 VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_1, 1);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_4, 1);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3, 1);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_2(VAR_4, 20);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_4(VAR_4, 2452);
 if (VAR_5)
  goto err;

 return 0;

err:
 FUNC_5(&VAR_4->client->dev, "failed to config the chip\n");
 return VAR_5;
}

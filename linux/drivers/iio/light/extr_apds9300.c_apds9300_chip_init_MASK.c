
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apds9300_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct apds9300_data*,int ) ;
 int FUNC_1 (struct apds9300_data*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(struct apds9300_data *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_1(VAR_4, 0);
 if (VAR_5 < 0)
  goto err;




 VAR_5 = FUNC_1(VAR_4, 1);
 if (VAR_5 < 0)
  goto err;
 VAR_5 = FUNC_3(VAR_4->client,
   VAR_1 | VAR_0);
 if (VAR_5 != VAR_2) {
  VAR_5 = -VAR_3;
  goto err;
 }




 VAR_5 = FUNC_0(VAR_4, 0);
 if (VAR_5 < 0)
  goto err;

 return 0;

err:
 FUNC_2(&VAR_4->client->dev, "failed to init the chip\n");
 return VAR_5;
}

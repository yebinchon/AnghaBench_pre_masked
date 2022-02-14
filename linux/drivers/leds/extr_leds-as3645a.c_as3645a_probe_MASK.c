
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct as3645a {int indicator_node; int flash_node; int mutex; int fled; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct as3645a*) ;
 int FUNC_1 (struct as3645a*) ;
 int FUNC_2 (struct as3645a*,int ) ;
 int FUNC_3 (struct as3645a*) ;
 int FUNC_4 (struct as3645a*) ;
 int FUNC_5 (int *) ;
 struct as3645a* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct i2c_client*,struct as3645a*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_3)
{
 struct as3645a *VAR_4;
 int VAR_5;

 if (!FUNC_5(&VAR_3->dev))
  return -VAR_0;

 VAR_4 = FUNC_6(&VAR_3->dev, sizeof(*VAR_4), VAR_2);
 if (VAR_4 == ((void*)0))
  return -VAR_1;

 VAR_4->client = VAR_3;

 VAR_5 = FUNC_2(VAR_4, FUNC_5(&VAR_3->dev));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 0)
  goto out_put_nodes;

 FUNC_11(&VAR_4->mutex);
 FUNC_8(VAR_3, VAR_4);

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto out_mutex_destroy;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  goto out_mutex_destroy;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  goto out_led_classdev_flash_unregister;

 return 0;

out_led_classdev_flash_unregister:
 FUNC_9(&VAR_4->fled);

out_mutex_destroy:
 FUNC_10(&VAR_4->mutex);

out_put_nodes:
 FUNC_7(VAR_4->flash_node);
 FUNC_7(VAR_4->indicator_node);

 return VAR_5;
}

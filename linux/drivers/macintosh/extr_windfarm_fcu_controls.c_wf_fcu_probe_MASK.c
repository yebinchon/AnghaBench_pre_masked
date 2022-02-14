
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_fcu_priv {int fan_list; struct i2c_client* i2c; int lock; int ref; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct wf_fcu_priv*) ;
 int FUNC_2 (struct wf_fcu_priv*) ;
 int FUNC_3 (int *) ;
 struct wf_fcu_priv* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct wf_fcu_priv*) ;
 scalar_t__ FUNC_9 (struct wf_fcu_priv*) ;
 int FUNC_10 (struct wf_fcu_priv*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 struct wf_fcu_priv *VAR_6;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_1;

 FUNC_3(&VAR_6->ref);
 FUNC_6(&VAR_6->lock);
 FUNC_0(&VAR_6->fan_list);
 VAR_6->i2c = VAR_4;





 if (FUNC_9(VAR_6)) {
  FUNC_7("wf_fcu: Initialization failed !\n");
  FUNC_2(VAR_6);
  return -VAR_2;
 }


 FUNC_10(VAR_6);





 if (FUNC_5(&VAR_6->fan_list))
  FUNC_8(VAR_6);


 if (FUNC_5(&VAR_6->fan_list)) {
  FUNC_7("wf_fcu: Failed to find fans for your machine\n");
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 FUNC_1(&VAR_4->dev, VAR_6);

 return 0;
}

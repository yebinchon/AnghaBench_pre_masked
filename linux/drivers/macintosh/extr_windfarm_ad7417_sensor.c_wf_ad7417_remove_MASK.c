
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_ad7417_priv {int ref; int * sensors; int * i2c; } ;
struct i2c_client {int dev; } ;


 struct wf_ad7417_priv* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct wf_ad7417_priv *VAR_2 = FUNC_0(&VAR_1->dev);
 int VAR_3;


 VAR_2->i2c = ((void*)0);


 for (VAR_3 = 0; VAR_3 < 5; VAR_3++)
  FUNC_2(&VAR_2->sensors[VAR_3]);

 FUNC_1(&VAR_2->ref, VAR_0);

 return 0;
}

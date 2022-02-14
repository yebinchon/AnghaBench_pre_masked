
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct as3645a {int indicator_node; int flash_node; int mutex; int iled_cdev; int fled; int vfind; int vf; } ;


 int VAR_0 ;
 int FUNC_0 (struct as3645a*,int ,int) ;
 int FUNC_1 (int ) ;
 struct as3645a* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct as3645a *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2, VAR_0, 0);

 FUNC_6(VAR_2->vf);
 FUNC_6(VAR_2->vfind);

 FUNC_3(&VAR_2->fled);
 FUNC_4(&VAR_2->iled_cdev);

 FUNC_5(&VAR_2->mutex);

 FUNC_1(VAR_2->flash_node);
 FUNC_1(VAR_2->indicator_node);

 return 0;
}

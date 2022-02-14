
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;int provider_data; int device; } ;
struct i40iw_device {int cm_core; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct iw_cm_id*) ;
 struct i40iw_device* FUNC_3 (int ) ;

int FUNC_4(struct iw_cm_id *VAR_0)
{
 struct i40iw_device *VAR_1;

 VAR_1 = FUNC_3(VAR_0->device);
 if (VAR_0->provider_data)
  FUNC_0(&VAR_1->cm_core, VAR_0->provider_data, 1);
 else
  FUNC_1("cm_id->provider_data was NULL\n");

 VAR_0->rem_ref(VAR_0);

 return 0;
}

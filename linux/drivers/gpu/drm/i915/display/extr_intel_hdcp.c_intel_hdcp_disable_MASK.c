
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdcp {scalar_t__ value; int check_work; int mutex; scalar_t__ hdcp_encrypted; scalar_t__ hdcp2_encrypted; int shim; } ;
struct intel_connector {struct intel_hdcp hdcp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_connector*) ;
 int FUNC_1 (struct intel_connector*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct intel_connector *VAR_2)
{
 struct intel_hdcp *VAR_3 = &VAR_2->hdcp;
 int VAR_4 = 0;

 if (!VAR_3->shim)
  return -VAR_1;

 FUNC_3(&VAR_3->mutex);

 if (VAR_3->value != VAR_0) {
  VAR_3->value = VAR_0;
  if (VAR_3->hdcp2_encrypted)
   VAR_4 = FUNC_0(VAR_2);
  else if (VAR_3->hdcp_encrypted)
   VAR_4 = FUNC_1(VAR_2);
 }

 FUNC_4(&VAR_3->mutex);
 FUNC_2(&VAR_3->check_work);
 return VAR_4;
}

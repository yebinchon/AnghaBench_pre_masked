
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct intel_hdcp {scalar_t__ value; scalar_t__ content_type; int mutex; int prop_work; int check_work; int shim; } ;
struct intel_connector {struct intel_hdcp hdcp; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_connector*) ;
 int FUNC_2 (struct intel_connector*) ;
 scalar_t__ FUNC_3 (struct intel_connector*) ;
 scalar_t__ FUNC_4 (struct intel_connector*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct intel_connector *VAR_6, u8 VAR_7)
{
 struct intel_hdcp *VAR_8 = &VAR_6->hdcp;
 unsigned long VAR_9 = VAR_1;
 int VAR_10 = -VAR_4;

 if (!VAR_8->shim)
  return -VAR_5;

 FUNC_5(&VAR_8->mutex);
 FUNC_0(VAR_8->value == VAR_2);
 VAR_8->content_type = VAR_7;





 if (FUNC_3(VAR_6)) {
  VAR_10 = FUNC_1(VAR_6);
  if (!VAR_10)
   VAR_9 = VAR_0;
 }





 if (VAR_10 && FUNC_4(VAR_6) &&
     VAR_8->content_type != VAR_3) {
  VAR_10 = FUNC_2(VAR_6);
 }

 if (!VAR_10) {
  FUNC_7(&VAR_8->check_work, VAR_9);
  VAR_8->value = VAR_2;
  FUNC_8(&VAR_8->prop_work);
 }

 FUNC_6(&VAR_8->mutex);
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct intel_hdcp {int is_paired; } ;
struct intel_dp {TYPE_1__* attached_connector; } ;
struct intel_digital_port {struct intel_dp dp; } ;
struct hdcp2_dp_msg_data {scalar_t__ msg_id; int timeout2; int timeout; int msg_detectable; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct intel_hdcp hdcp; } ;


 int FUNC_0 (char*,scalar_t__,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct intel_digital_port*,scalar_t__,int*) ;
 int FUNC_2 (struct intel_hdcp*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct intel_digital_port *VAR_2,
       const struct hdcp2_dp_msg_data *VAR_3)
{
 struct intel_dp *VAR_4 = &VAR_2->dp;
 struct intel_hdcp *VAR_5 = &VAR_4->attached_connector->hdcp;
 u8 VAR_6 = VAR_3->msg_id;
 int VAR_7, VAR_8;
 bool VAR_9 = 0;

 if (VAR_6 == VAR_1 && !VAR_5->is_paired)
  VAR_8 = VAR_3->timeout2;
 else
  VAR_8 = VAR_3->timeout;





 if (!VAR_3->msg_detectable) {
  FUNC_3(VAR_8);
  VAR_7 = 0;
 } else {




  FUNC_2(VAR_5, VAR_8);
  VAR_7 = FUNC_1(VAR_2,
          VAR_6, &VAR_9);
  if (!VAR_9)
   VAR_7 = -VAR_0;
 }

 if (VAR_7)
  FUNC_0("msg_id %d, ret %d, timeout(mSec): %d\n",
         VAR_3->msg_id, VAR_7, VAR_8);

 return VAR_7;
}

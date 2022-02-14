
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ec_response_motion_sense {int dummy; } ;
struct cros_ec_sensors_core_state {TYPE_2__* msg; struct ec_response_motion_sense* resp; TYPE_1__* ec; struct ec_response_motion_sense param; } ;
struct TYPE_4__ {struct ec_response_motion_sense* data; int insize; } ;
struct TYPE_3__ {int max_response; } ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (struct ec_response_motion_sense*,struct ec_response_motion_sense*,int) ;
 int FUNC_2 (scalar_t__,int ) ;

int FUNC_3(struct cros_ec_sensors_core_state *VAR_0,
     u16 VAR_1)
{
 int VAR_2;

 if (VAR_1)
  VAR_0->msg->insize = FUNC_2(VAR_1, VAR_0->ec->max_response);
 else
  VAR_0->msg->insize = VAR_0->ec->max_response;

 FUNC_1(VAR_0->msg->data, &VAR_0->param, sizeof(VAR_0->param));

 VAR_2 = FUNC_0(VAR_0->ec, VAR_0->msg);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_2 &&
     VAR_0->resp != (struct ec_response_motion_sense *)VAR_0->msg->data)
  FUNC_1(VAR_0->resp, VAR_0->msg->data, VAR_2);

 return 0;
}

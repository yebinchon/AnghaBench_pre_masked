
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amd_mp2_dev {scalar_t__ mmio; } ;
struct TYPE_4__ {int status; int response; int length; } ;
struct TYPE_5__ {TYPE_1__ r; } ;
struct amd_i2c_common {int reqcmd; int cmd_success; TYPE_3__* msg; TYPE_2__ eventval; struct amd_mp2_dev* mp2_dev; } ;
typedef enum status_type { ____Placeholder_status_type } status_type ;
typedef enum response_type { ____Placeholder_response_type } response_type ;
struct TYPE_6__ {int buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amd_i2c_common*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (struct amd_mp2_dev*) ;

__attribute__((used)) static void FUNC_4(struct amd_i2c_common *VAR_11)
{
 struct amd_mp2_dev *VAR_12 = VAR_11->mp2_dev;
 enum status_type VAR_13 = VAR_11->eventval.r.status;
 enum response_type VAR_14 = VAR_11->eventval.r.response;
 int VAR_15 = VAR_11->eventval.r.length;

 if (VAR_14 != VAR_2) {
  if (VAR_14 != VAR_1)
   FUNC_1(FUNC_3(VAR_12), "invalid response to i2c command!\n");
  return;
 }

 switch (VAR_11->reqcmd) {
 case 129:
  if (VAR_13 == VAR_7) {
   FUNC_0(VAR_11);
   if (VAR_15 <= 32)
    FUNC_2(VAR_11->msg->buf,
           VAR_12->mmio + VAR_0,
           VAR_15);
  } else if (VAR_13 != VAR_8) {
   FUNC_1(FUNC_3(VAR_12),
    "invalid i2c status after read (%d)!\n", VAR_13);
  }
  break;
 case 128:
  if (VAR_13 == VAR_9)
   FUNC_0(VAR_11);
  else if (VAR_13 != VAR_10)
   FUNC_1(FUNC_3(VAR_12),
    "invalid i2c status after write (%d)!\n", VAR_13);
  break;
 case 130:
  if (VAR_13 == VAR_5)
   VAR_11->cmd_success = 1;
  else if (VAR_13 != VAR_6)
   FUNC_1(FUNC_3(VAR_12),
    "invalid i2c status after bus enable (%d)!\n",
    VAR_13);
  break;
 case 131:
  if (VAR_13 == VAR_3)
   VAR_11->cmd_success = 1;
  else if (VAR_13 != VAR_4)
   FUNC_1(FUNC_3(VAR_12),
    "invalid i2c status after bus disable (%d)!\n",
    VAR_13);
  break;
 default:
  break;
 }
}

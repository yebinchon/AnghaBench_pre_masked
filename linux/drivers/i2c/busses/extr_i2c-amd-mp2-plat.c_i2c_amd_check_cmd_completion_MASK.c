
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timeout; } ;
struct amd_i2c_common {scalar_t__ reqcmd; int cmd_success; TYPE_1__* msg; } ;
struct amd_i2c_dev {TYPE_2__ adap; int cmd_complete; struct amd_i2c_common common; } ;
struct TYPE_3__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd_i2c_common*) ;
 int FUNC_1 (struct amd_i2c_common*) ;
 int FUNC_2 (struct amd_i2c_common*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct amd_i2c_dev *VAR_4)
{
 struct amd_i2c_common *VAR_5 = &VAR_4->common;
 unsigned long VAR_6;

 VAR_6 = FUNC_3(&VAR_4->cmd_complete,
           VAR_4->adap.timeout);

 if ((VAR_5->reqcmd == VAR_2 ||
      VAR_5->reqcmd == VAR_3) &&
     VAR_5->msg->len > 32)
  FUNC_2(VAR_5);

 if (VAR_6 == 0) {
  FUNC_1(VAR_5);
  return -VAR_1;
 }

 FUNC_0(VAR_5);

 if (!VAR_5->cmd_success)
  return -VAR_0;

 return 0;
}

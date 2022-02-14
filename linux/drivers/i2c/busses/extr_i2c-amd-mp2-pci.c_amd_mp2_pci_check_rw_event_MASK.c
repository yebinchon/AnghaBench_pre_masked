
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct amd_mp2_dev {int dummy; } ;
struct TYPE_4__ {int length; int slave_addr; } ;
struct TYPE_5__ {TYPE_1__ r; } ;
struct amd_i2c_common {int cmd_success; TYPE_3__* msg; TYPE_2__ eventval; struct amd_mp2_dev* mp2_dev; } ;
struct TYPE_6__ {int len; int addr; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct amd_mp2_dev*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct amd_i2c_common *VAR_0)
{
 struct amd_mp2_dev *VAR_1 = VAR_0->mp2_dev;
 int VAR_2 = VAR_0->eventval.r.length;
 u32 VAR_3 = VAR_0->eventval.r.slave_addr;
 bool VAR_4 = 0;

 if (FUNC_2(VAR_2 != VAR_0->msg->len)) {
  FUNC_0(FUNC_1(VAR_1),
   "length %d in event doesn't match buffer length %d!\n",
   VAR_2, VAR_0->msg->len);
  VAR_4 = 1;
 }

 if (FUNC_2(VAR_3 != VAR_0->msg->addr)) {
  FUNC_0(FUNC_1(VAR_1),
   "unexpected slave address %x (expected: %x)!\n",
   VAR_3, VAR_0->msg->addr);
  VAR_4 = 1;
 }

 if (!VAR_4)
  VAR_0->cmd_success = 1;
}

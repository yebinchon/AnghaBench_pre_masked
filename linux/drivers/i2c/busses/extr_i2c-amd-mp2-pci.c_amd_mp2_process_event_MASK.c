
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_mp2_dev {int dummy; } ;
struct amd_i2c_common {scalar_t__ reqcmd; int bus_id; struct amd_mp2_dev* mp2_dev; } ;


 int FUNC_0 (struct amd_i2c_common*) ;
 int FUNC_1 (struct amd_i2c_common*) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct amd_mp2_dev*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct amd_i2c_common *VAR_1)
{
 struct amd_mp2_dev *VAR_2 = VAR_1->mp2_dev;

 if (FUNC_4(VAR_1->reqcmd == VAR_0)) {
  FUNC_2(FUNC_3(VAR_2),
    "received msg but no cmd was sent (bus = %d)!\n",
    VAR_1->bus_id);
  return;
 }

 FUNC_0(VAR_1);

 VAR_1->reqcmd = VAR_0;
 FUNC_1(VAR_1);
}

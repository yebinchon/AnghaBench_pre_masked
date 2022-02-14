
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mem_type; } ;
union i2c_cmd_base {TYPE_2__ s; } ;
typedef int u64 ;
struct amd_mp2_dev {scalar_t__ mmio; } ;
struct amd_i2c_common {scalar_t__ dma_addr; TYPE_1__* msg; struct amd_mp2_dev* mp2_dev; } ;
typedef enum i2c_cmd { ____Placeholder_i2c_cmd } i2c_cmd ;
struct TYPE_3__ {int len; int buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amd_i2c_common*) ;
 int FUNC_1 (struct amd_i2c_common*,union i2c_cmd_base) ;
 int FUNC_2 (struct amd_i2c_common*,union i2c_cmd_base*,int) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,scalar_t__) ;

int FUNC_5(struct amd_i2c_common *VAR_4, enum i2c_cmd VAR_5)
{
 struct amd_mp2_dev *VAR_6 = VAR_4->mp2_dev;
 union i2c_cmd_base VAR_7;

 FUNC_2(VAR_4, &VAR_7, VAR_5);
 FUNC_0(VAR_4);

 if (VAR_4->msg->len <= 32) {
  VAR_7.s.mem_type = VAR_2;
  if (VAR_5 == VAR_1)
   FUNC_3(VAR_6->mmio + VAR_0,
        VAR_4->msg->buf,
        VAR_4->msg->len);
 } else {
  VAR_7.s.mem_type = VAR_3;
  FUNC_4((u64)VAR_4->dma_addr,
         VAR_6->mmio + VAR_0);
 }

 return FUNC_1(VAR_4, VAR_7);
}

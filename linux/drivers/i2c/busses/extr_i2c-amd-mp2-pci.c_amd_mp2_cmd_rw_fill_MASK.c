
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int i2c_cmd; int length; int slave_addr; int i2c_speed; int bus_id; } ;
union i2c_cmd_base {TYPE_2__ s; } ;
struct amd_i2c_common {TYPE_1__* msg; int i2c_speed; int bus_id; } ;
typedef enum i2c_cmd { ____Placeholder_i2c_cmd } i2c_cmd ;
struct TYPE_3__ {int len; int addr; } ;



__attribute__((used)) static void FUNC_0(struct amd_i2c_common *VAR_0,
    union i2c_cmd_base *VAR_1,
    enum i2c_cmd VAR_2)
{
 VAR_1->s.i2c_cmd = VAR_2;
 VAR_1->s.bus_id = VAR_0->bus_id;
 VAR_1->s.i2c_speed = VAR_0->i2c_speed;
 VAR_1->s.slave_addr = VAR_0->msg->addr;
 VAR_1->s.length = VAR_0->msg->len;
}

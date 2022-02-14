
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_i2c {int msgbuf_ptr; TYPE_1__* msg; } ;
struct TYPE_2__ {int * buf; } ;


 int FUNC_0 (struct dc_i2c*,int ) ;

__attribute__((used)) static void FUNC_1(struct dc_i2c *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->msg->buf[VAR_0->msgbuf_ptr++]);
}

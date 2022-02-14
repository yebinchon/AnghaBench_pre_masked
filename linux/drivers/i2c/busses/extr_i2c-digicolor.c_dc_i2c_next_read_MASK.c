
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_i2c {scalar_t__ msgbuf_ptr; TYPE_1__* msg; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_i2c*,int ) ;

__attribute__((used)) static void FUNC_1(struct dc_i2c *VAR_2)
{
 bool VAR_3 = (VAR_2->msgbuf_ptr + 1 == VAR_2->msg->len);

 FUNC_0(VAR_2, VAR_3 ? VAR_1 : VAR_0);
}

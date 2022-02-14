
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int addr; } ;
struct img_i2c {int check_timer; TYPE_1__ msg; int int_enable; int last_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct img_i2c*,int ) ;
 int FUNC_1 (struct img_i2c*,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct img_i2c *VAR_6)
{
 FUNC_0(VAR_6, VAR_1);
 if (!VAR_6->last_msg)
  VAR_6->int_enable |= VAR_0;

 FUNC_1(VAR_6, VAR_2, VAR_6->int_enable);
 FUNC_1(VAR_6, VAR_3, VAR_6->msg.addr);
 FUNC_1(VAR_6, VAR_4, VAR_6->msg.len);

 FUNC_2(&VAR_6->check_timer, VAR_5 + FUNC_3(1));
}

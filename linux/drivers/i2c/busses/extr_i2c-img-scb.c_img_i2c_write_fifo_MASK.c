
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ len; int * buf; } ;
struct img_i2c {int int_enable; TYPE_1__ msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct img_i2c*,int ) ;
 int FUNC_1 (struct img_i2c*) ;
 int FUNC_2 (struct img_i2c*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct img_i2c *VAR_4)
{
 while (VAR_4->msg.len) {
  u32 VAR_5;

  FUNC_1(VAR_4);
  VAR_5 = FUNC_0(VAR_4, VAR_2);
  if (VAR_5 & VAR_0)
   break;

  FUNC_2(VAR_4, VAR_3, *VAR_4->msg.buf);
  VAR_4->msg.len--;
  VAR_4->msg.buf++;
 }


 if (!VAR_4->msg.len)
  VAR_4->int_enable &= ~VAR_1;
}

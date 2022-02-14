
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef unsigned int u32 ;
struct rk3x_i2c {scalar_t__ processed; int addr; TYPE_1__* msg; } ;
struct TYPE_2__ {scalar_t__ len; unsigned int* buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rk3x_i2c*,unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rk3x_i2c *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6;
 u8 VAR_7;

 for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
  VAR_6 = 0;
  for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
   if ((VAR_2->processed == VAR_2->msg->len) && (VAR_5 != 0))
    break;

   if (VAR_2->processed == 0 && VAR_5 == 0)
    VAR_7 = (VAR_2->addr & 0x7f) << 1;
   else
    VAR_7 = VAR_2->msg->buf[VAR_2->processed++];

   VAR_6 |= VAR_7 << (VAR_4 * 8);
   VAR_5++;
  }

  FUNC_0(VAR_2, VAR_6, VAR_1 + 4 * VAR_3);

  if (VAR_2->processed == VAR_2->msg->len)
   break;
 }

 FUNC_0(VAR_2, VAR_5, VAR_0);
}

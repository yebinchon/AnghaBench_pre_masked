
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct rk3x_i2c {unsigned int processed; TYPE_1__* msg; } ;
struct TYPE_2__ {unsigned int len; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (struct rk3x_i2c*,int ) ;
 int FUNC_2 (struct rk3x_i2c*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct rk3x_i2c *VAR_5)
{
 unsigned int VAR_6 = VAR_5->msg->len - VAR_5->processed;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_0);





 if (VAR_6 > 32) {
  VAR_6 = 32;
  VAR_7 &= ~VAR_1;
 } else {
  VAR_7 |= VAR_1;
 }


 if (VAR_5->processed != 0) {
  VAR_7 &= ~VAR_2;
  VAR_7 |= FUNC_0(VAR_3);
 }

 FUNC_2(VAR_5, VAR_7, VAR_0);
 FUNC_2(VAR_5, VAR_6, VAR_4);
}

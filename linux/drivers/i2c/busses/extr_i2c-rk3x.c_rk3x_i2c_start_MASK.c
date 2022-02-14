
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rk3x_i2c {TYPE_1__* msg; int mode; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct rk3x_i2c*,int ) ;
 int FUNC_2 (struct rk3x_i2c*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct rk3x_i2c *VAR_8)
{
 u32 VAR_9 = FUNC_1(VAR_8, VAR_1) & VAR_5;

 FUNC_2(VAR_8, VAR_7, VAR_6);


 VAR_9 |= VAR_3 | FUNC_0(VAR_8->mode) | VAR_4;


 if (!(VAR_8->msg->flags & VAR_0))
  VAR_9 |= VAR_2;

 FUNC_2(VAR_8, VAR_9, VAR_1);
}

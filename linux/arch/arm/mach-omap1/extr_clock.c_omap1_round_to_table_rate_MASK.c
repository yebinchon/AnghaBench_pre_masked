
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpu_rate {long rate; int flags; unsigned long xtal; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {unsigned long rate; } ;


 long VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 struct mpu_rate* VAR_3 ;

long FUNC_0(struct clk *VAR_4, unsigned long VAR_5)
{

 struct mpu_rate * VAR_6;
 long VAR_7;
 unsigned long VAR_8;

 VAR_8 = VAR_1->rate;

 VAR_7 = -VAR_0;

 for (VAR_6 = VAR_3; VAR_6->rate; VAR_6++) {
  if (!(VAR_6->flags & VAR_2))
   continue;

  if (VAR_6->xtal != VAR_8)
   continue;

  VAR_7 = VAR_6->rate;


  if (VAR_6->rate <= VAR_5)
   break;
 }

 return VAR_7;
}

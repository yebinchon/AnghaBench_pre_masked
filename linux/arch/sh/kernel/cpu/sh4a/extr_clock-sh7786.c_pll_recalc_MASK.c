
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk {TYPE_1__* parent; } ;
struct TYPE_4__ {int (* mv_mode_pins ) () ;} ;
struct TYPE_3__ {int rate; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_1)
{
 int VAR_2;





 VAR_2 = (VAR_0.mv_mode_pins() & 0xf) < 3 ? 64 : 32;

 return VAR_1->parent->rate * VAR_2;
}

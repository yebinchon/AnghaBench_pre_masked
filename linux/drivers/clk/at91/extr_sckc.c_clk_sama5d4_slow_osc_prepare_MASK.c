
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_sama5d4_slow_osc {int prepared; scalar_t__ startup_usec; TYPE_1__* bits; int sckcr; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int cr_oscsel; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct clk_sama5d4_slow_osc* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2)
{
 struct clk_sama5d4_slow_osc *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->prepared)
  return 0;





 if ((FUNC_0(VAR_3->sckcr) & VAR_3->bits->cr_oscsel)) {
  VAR_3->prepared = 1;
  return 0;
 }

 if (VAR_1 < VAR_0)
  FUNC_2(VAR_3->startup_usec);
 else
  FUNC_3(VAR_3->startup_usec, VAR_3->startup_usec + 1);
 VAR_3->prepared = 1;

 return 0;
}

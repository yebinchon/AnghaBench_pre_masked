
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_clk_quadfs_pll {int ndiv; TYPE_1__* data; scalar_t__ lock; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ lockstatus_present; int powerup_polarity; scalar_t__ bwfilter_present; scalar_t__ reset_present; } ;


 int FUNC_0 (struct st_clk_quadfs_pll*,int ) ;
 int FUNC_1 (struct st_clk_quadfs_pll*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 struct st_clk_quadfs_pll* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_8)
{
 struct st_clk_quadfs_pll *VAR_9 = FUNC_7(VAR_8);
 unsigned long VAR_10 = 0, VAR_11 = VAR_2 + FUNC_3(10);

 if (VAR_9->lock)
  FUNC_4(VAR_9->lock, VAR_10);




 if (VAR_9->data->reset_present)
  FUNC_1(VAR_9, VAR_6, 1);




 if (VAR_9->data->bwfilter_present)
  FUNC_1(VAR_9, VAR_7, VAR_1);


 FUNC_1(VAR_9, VAR_4, VAR_9->ndiv);




 FUNC_1(VAR_9, VAR_5, !VAR_9->data->powerup_polarity);

 if (VAR_9->lock)
  FUNC_5(VAR_9->lock, VAR_10);

 if (VAR_9->data->lockstatus_present)
  while (!FUNC_0(VAR_9, VAR_3)) {
   if (FUNC_6(VAR_2, VAR_11))
    return -VAR_0;
   FUNC_2();
  }

 return 0;
}

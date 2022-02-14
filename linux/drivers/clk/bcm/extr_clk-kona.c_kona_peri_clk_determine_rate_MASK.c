
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; scalar_t__ num_parents; } ;
struct kona_clk {TYPE_1__ init_data; } ;
struct clk_rate_request {long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (unsigned long) ;
 struct clk_hw* FUNC_3 (struct clk_hw*) ;
 struct clk_hw* FUNC_4 (struct clk_hw*,int) ;
 unsigned long FUNC_5 (struct clk_hw*) ;
 void* FUNC_6 (struct clk_hw*,long,unsigned long*) ;
 struct kona_clk* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_1,
     struct clk_rate_request *VAR_2)
{
 struct kona_clk *VAR_3 = FUNC_7(VAR_1);
 struct clk_hw *VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;
 long VAR_9;
 u32 VAR_10;





 FUNC_1(VAR_3->init_data.flags & VAR_0);
 VAR_8 = (u32)VAR_3->init_data.num_parents;
 if (VAR_8 < 2) {
  VAR_9 = FUNC_6(VAR_1, VAR_2->rate,
      &VAR_2->best_parent_rate);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_2->rate = VAR_9;
  return 0;
 }


 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = FUNC_5(VAR_4);
 VAR_7 = FUNC_6(VAR_1, VAR_2->rate, &VAR_5);
 VAR_6 = FUNC_2(VAR_7 - VAR_2->rate);


 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  struct clk_hw *VAR_11 = FUNC_4(VAR_1, VAR_10);
  unsigned long VAR_12;
  unsigned long VAR_13;

  FUNC_0(!VAR_11);
  if (VAR_11 == VAR_4)
   continue;


  VAR_5 = FUNC_5(VAR_11);
  VAR_13 = FUNC_6(VAR_1, VAR_2->rate,
            &VAR_5);
  VAR_12 = FUNC_2(VAR_13 - VAR_2->rate);
  if (VAR_12 < VAR_6) {
   VAR_6 = VAR_12;
   VAR_7 = VAR_13;
   VAR_2->best_parent_hw = VAR_11;
   VAR_2->best_parent_rate = VAR_5;
  }
 }

 VAR_2->rate = VAR_7;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {long rate; long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 long FUNC_0 (long,long,int,int,int *) ;
 struct clk_hw* FUNC_1 (struct clk_hw*,int) ;
 long FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_hw*) ;
 long FUNC_4 (struct clk_hw*,long) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_2,
     struct clk_rate_request *VAR_3,
     int VAR_4, int VAR_5)
{
 struct clk_hw *VAR_6, *VAR_7, *VAR_8;
 long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_16 = VAR_1;
 VAR_14 = 0;
 VAR_7 = ((void*)0);
 VAR_13 = -VAR_0;
 VAR_8 = ((void*)0);




 for (VAR_17 = 0; VAR_17 < 7; VAR_17++) {
  VAR_6 = FUNC_1(VAR_2, VAR_17);
  if (!VAR_6)
   break;





  if (!FUNC_3(VAR_6)) {
   if (!VAR_8)
    VAR_8 = VAR_6;
  }

  VAR_11 = FUNC_2(VAR_6);
  if (VAR_11 < VAR_3->rate)
   continue;


  VAR_9 = FUNC_0(VAR_3->rate, VAR_11, VAR_4, VAR_5, ((void*)0));
  VAR_12 = VAR_11 / VAR_9;
  VAR_15 = VAR_3->rate - VAR_12;
  if (VAR_12 > VAR_3->rate)
   continue;

  if (VAR_15 < VAR_16) {
   VAR_16 = VAR_15;
   VAR_14 = VAR_11;
   VAR_7 = VAR_6;
   VAR_13 = VAR_12;
  }
  if (VAR_15 == 0)
   break;
 }





 if (VAR_16 && VAR_8) {
  for (VAR_17 = (VAR_5 == 4) ? 1 : VAR_4; VAR_17 <= VAR_5; VAR_17 += VAR_4) {
   VAR_10 = VAR_3->rate * VAR_17;
   if (VAR_10 < 0)
    break;
   VAR_11 = FUNC_4(VAR_8, VAR_10);

   VAR_9 = FUNC_0(VAR_3->rate, VAR_11, VAR_4, VAR_5,
            ((void*)0));
   VAR_12 = VAR_11 / VAR_9;
   VAR_15 = VAR_3->rate - VAR_12;
   if (VAR_12 > VAR_3->rate)
    continue;
   if (VAR_15 < VAR_16) {
    VAR_16 = VAR_15;
    VAR_14 = VAR_11;
    VAR_7 = VAR_8;
    VAR_13 = VAR_12;
   }
   if (VAR_15 == 0)
    break;
  }
 }

 if (VAR_13 < 0)
  return VAR_13;

 VAR_3->best_parent_rate = VAR_14;
 VAR_3->best_parent_hw = VAR_7;
 VAR_3->rate = VAR_13;

 return 0;
}

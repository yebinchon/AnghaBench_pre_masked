
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rpm {int enabled; scalar_t__ branch; int rate; struct clk_rpm* peer; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_rpm*,unsigned long) ;
 int FUNC_1 (struct clk_rpm*,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct clk_rpm*,int ,unsigned long*,unsigned long*) ;
 struct clk_rpm* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_1)
{
 struct clk_rpm *VAR_2 = FUNC_6(VAR_1);
 struct clk_rpm *VAR_3 = VAR_2->peer;
 unsigned long VAR_4 = 0, VAR_5 = 0;
 unsigned long VAR_6 = 0, VAR_7 = 0;
 unsigned long VAR_8, VAR_9;
 int VAR_10 = 0;

 FUNC_3(&VAR_0);


 if (!VAR_2->rate)
  goto out;

 FUNC_5(VAR_2, VAR_2->rate, &VAR_4, &VAR_5);


 if (VAR_3->enabled)
  FUNC_5(VAR_3, VAR_3->rate,
    &VAR_6, &VAR_7);

 VAR_8 = FUNC_2(VAR_4, VAR_6);

 if (VAR_2->branch)
  VAR_8 = !!VAR_8;

 VAR_10 = FUNC_0(VAR_2, VAR_8);
 if (VAR_10)
  goto out;

 VAR_9 = FUNC_2(VAR_5, VAR_7);
 if (VAR_2->branch)
  VAR_9 = !!VAR_9;

 VAR_10 = FUNC_1(VAR_2, VAR_9);
 if (VAR_10)

  VAR_10 = FUNC_0(VAR_2, VAR_6);

out:
 if (!VAR_10)
  VAR_2->enabled = 1;

 FUNC_4(&VAR_0);

 return VAR_10;
}

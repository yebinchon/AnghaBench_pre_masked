
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rpm {unsigned long rate; scalar_t__ enabled; struct clk_rpm* peer; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_rpm*,unsigned long) ;
 int FUNC_1 (struct clk_rpm*,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct clk_rpm*,unsigned long,unsigned long*,unsigned long*) ;
 struct clk_rpm* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_1,
       unsigned long VAR_2, unsigned long VAR_3)
{
 struct clk_rpm *VAR_4 = FUNC_6(VAR_1);
 struct clk_rpm *VAR_5 = VAR_4->peer;
 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8 = 0, VAR_9 = 0;
 unsigned long VAR_10 = 0, VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_3(&VAR_0);

 if (!VAR_4->enabled)
  goto out;

 FUNC_5(VAR_4, VAR_2, &VAR_8, &VAR_9);


 if (VAR_5->enabled)
  FUNC_5(VAR_5, VAR_5->rate,
    &VAR_10, &VAR_11);

 VAR_6 = FUNC_2(VAR_8, VAR_10);
 VAR_12 = FUNC_0(VAR_4, VAR_6);
 if (VAR_12)
  goto out;

 VAR_7 = FUNC_2(VAR_9, VAR_11);
 VAR_12 = FUNC_1(VAR_4, VAR_7);
 if (VAR_12)
  goto out;

 VAR_4->rate = VAR_2;

out:
 FUNC_4(&VAR_0);

 return VAR_12;
}

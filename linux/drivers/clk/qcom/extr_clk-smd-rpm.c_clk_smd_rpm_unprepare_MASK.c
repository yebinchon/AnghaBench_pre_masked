
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_smd_rpm {int enabled; scalar_t__ branch; int rate; struct clk_smd_rpm* peer; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_smd_rpm*,unsigned long) ;
 int FUNC_1 (struct clk_smd_rpm*,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct clk_smd_rpm*,int ,unsigned long*,unsigned long*) ;
 struct clk_smd_rpm* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_1)
{
 struct clk_smd_rpm *VAR_2 = FUNC_5(VAR_1);
 struct clk_smd_rpm *VAR_3 = VAR_2->peer;
 unsigned long VAR_4 = 0, VAR_5 = 0;
 unsigned long VAR_6, VAR_7;
 int VAR_8;

 FUNC_2(&VAR_0);

 if (!VAR_2->rate)
  goto out;


 if (VAR_3->enabled)
  FUNC_4(VAR_3, VAR_3->rate, &VAR_4,
    &VAR_5);

 VAR_6 = VAR_2->branch ? !!VAR_4 : VAR_4;
 VAR_8 = FUNC_0(VAR_2, VAR_6);
 if (VAR_8)
  goto out;

 VAR_7 = VAR_2->branch ? !!VAR_5 : VAR_5;
 VAR_8 = FUNC_1(VAR_2, VAR_7);
 if (VAR_8)
  goto out;

 VAR_2->enabled = 0;

out:
 FUNC_3(&VAR_0);
}

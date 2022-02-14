
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clkdiv {int lock; scalar_t__ base; int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct clkdiv*,int,unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct clkdiv*) ;
 int FUNC_3 (int ,scalar_t__,int ,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct clkdiv*,int) ;
 struct clkdiv* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_2, unsigned long VAR_3,
          unsigned long VAR_4)
{
 struct clkdiv *VAR_5 = FUNC_7(VAR_2);
 unsigned int VAR_6 = FUNC_1(VAR_4 / VAR_3);
 unsigned long VAR_7;
 bool VAR_8;
 int VAR_9;

 FUNC_4(&VAR_5->lock, VAR_7);
 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8) {
  VAR_9 = FUNC_6(VAR_5, 0);
  if (VAR_9)
   goto unlock;
 }

 VAR_9 = FUNC_3(VAR_5->regmap, VAR_5->base + VAR_1,
     VAR_0, VAR_6);
 if (VAR_9)
  goto unlock;

 if (VAR_8)
  VAR_9 = FUNC_0(VAR_5, 1,
         VAR_6);

unlock:
 FUNC_5(&VAR_5->lock, VAR_7);

 return VAR_9;
}

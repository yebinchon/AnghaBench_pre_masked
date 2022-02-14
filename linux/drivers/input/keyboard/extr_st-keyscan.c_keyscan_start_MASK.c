
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_keyscan {int debounce_us; int n_cols; int n_rows; scalar_t__ base; int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct st_keyscan *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->clk);
 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_6->debounce_us * (FUNC_1(VAR_6->clk) / 1000000),
        VAR_6->base + VAR_2);

 FUNC_2(((VAR_6->n_cols - 1) << VAR_4) |
        ((VAR_6->n_rows - 1) << VAR_5),
        VAR_6->base + VAR_3);

 FUNC_2(VAR_0, VAR_6->base + VAR_1);

 return 0;
}

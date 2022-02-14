
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_tbl {int dummy; } ;
struct clk_rcg2 {int dummy; } ;


 int FUNC_0 (struct clk_rcg2*,struct freq_tbl const*) ;
 int FUNC_1 (struct clk_rcg2*) ;

__attribute__((used)) static int FUNC_2(struct clk_rcg2 *VAR_0, const struct freq_tbl *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0);
}

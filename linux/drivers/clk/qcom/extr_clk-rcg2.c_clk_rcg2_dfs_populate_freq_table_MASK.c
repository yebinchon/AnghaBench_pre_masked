
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct freq_tbl {int dummy; } ;
struct TYPE_2__ {int hw; } ;
struct clk_rcg2 {TYPE_1__ clkr; struct freq_tbl* freq_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,struct freq_tbl*) ;
 struct freq_tbl* FUNC_1 (int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_rcg2 *VAR_3)
{
 struct freq_tbl *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_1(VAR_2 + 1, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_3->freq_tbl = VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_0(&VAR_3->clkr.hw, VAR_5, VAR_4 + VAR_5);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_tcon_top {int rst; int bus; struct clk_hw_onecell_data* clk_data; } ;
struct device {int of_node; } ;
struct clk_hw_onecell_data {scalar_t__* hws; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct sun8i_tcon_top* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1, struct device *VAR_2,
      void *VAR_3)
{
 struct sun8i_tcon_top *VAR_4 = FUNC_2(VAR_1);
 struct clk_hw_onecell_data *VAR_5 = VAR_4->clk_data;
 int VAR_6;

 FUNC_3(VAR_1->of_node);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_5->hws[VAR_6])
   FUNC_1(VAR_5->hws[VAR_6]);

 FUNC_0(VAR_4->bus);
 FUNC_4(VAR_4->rst);
}

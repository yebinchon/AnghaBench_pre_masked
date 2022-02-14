
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int * clk; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (struct device_node*,int ) ;

__attribute__((used)) static int FUNC_4(struct mtk_hdmi *VAR_1,
    struct device_node *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_1->clk[VAR_3] = FUNC_3(VAR_2,
        VAR_0[VAR_3]);
  if (FUNC_1(VAR_1->clk[VAR_3]))
   return FUNC_2(VAR_1->clk[VAR_3]);
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct mtk_hdmi {int dev; int * clk; } ;


 scalar_t__ FUNC_0 (unsigned long,int) ;
 size_t VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,char*,unsigned long,unsigned long) ;
 int FUNC_4 (int ,char*,unsigned long,int) ;
 int FUNC_5 (int ,char*,unsigned long,unsigned long) ;
 int FUNC_6 (struct mtk_hdmi*) ;
 int FUNC_7 (struct mtk_hdmi*) ;

__attribute__((used)) static int FUNC_8(struct mtk_hdmi *VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;


 VAR_4 = FUNC_2(VAR_1->clk[VAR_0], VAR_2);
 if (VAR_4) {
  FUNC_4(VAR_1->dev, "Failed to set PLL to %u Hz: %d\n", VAR_2,
   VAR_4);
  return VAR_4;
 }

 VAR_3 = FUNC_1(VAR_1->clk[VAR_0]);

 if (FUNC_0(VAR_3, 1000) != FUNC_0(VAR_2, 1000))
  FUNC_5(VAR_1->dev, "Want PLL %u Hz, got %lu Hz\n", VAR_2,
    VAR_3);
 else
  FUNC_3(VAR_1->dev, "Want PLL %u Hz, got %lu Hz\n", VAR_2, VAR_3);

 FUNC_6(VAR_1);
 FUNC_7(VAR_1);
 return 0;
}

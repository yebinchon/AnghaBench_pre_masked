
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_hda {int enabled; int clk_pix; int clk_hddac; } ;
struct drm_bridge {struct sti_hda* driver_private; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sti_hda*,int) ;
 int FUNC_3 (struct sti_hda*,int ) ;
 int FUNC_4 (struct sti_hda*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_bridge *VAR_3)
{
 struct sti_hda *VAR_4 = VAR_3->driver_private;
 u32 VAR_5;

 if (!VAR_4->enabled)
  return;

 FUNC_0("\n");


 VAR_5 = FUNC_3(VAR_4, VAR_2);
 VAR_5 &= ~VAR_0;
 FUNC_4(VAR_4, VAR_5, VAR_2);
 FUNC_4(VAR_4, 0, VAR_1);

 FUNC_2(VAR_4, 0);


 FUNC_1(VAR_4->clk_hddac);
 FUNC_1(VAR_4->clk_pix);

 VAR_4->enabled = 0;
}

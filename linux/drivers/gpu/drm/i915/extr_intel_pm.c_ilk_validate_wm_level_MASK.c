
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_wm_level {int enable; scalar_t__ pri_val; scalar_t__ spr_val; scalar_t__ cur_val; } ;
struct ilk_wm_maximums {scalar_t__ pri; scalar_t__ spr; scalar_t__ cur; } ;


 int FUNC_0 (char*,int,scalar_t__,scalar_t__) ;
 void* FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(int VAR_1,
      const struct ilk_wm_maximums *VAR_2,
      struct intel_wm_level *VAR_3)
{
 bool VAR_4;


 if (!VAR_3->enable)
  return 0;

 VAR_3->enable = VAR_3->pri_val <= VAR_2->pri &&
    VAR_3->spr_val <= VAR_2->spr &&
    VAR_3->cur_val <= VAR_2->cur;

 VAR_4 = VAR_3->enable;






 if (VAR_1 == 0 && !VAR_3->enable) {
  if (VAR_3->pri_val > VAR_2->pri)
   FUNC_0("Primary WM%d too large %u (max %u)\n",
          VAR_1, VAR_3->pri_val, VAR_2->pri);
  if (VAR_3->spr_val > VAR_2->spr)
   FUNC_0("Sprite WM%d too large %u (max %u)\n",
          VAR_1, VAR_3->spr_val, VAR_2->spr);
  if (VAR_3->cur_val > VAR_2->cur)
   FUNC_0("Cursor WM%d too large %u (max %u)\n",
          VAR_1, VAR_3->cur_val, VAR_2->cur);

  VAR_3->pri_val = FUNC_1(VAR_0, VAR_3->pri_val, VAR_2->pri);
  VAR_3->spr_val = FUNC_1(VAR_0, VAR_3->spr_val, VAR_2->spr);
  VAR_3->cur_val = FUNC_1(VAR_0, VAR_3->cur_val, VAR_2->cur);
  VAR_3->enable = 1;
 }

 return VAR_4;
}

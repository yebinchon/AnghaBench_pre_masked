
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_dvo_connector {struct sti_dvo* dvo; } ;
struct sti_dvo {int clk_pix; } ;
struct drm_display_mode {int clock; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 struct sti_dvo_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_3,
     struct drm_display_mode *VAR_4)
{
 int VAR_5 = VAR_4->clock * 1000;
 int VAR_6 = VAR_5 - VAR_0;
 int VAR_7 = VAR_5 + VAR_0;
 int VAR_8;
 struct sti_dvo_connector *VAR_9
  = FUNC_2(VAR_3);
 struct sti_dvo *VAR_10 = VAR_9->dvo;

 VAR_8 = FUNC_1(VAR_10->clk_pix, VAR_5);

 FUNC_0("target rate = %d => available rate = %d\n",
    VAR_5, VAR_8);

 if ((VAR_8 < VAR_6) || (VAR_8 > VAR_7)) {
  FUNC_0("dvo pixclk=%d not supported\n", VAR_5);
  return VAR_1;
 }

 return VAR_2;
}

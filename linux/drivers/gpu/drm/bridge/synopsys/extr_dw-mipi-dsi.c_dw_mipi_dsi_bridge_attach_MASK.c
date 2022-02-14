
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_mipi_dsi {int panel_bridge; } ;
struct drm_bridge {TYPE_1__* encoder; } ;
struct TYPE_2__ {int encoder_type; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dw_mipi_dsi* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (TYPE_1__*,int ,struct drm_bridge*) ;

__attribute__((used)) static int FUNC_3(struct drm_bridge *VAR_2)
{
 struct dw_mipi_dsi *VAR_3 = FUNC_1(VAR_2);

 if (!VAR_2->encoder) {
  FUNC_0("Parent encoder object not found\n");
  return -VAR_1;
 }


 VAR_2->encoder->encoder_type = VAR_0;


 return FUNC_2(VAR_2->encoder, VAR_3->panel_bridge, VAR_2);
}

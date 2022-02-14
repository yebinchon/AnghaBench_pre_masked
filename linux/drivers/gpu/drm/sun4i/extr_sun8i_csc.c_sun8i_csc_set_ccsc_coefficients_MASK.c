
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int regs; } ;
struct sun8i_mixer {TYPE_2__ engine; TYPE_1__* cfg; } ;
typedef enum sun8i_csc_mode { ____Placeholder_sun8i_csc_mode } sun8i_csc_mode ;
typedef enum drm_color_range { ____Placeholder_drm_color_range } drm_color_range ;
typedef enum drm_color_encoding { ____Placeholder_drm_color_encoding } drm_color_encoding ;
struct TYPE_3__ {size_t ccsc; scalar_t__ is_de3; } ;


 int ** VAR_0 ;
 int FUNC_0 (int ,int ,int,int,int) ;
 int FUNC_1 (int ,int,int,int,int) ;

void FUNC_2(struct sun8i_mixer *VAR_1, int VAR_2,
         enum sun8i_csc_mode VAR_3,
         enum drm_color_encoding VAR_4,
         enum drm_color_range VAR_5)
{
 u32 VAR_6;

 if (VAR_1->cfg->is_de3) {
  FUNC_1(VAR_1->engine.regs, VAR_2,
      VAR_3, VAR_4, VAR_5);
  return;
 }

 VAR_6 = VAR_0[VAR_1->cfg->ccsc][VAR_2];

 FUNC_0(VAR_1->engine.regs, VAR_6,
       VAR_3, VAR_4, VAR_5);
}

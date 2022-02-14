
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_tv_mode_constants {int hor_resolution; int hor_total; int hor_syncstart; int ver_resolution; int ver_total; int ver_syncstart; } ;
struct radeon_encoder {int dummy; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct radeon_tv_mode_constants* FUNC_0 (struct radeon_encoder*,int *) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

void FUNC_2(struct drm_encoder *VAR_9,
          uint32_t *VAR_10, uint32_t *VAR_11,
          uint32_t *VAR_12, uint32_t *VAR_13)
{
 struct radeon_encoder *VAR_14 = FUNC_1(VAR_9);
 const struct radeon_tv_mode_constants *VAR_15;
 uint32_t VAR_16;

 VAR_15 = FUNC_0(VAR_14, ((void*)0));
 if (!VAR_15)
  return;

 *VAR_10 = (((VAR_15->hor_resolution / 8) - 1) << VAR_0) |
  (((VAR_15->hor_total / 8) - 1) << VAR_4);

 VAR_16 = *VAR_11;
 VAR_16 &= ~(VAR_3 | VAR_1);
 VAR_16 |= (((VAR_15->hor_syncstart / 8) - 1) << VAR_2) |
  (VAR_15->hor_syncstart & 7);
 *VAR_11 = VAR_16;

 *VAR_12 = ((VAR_15->ver_resolution - 1) << VAR_5) |
  ((VAR_15->ver_total - 1) << VAR_8);

 VAR_16 = *VAR_13;
 VAR_16 &= ~VAR_6;
 VAR_16 |= ((VAR_15->ver_syncstart - 1) << VAR_7);
 *VAR_13 = VAR_16;
}

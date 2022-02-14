
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_mm_scan {unsigned long color; int mode; scalar_t__ hit_end; int hit_start; scalar_t__ range_end; scalar_t__ range_start; scalar_t__ size; scalar_t__ remainder_mask; scalar_t__ alignment; struct drm_mm* mm; } ;
struct drm_mm {int scan_active; } ;
typedef enum drm_mm_insert_mode { ____Placeholder_drm_mm_insert_mode } drm_mm_insert_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void FUNC_2(struct drm_mm_scan *VAR_1,
     struct drm_mm *VAR_2,
     u64 VAR_3,
     u64 VAR_4,
     unsigned long VAR_5,
     u64 VAR_6,
     u64 VAR_7,
     enum drm_mm_insert_mode VAR_8)
{
 FUNC_0(VAR_6 >= VAR_7);
 FUNC_0(!VAR_3 || VAR_3 > VAR_7 - VAR_6);
 FUNC_0(VAR_2->scan_active);

 VAR_1->mm = VAR_2;

 if (VAR_4 <= 1)
  VAR_4 = 0;

 VAR_1->color = VAR_5;
 VAR_1->alignment = VAR_4;
 VAR_1->remainder_mask = FUNC_1(VAR_4) ? VAR_4 - 1 : 0;
 VAR_1->size = VAR_3;
 VAR_1->mode = VAR_8;

 FUNC_0(VAR_7 <= VAR_6);
 VAR_1->range_start = VAR_6;
 VAR_1->range_end = VAR_7;

 VAR_1->hit_start = VAR_0;
 VAR_1->hit_end = 0;
}

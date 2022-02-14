
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int align; int max; int min; } ;
struct TYPE_5__ {int align; int max; int min; } ;
struct drm_ipp_limit {TYPE_3__ v; TYPE_1__ h; } ;
struct TYPE_8__ {int align; int max; int min; } ;
struct TYPE_6__ {int align; int max; int min; } ;
struct drm_exynos_ipp_limit {int type; TYPE_4__ v; TYPE_2__ h; } ;
typedef enum drm_ipp_size_id { ____Placeholder_drm_ipp_size_id } drm_ipp_size_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int** VAR_3 ;
 int FUNC_1 (struct drm_ipp_limit*,int ,int) ;

__attribute__((used)) static void FUNC_2(const struct drm_exynos_ipp_limit *VAR_4,
        unsigned int VAR_5, enum drm_ipp_size_id VAR_6,
        struct drm_ipp_limit *VAR_7)
{
 const struct drm_exynos_ipp_limit *VAR_8 = VAR_4;
 int VAR_9 = 0;

 FUNC_1(VAR_7, 0, sizeof(*VAR_7));
 for (VAR_9 = 0; VAR_3[VAR_6][VAR_9]; VAR_9++)
  for (VAR_8 = VAR_4; VAR_8 - VAR_4 < VAR_5; VAR_8++) {
   if (((VAR_8->type & VAR_1) !=
         VAR_2) ||
       ((VAR_8->type & VAR_0) !=
           VAR_3[VAR_6][VAR_9]))
    continue;
   FUNC_0(&VAR_7->h.min, VAR_8->h.min);
   FUNC_0(&VAR_7->h.max, VAR_8->h.max);
   FUNC_0(&VAR_7->h.align, VAR_8->h.align);
   FUNC_0(&VAR_7->v.min, VAR_8->v.min);
   FUNC_0(&VAR_7->v.max, VAR_8->v.max);
   FUNC_0(&VAR_7->v.align, VAR_8->v.align);
  }
}

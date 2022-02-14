
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int rotation; } ;
struct TYPE_8__ {void* h; void* w; } ;
struct TYPE_9__ {TYPE_3__ rect; } ;
struct TYPE_6__ {void* h; void* w; } ;
struct TYPE_7__ {TYPE_1__ rect; } ;
struct exynos_drm_ipp_task {int dev; TYPE_5__ transform; TYPE_4__ dst; TYPE_2__ src; struct exynos_drm_ipp* ipp; } ;
struct exynos_drm_ipp {int dev; } ;


 int FUNC_0 (int ,char*,struct exynos_drm_ipp_task*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 struct exynos_drm_ipp_task* FUNC_1 (int,int ) ;

__attribute__((used)) static inline struct exynos_drm_ipp_task *
   FUNC_2(struct exynos_drm_ipp *VAR_3)
{
 struct exynos_drm_ipp_task *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->dev = VAR_3->dev;
 VAR_4->ipp = VAR_3;


 VAR_4->src.rect.w = VAR_4->dst.rect.w = VAR_2;
 VAR_4->src.rect.h = VAR_4->dst.rect.h = VAR_2;
 VAR_4->transform.rotation = VAR_0;

 FUNC_0(VAR_4->dev, "Allocated task %pK\n", VAR_4);

 return VAR_4;
}

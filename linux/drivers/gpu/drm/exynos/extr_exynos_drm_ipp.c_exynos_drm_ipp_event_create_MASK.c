
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct exynos_drm_ipp_task {struct drm_pending_exynos_ipp_event* event; TYPE_1__* ipp; } ;
struct TYPE_6__ {int length; int type; } ;
struct TYPE_5__ {TYPE_3__ base; int user_data; } ;
struct drm_pending_exynos_ipp_event {TYPE_2__ event; int base; } ;
struct drm_file {int dummy; } ;
struct TYPE_4__ {int drm_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct drm_file*,int *,TYPE_3__*) ;
 int FUNC_1 (struct drm_pending_exynos_ipp_event*) ;
 struct drm_pending_exynos_ipp_event* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct exynos_drm_ipp_task *VAR_3,
     struct drm_file *VAR_4, uint64_t VAR_5)
{
 struct drm_pending_exynos_ipp_event *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->event.base.type = VAR_0;
 VAR_6->event.base.length = sizeof(VAR_6->event);
 VAR_6->event.user_data = VAR_5;

 VAR_7 = FUNC_0(VAR_3->ipp->drm_dev, VAR_4, &VAR_6->base,
         &VAR_6->event.base);
 if (VAR_7)
  goto free;

 VAR_3->event = VAR_6;
 return 0;
free:
 FUNC_1(VAR_6);
 return VAR_7;
}

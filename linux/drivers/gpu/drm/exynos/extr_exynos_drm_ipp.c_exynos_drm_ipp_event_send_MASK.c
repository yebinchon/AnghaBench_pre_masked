
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec64 {int tv_nsec; int tv_sec; } ;
struct exynos_drm_ipp_task {TYPE_3__* event; TYPE_1__* ipp; } ;
struct TYPE_5__ {int tv_usec; int sequence; int tv_sec; } ;
struct TYPE_6__ {int base; TYPE_2__ event; } ;
struct TYPE_4__ {int drm_dev; int sequence; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct timespec64*) ;

__attribute__((used)) static void FUNC_3(struct exynos_drm_ipp_task *VAR_1)
{
 struct timespec64 VAR_2;

 FUNC_2(&VAR_2);
 VAR_1->event->event.tv_sec = VAR_2.tv_sec;
 VAR_1->event->event.tv_usec = VAR_2.tv_nsec / VAR_0;
 VAR_1->event->event.sequence = FUNC_0(&VAR_1->ipp->sequence);

 FUNC_1(VAR_1->ipp->drm_dev, &VAR_1->event->base);
}

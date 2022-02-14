
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_driver_info {int flags; TYPE_1__* driver; } ;
struct device {int dummy; } ;
struct component_match {int dummy; } ;
struct TYPE_2__ {int driver; } ;


 int FUNC_0 (struct exynos_drm_driver_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct component_match* FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,struct component_match**,int ,struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 struct exynos_drm_driver_info* VAR_4 ;
 struct device* FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static struct component_match *FUNC_6(struct device *VAR_5)
{
 struct component_match *VAR_6 = ((void*)0);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); ++VAR_7) {
  struct exynos_drm_driver_info *VAR_8 = &VAR_4[VAR_7];
  struct device *VAR_9 = ((void*)0), *VAR_10;

  if (!VAR_8->driver || !(VAR_8->flags & VAR_0))
   continue;

  while ((VAR_10 = FUNC_4(VAR_9, &VAR_8->driver->driver))) {
   FUNC_5(VAR_9);

   if (!(VAR_8->flags & VAR_1) ||
       FUNC_3(VAR_10) == 0)
    FUNC_2(VAR_5, &VAR_6,
          VAR_3, VAR_10);
   VAR_9 = VAR_10;
  }
  FUNC_5(VAR_9);
 }

 return VAR_6 ?: FUNC_1(-VAR_2);
}

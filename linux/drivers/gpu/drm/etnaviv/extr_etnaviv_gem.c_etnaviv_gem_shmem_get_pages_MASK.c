
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct etnaviv_gem_object {struct page** pages; TYPE_1__ base; } ;
struct drm_device {int dev; } ;


 scalar_t__ FUNC_0 (struct page**) ;
 int FUNC_1 (struct page**) ;
 int FUNC_2 (int ,char*,int) ;
 struct page** FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct etnaviv_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->base.dev;
 struct page **VAR_2 = FUNC_3(&VAR_0->base);

 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_1->dev, "could not get pages: %ld\n", FUNC_1(VAR_2));
  return FUNC_1(VAR_2);
 }

 VAR_0->pages = VAR_2;

 return 0;
}

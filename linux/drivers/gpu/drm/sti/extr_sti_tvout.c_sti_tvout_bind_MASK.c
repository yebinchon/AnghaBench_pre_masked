
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_tvout {struct drm_device* drm_dev; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 struct sti_tvout* FUNC_0 (struct device*) ;
 int FUNC_1 (struct drm_device*,struct sti_tvout*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct sti_tvout *VAR_3 = FUNC_0(VAR_0);
 struct drm_device *VAR_4 = VAR_2;

 VAR_3->drm_dev = VAR_4;

 FUNC_1(VAR_4, VAR_3);

 return 0;
}

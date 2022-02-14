
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp_funcs {int dummy; } ;
struct exynos_drm_ipp_formats {int dummy; } ;
struct exynos_drm_ipp {unsigned int capabilities; char const* name; unsigned int num_formats; scalar_t__ id; int head; struct exynos_drm_ipp_formats const* formats; struct exynos_drm_ipp_funcs const* funcs; struct device* dev; int done_wq; int todo_list; int lock; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;

int FUNC_6(struct device *VAR_2, struct exynos_drm_ipp *VAR_3,
  const struct exynos_drm_ipp_funcs *VAR_4, unsigned int VAR_5,
  const struct exynos_drm_ipp_formats *VAR_6,
  unsigned int VAR_7, const char *VAR_8)
{
 FUNC_2(!VAR_3);
 FUNC_2(!VAR_4);
 FUNC_2(!VAR_6);
 FUNC_2(!VAR_7);

 FUNC_5(&VAR_3->lock);
 FUNC_1(&VAR_3->todo_list);
 FUNC_3(&VAR_3->done_wq);
 VAR_3->dev = VAR_2;
 VAR_3->funcs = VAR_4;
 VAR_3->capabilities = VAR_5;
 VAR_3->name = VAR_8;
 VAR_3->formats = VAR_6;
 VAR_3->num_formats = VAR_7;


 FUNC_4(&VAR_3->head, &VAR_0);
 VAR_3->id = VAR_1++;

 FUNC_0(VAR_2, "Registered ipp %d\n", VAR_3->id);

 return 0;
}

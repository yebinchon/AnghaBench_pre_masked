
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_bus {int edev_count; int * edev; } ;
struct devfreq_event_data {unsigned long load_count; unsigned long total_count; } ;


 int FUNC_0 (int ,struct devfreq_event_data*) ;

__attribute__((used)) static int FUNC_1(struct exynos_bus *VAR_0,
    struct devfreq_event_data *VAR_1)
{
 struct devfreq_event_data VAR_2;
 unsigned long VAR_3 = 0, VAR_4 = 0;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0->edev_count; VAR_5++) {
  if (!VAR_0->edev[VAR_5])
   continue;

  VAR_6 = FUNC_0(VAR_0->edev[VAR_5], &VAR_2);
  if (VAR_6 < 0)
   return VAR_6;

  if (VAR_5 == 0 || VAR_2.load_count > VAR_3) {
   VAR_3 = VAR_2.load_count;
   VAR_4 = VAR_2.total_count;
  }
 }

 VAR_1->load_count = VAR_3;
 VAR_1->total_count = VAR_4;

 return VAR_6;
}

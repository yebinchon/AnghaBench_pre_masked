
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int clk; } ;
struct exynos_ppmu {int num_events; TYPE_1__ ppmu; struct devfreq_event_dev** edev; struct devfreq_event_desc* desc; int * dev; } ;
struct devfreq_event_dev {int dummy; } ;
struct devfreq_event_desc {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct devfreq_event_dev*) ;
 int FUNC_1 (struct devfreq_event_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 struct devfreq_event_dev* FUNC_5 (int *,struct devfreq_event_desc*) ;
 void* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct platform_device*,struct exynos_ppmu*) ;
 int FUNC_8 (struct platform_device*,struct exynos_ppmu*) ;
 int FUNC_9 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct exynos_ppmu *VAR_3;
 struct devfreq_event_dev **VAR_4;
 struct devfreq_event_desc *VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8;

 VAR_3 = FUNC_6(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->dev = &VAR_2->dev;


 VAR_7 = FUNC_7(VAR_2, VAR_3);
 if (VAR_7 < 0) {
  FUNC_3(&VAR_2->dev,
   "failed to parse devicetree for resource\n");
  return VAR_7;
 }
 VAR_5 = VAR_3->desc;

 VAR_8 = sizeof(struct devfreq_event_dev *) * VAR_3->num_events;
 VAR_3->edev = FUNC_6(&VAR_2->dev, VAR_8, VAR_1);
 if (!VAR_3->edev)
  return -VAR_0;

 VAR_4 = VAR_3->edev;
 FUNC_8(VAR_2, VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_3->num_events; VAR_6++) {
  VAR_4[VAR_6] = FUNC_5(&VAR_2->dev, &VAR_5[VAR_6]);
  if (FUNC_0(VAR_4[VAR_6])) {
   VAR_7 = FUNC_1(VAR_4[VAR_6]);
   FUNC_3(&VAR_2->dev,
    "failed to add devfreq-event device\n");
   return FUNC_1(VAR_4[VAR_6]);
  }

  FUNC_9("exynos-ppmu: new PPMU device registered %s (%s)\n",
   FUNC_4(&VAR_2->dev), VAR_5[VAR_6].name);
 }

 VAR_7 = FUNC_2(VAR_3->ppmu.clk);
 if (VAR_7) {
  FUNC_3(&VAR_2->dev, "failed to prepare ppmu clock\n");
  return VAR_7;
 }

 return 0;
}

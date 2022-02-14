
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct devfreq_event_dev {int dummy; } ;
struct devfreq_event_desc {int dummy; } ;


 int VAR_0 ;
 struct devfreq_event_dev* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct devfreq_event_dev*) ;
 struct devfreq_event_dev* FUNC_2 (struct device*,struct devfreq_event_desc*) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct devfreq_event_dev**) ;
 struct devfreq_event_dev** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct devfreq_event_dev**) ;

struct devfreq_event_dev *FUNC_6(struct device *VAR_3,
      struct devfreq_event_desc *VAR_4)
{
 struct devfreq_event_dev **VAR_5, *VAR_6;

 VAR_5 = FUNC_4(VAR_2, sizeof(*VAR_5),
    VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_1(VAR_6)) {
  FUNC_5(VAR_5);
  return FUNC_0(-VAR_0);
 }

 *VAR_5 = VAR_6;
 FUNC_3(VAR_3, VAR_5);

 return VAR_6;
}

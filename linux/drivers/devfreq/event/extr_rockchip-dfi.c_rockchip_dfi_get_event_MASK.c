
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_dfi {TYPE_1__* ch_usage; } ;
struct devfreq_event_dev {int dummy; } ;
struct devfreq_event_data {int total_count; int load_count; } ;
struct TYPE_2__ {int total; int access; } ;


 struct rockchip_dfi* FUNC_0 (struct devfreq_event_dev*) ;
 int FUNC_1 (struct devfreq_event_dev*) ;

__attribute__((used)) static int FUNC_2(struct devfreq_event_dev *VAR_0,
      struct devfreq_event_data *VAR_1)
{
 struct rockchip_dfi *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 VAR_1->load_count = VAR_2->ch_usage[VAR_3].access;
 VAR_1->total_count = VAR_2->ch_usage[VAR_3].total;

 return 0;
}

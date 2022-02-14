
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct detailed_data_monitor_range {int flags; } ;
struct TYPE_4__ {struct detailed_data_monitor_range range; } ;
struct detailed_non_pixel {scalar_t__ type; TYPE_2__ data; } ;
struct TYPE_3__ {struct detailed_non_pixel other_data; } ;
struct detailed_timing {TYPE_1__ data; } ;
struct detailed_mode_closure {int edid; int connector; int modes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,struct detailed_timing*) ;
 scalar_t__ FUNC_1 (int ,int ,struct detailed_timing*) ;
 int FUNC_2 (int ,int ,struct detailed_timing*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void
FUNC_4(struct detailed_timing *VAR_1, void *VAR_2)
{
 struct detailed_mode_closure *VAR_3 = VAR_2;
 struct detailed_non_pixel *VAR_4 = &VAR_1->data.other_data;
 struct detailed_data_monitor_range *VAR_5 = &VAR_4->data.range;

 if (VAR_4->type != VAR_0)
  return;

 VAR_3->modes += FUNC_1(VAR_3->connector,
        VAR_3->edid,
        VAR_1);

 if (!FUNC_3(VAR_3->edid, 1, 1))
  return;

 switch (VAR_5->flags) {
 case 0x02:
 case 0x00:
  VAR_3->modes += FUNC_2(VAR_3->connector,
         VAR_3->edid,
         VAR_1);
  break;
 case 0x04:
  if (!FUNC_3(VAR_3->edid, 1, 3))
   break;

  VAR_3->modes += FUNC_0(VAR_3->connector,
         VAR_3->edid,
         VAR_1);
  break;
 case 0x01:
 default:
  break;
 }
}

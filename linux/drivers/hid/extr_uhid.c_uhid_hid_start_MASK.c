
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev_flags; } ;
struct TYPE_6__ {TYPE_2__ start; } ;
struct uhid_event {TYPE_3__ u; int type; } ;
struct uhid_device {int qlock; } ;
struct hid_device {TYPE_1__* report_enum; struct uhid_device* driver_data; } ;
struct TYPE_4__ {scalar_t__ numbered; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct uhid_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uhid_device*,struct uhid_event*) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_9)
{
 struct uhid_device *VAR_10 = VAR_9->driver_data;
 struct uhid_event *VAR_11;
 unsigned long VAR_12;

 VAR_11 = FUNC_0(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->type = VAR_8;

 if (VAR_9->report_enum[VAR_2].numbered)
  VAR_11->u.start.dev_flags |= VAR_5;
 if (VAR_9->report_enum[VAR_4].numbered)
  VAR_11->u.start.dev_flags |= VAR_7;
 if (VAR_9->report_enum[VAR_3].numbered)
  VAR_11->u.start.dev_flags |= VAR_6;

 FUNC_1(&VAR_10->qlock, VAR_12);
 FUNC_3(VAR_10, VAR_11);
 FUNC_2(&VAR_10->qlock, VAR_12);

 return 0;
}

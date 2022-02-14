
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int umode_t ;
struct kobject {int dummy; } ;
struct hv_device {TYPE_2__* channel; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_18__ {struct attribute attr; } ;
struct TYPE_17__ {struct attribute attr; } ;
struct TYPE_16__ {struct attribute attr; } ;
struct TYPE_15__ {struct attribute attr; } ;
struct TYPE_14__ {struct attribute attr; } ;
struct TYPE_13__ {struct attribute attr; } ;
struct TYPE_12__ {struct attribute attr; } ;
struct TYPE_10__ {int monitor_allocated; } ;
struct TYPE_11__ {TYPE_1__ offermsg; } ;


 TYPE_9__ VAR_0 ;
 TYPE_8__ VAR_1 ;
 TYPE_7__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 struct hv_device* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_7,
      struct attribute *VAR_8, int VAR_9)
{
 struct device *VAR_10 = FUNC_1(VAR_7);
 const struct hv_device *VAR_11 = FUNC_0(VAR_10);


 if (!VAR_11->channel->offermsg.monitor_allocated &&
     (VAR_8 == &VAR_3.attr ||
      VAR_8 == &VAR_6.attr ||
      VAR_8 == &VAR_2.attr ||
      VAR_8 == &VAR_5.attr ||
      VAR_8 == &VAR_1.attr ||
      VAR_8 == &VAR_4.attr ||
      VAR_8 == &VAR_0.attr))
  return 0;

 return VAR_8->mode;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_20__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_19__ ;
typedef struct TYPE_29__ TYPE_18__ ;
typedef struct TYPE_28__ TYPE_17__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int umode_t ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
struct TYPE_40__ {struct attribute attr; } ;
struct TYPE_39__ {struct attribute attr; } ;
struct TYPE_38__ {struct attribute attr; } ;
struct TYPE_37__ {struct attribute attr; } ;
struct TYPE_36__ {struct attribute attr; } ;
struct TYPE_35__ {struct attribute attr; } ;
struct TYPE_34__ {struct attribute attr; } ;
struct TYPE_33__ {struct attribute attr; } ;
struct TYPE_31__ {struct attribute attr; } ;
struct TYPE_32__ {TYPE_1__ dev_attr; } ;
struct TYPE_30__ {TYPE_6__ dev_attr; } ;
struct TYPE_29__ {TYPE_2__ dev_attr; } ;
struct TYPE_28__ {TYPE_7__ dev_attr; } ;
struct TYPE_27__ {TYPE_3__ dev_attr; } ;
struct TYPE_26__ {TYPE_8__ dev_attr; } ;
struct TYPE_25__ {TYPE_4__ dev_attr; } ;
struct TYPE_24__ {TYPE_9__ dev_attr; } ;
struct TYPE_23__ {TYPE_5__ dev_attr; } ;
struct TYPE_21__ {struct attribute attr; } ;
struct TYPE_22__ {TYPE_10__ dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_20__ VAR_3 ;
 TYPE_19__ VAR_4 ;
 TYPE_18__ VAR_5 ;
 TYPE_17__ VAR_6 ;
 TYPE_16__ VAR_7 ;
 TYPE_15__ VAR_8 ;
 TYPE_14__ VAR_9 ;
 TYPE_13__ VAR_10 ;
 TYPE_12__ VAR_11 ;
 TYPE_11__ VAR_12 ;

__attribute__((used)) static umode_t FUNC_0(struct kobject *VAR_13,
         struct attribute *VAR_14, int VAR_15)
{
 umode_t VAR_16 = VAR_0;
 if (VAR_2)
  return VAR_16;
 if (VAR_14 == &VAR_3.dev_attr.attr ||
     VAR_14 == &VAR_5.dev_attr.attr ||
     VAR_14 == &VAR_7.dev_attr.attr ||
     VAR_14 == &VAR_9.dev_attr.attr ||
     VAR_14 == &VAR_11.dev_attr.attr ||
     VAR_14 == &VAR_4.dev_attr.attr ||
     VAR_14 == &VAR_6.dev_attr.attr ||
     VAR_14 == &VAR_8.dev_attr.attr ||
     VAR_14 == &VAR_10.dev_attr.attr ||
     VAR_14 == &VAR_12.dev_attr.attr)
  VAR_16 |= VAR_1;
 return VAR_16;
}

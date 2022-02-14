
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int umode_t ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct cpumask {int dummy; } ;
struct cacheinfo {int attributes; scalar_t__ physical_line_partition; scalar_t__ size; scalar_t__ number_of_sets; scalar_t__ coherency_line_size; scalar_t__ level; scalar_t__ type; struct cpumask shared_cpu_map; } ;
struct attribute {int mode; } ;
struct TYPE_24__ {struct attribute attr; } ;
struct TYPE_23__ {struct attribute attr; } ;
struct TYPE_22__ {struct attribute attr; } ;
struct TYPE_21__ {struct attribute attr; } ;
struct TYPE_20__ {struct attribute attr; } ;
struct TYPE_19__ {struct attribute attr; } ;
struct TYPE_18__ {struct attribute attr; } ;
struct TYPE_17__ {struct attribute attr; } ;
struct TYPE_16__ {struct attribute attr; } ;
struct TYPE_15__ {struct attribute attr; } ;
struct TYPE_14__ {struct attribute attr; } ;
struct TYPE_13__ {struct attribute attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpumask const*) ;
 TYPE_12__ VAR_3 ;
 TYPE_11__ VAR_4 ;
 TYPE_10__ VAR_5 ;
 TYPE_9__ VAR_6 ;
 TYPE_8__ VAR_7 ;
 TYPE_7__ VAR_8 ;
 TYPE_6__ VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_4__ VAR_11 ;
 TYPE_3__ VAR_12 ;
 TYPE_2__ VAR_13 ;
 TYPE_1__ VAR_14 ;
 struct cacheinfo* FUNC_1 (struct device*) ;
 struct device* FUNC_2 (struct kobject*) ;

__attribute__((used)) static umode_t
FUNC_3(struct kobject *VAR_15,
          struct attribute *VAR_16, int VAR_17)
{
 struct device *VAR_18 = FUNC_2(VAR_15);
 struct cacheinfo *VAR_19 = FUNC_1(VAR_18);
 const struct cpumask *VAR_20 = &VAR_19->shared_cpu_map;
 umode_t VAR_21 = VAR_16->mode;

 if ((VAR_16 == &VAR_5.attr) && (VAR_19->attributes & VAR_1))
  return VAR_21;
 if ((VAR_16 == &VAR_12.attr) && VAR_19->type)
  return VAR_21;
 if ((VAR_16 == &VAR_6.attr) && VAR_19->level)
  return VAR_21;
 if ((VAR_16 == &VAR_10.attr) && !FUNC_0(VAR_20))
  return VAR_21;
 if ((VAR_16 == &VAR_9.attr) && !FUNC_0(VAR_20))
  return VAR_21;
 if ((VAR_16 == &VAR_4.attr) &&
     VAR_19->coherency_line_size)
  return VAR_21;
 if ((VAR_16 == &VAR_13.attr) &&
     VAR_19->size)
  return VAR_21;
 if ((VAR_16 == &VAR_7.attr) &&
     VAR_19->number_of_sets)
  return VAR_21;
 if ((VAR_16 == &VAR_11.attr) && VAR_19->size)
  return VAR_21;
 if ((VAR_16 == &VAR_14.attr) &&
     (VAR_19->attributes & VAR_2))
  return VAR_21;
 if ((VAR_16 == &VAR_3.attr) &&
     (VAR_19->attributes & VAR_0))
  return VAR_21;
 if ((VAR_16 == &VAR_8.attr) &&
     VAR_19->physical_line_partition)
  return VAR_21;

 return 0;
}

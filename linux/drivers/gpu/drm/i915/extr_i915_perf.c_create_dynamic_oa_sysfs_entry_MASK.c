
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__** attrs; int name; } ;
struct TYPE_8__ {char* name; int mode; } ;
struct TYPE_5__ {TYPE_4__ attr; int * store; int show; } ;
struct i915_oa_config {TYPE_3__ sysfs_metric; TYPE_4__** attrs; int uuid; TYPE_1__ sysfs_metric_id; } ;
struct TYPE_6__ {int metrics_kobj; } ;
struct drm_i915_private {TYPE_2__ perf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct drm_i915_private *VAR_2,
      struct i915_oa_config *VAR_3)
{
 FUNC_0(&VAR_3->sysfs_metric_id.attr);
 VAR_3->sysfs_metric_id.attr.name = "id";
 VAR_3->sysfs_metric_id.attr.mode = VAR_0;
 VAR_3->sysfs_metric_id.show = VAR_1;
 VAR_3->sysfs_metric_id.store = ((void*)0);

 VAR_3->attrs[0] = &VAR_3->sysfs_metric_id.attr;
 VAR_3->attrs[1] = ((void*)0);

 VAR_3->sysfs_metric.name = VAR_3->uuid;
 VAR_3->sysfs_metric.attrs = VAR_3->attrs;

 return FUNC_1(VAR_2->perf.metrics_kobj,
      &VAR_3->sysfs_metric);
}

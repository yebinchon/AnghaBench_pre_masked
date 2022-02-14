
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* name; int mode; } ;
struct TYPE_8__ {int show; TYPE_2__ attr; } ;
struct TYPE_6__ {char* name; TYPE_2__** attrs; } ;
struct TYPE_9__ {int id; TYPE_3__ sysfs_metric_id; TYPE_2__** attrs; TYPE_1__ sysfs_metric; void* flex_regs_len; void* flex_regs; void* b_counter_regs_len; void* b_counter_regs; void* mux_regs_len; void* mux_regs; int uuid; } ;
struct TYPE_10__ {TYPE_4__ test_config; } ;
struct drm_i915_private {TYPE_5__ perf; } ;


 void* FUNC_0 (void*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;

void
FUNC_2(struct drm_i915_private *VAR_4)
{
 FUNC_1(VAR_4->perf.test_config.uuid,
  "74fb4902-d3d3-4237-9e90-cbdc68d0a446",
  sizeof(VAR_4->perf.test_config.uuid));
 VAR_4->perf.test_config.id = 1;

 VAR_4->perf.test_config.mux_regs = VAR_2;
 VAR_4->perf.test_config.mux_regs_len = FUNC_0(VAR_2);

 VAR_4->perf.test_config.b_counter_regs = VAR_0;
 VAR_4->perf.test_config.b_counter_regs_len = FUNC_0(VAR_0);

 VAR_4->perf.test_config.flex_regs = VAR_1;
 VAR_4->perf.test_config.flex_regs_len = FUNC_0(VAR_1);

 VAR_4->perf.test_config.sysfs_metric.name = "74fb4902-d3d3-4237-9e90-cbdc68d0a446";
 VAR_4->perf.test_config.sysfs_metric.attrs = VAR_4->perf.test_config.attrs;

 VAR_4->perf.test_config.attrs[0] = &VAR_4->perf.test_config.sysfs_metric_id.attr;

 VAR_4->perf.test_config.sysfs_metric_id.attr.name = "id";
 VAR_4->perf.test_config.sysfs_metric_id.attr.mode = 0444;
 VAR_4->perf.test_config.sysfs_metric_id.show = VAR_3;
}

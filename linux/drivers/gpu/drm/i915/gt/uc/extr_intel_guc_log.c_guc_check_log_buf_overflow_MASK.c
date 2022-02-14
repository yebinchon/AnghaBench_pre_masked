
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_guc_log {TYPE_3__* stats; } ;
typedef enum guc_log_buffer_type { ____Placeholder_guc_log_buffer_type } guc_log_buffer_type ;
struct TYPE_8__ {TYPE_2__* i915; } ;
struct TYPE_7__ {unsigned int sampled_overflow; unsigned int overflow; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {TYPE_1__ drm; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (struct intel_guc_log*) ;

__attribute__((used)) static bool FUNC_3(struct intel_guc_log *VAR_0,
           enum guc_log_buffer_type VAR_1,
           unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_0->stats[VAR_1].sampled_overflow;
 bool VAR_4 = 0;

 if (VAR_2 != VAR_3) {
  VAR_4 = 1;

  VAR_0->stats[VAR_1].overflow = VAR_2;
  VAR_0->stats[VAR_1].sampled_overflow += VAR_2 - VAR_3;

  if (VAR_2 < VAR_3) {

   VAR_0->stats[VAR_1].sampled_overflow += 16;
  }

  FUNC_0(FUNC_1(FUNC_2(VAR_0))->i915->drm.dev,
           "GuC log buffer overflow\n");
 }

 return VAR_4;
}

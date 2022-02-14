
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_rps {scalar_t__ min_freq; scalar_t__ max_freq; scalar_t__ boost_freq; int work; int lock; int num_waiters; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,scalar_t__) ;
 struct drm_i915_private* FUNC_2 (struct device*) ;
 size_t FUNC_3 (char const*,int ,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
           struct device_attribute *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_2(VAR_1);
 struct intel_rps *VAR_6 = &VAR_5->gt_pm.rps;
 bool VAR_7 = 0;
 ssize_t VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_3(VAR_3, 0, &VAR_9);
 if (VAR_8)
  return VAR_8;


 VAR_9 = FUNC_1(VAR_5, VAR_9);
 if (VAR_9 < VAR_6->min_freq || VAR_9 > VAR_6->max_freq)
  return -VAR_0;

 FUNC_4(&VAR_6->lock);
 if (VAR_9 != VAR_6->boost_freq) {
  VAR_6->boost_freq = VAR_9;
  VAR_7 = FUNC_0(&VAR_6->num_waiters);
 }
 FUNC_5(&VAR_6->lock);
 if (VAR_7)
  FUNC_6(&VAR_6->work);

 return VAR_4;
}

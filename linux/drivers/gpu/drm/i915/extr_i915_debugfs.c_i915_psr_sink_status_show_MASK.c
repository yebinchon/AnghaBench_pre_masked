
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct seq_file {struct drm_connector* private; } ;
struct intel_dp {int aux; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector {scalar_t__ status; int dev; } ;
struct TYPE_2__ {int base; } ;


 size_t FUNC_0 (char const* const*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int ,size_t*) ;
 struct intel_dp* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct seq_file*,char*,size_t,char const*) ;
 int FUNC_6 (struct seq_file*,char*) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_4, void *VAR_5)
{
 u8 VAR_6;
 static const char * const VAR_7[] = {
  "inactive",
  "transition to active, capture and display",
  "active, display from RFB",
  "active, capture and display on sink device timings",
  "transition to inactive, capture and display, timing re-sync",
  "reserved",
  "reserved",
  "sink internal error",
 };
 struct drm_connector *VAR_8 = VAR_4->private;
 struct drm_i915_private *VAR_9 = FUNC_7(VAR_8->dev);
 struct intel_dp *VAR_10 =
  FUNC_3(&FUNC_4(VAR_8)->base);
 int VAR_11;

 if (!FUNC_1(VAR_9)) {
  FUNC_6(VAR_4, "PSR Unsupported\n");
  return -VAR_2;
 }

 if (VAR_8->status != VAR_3)
  return -VAR_2;

 VAR_11 = FUNC_2(&VAR_10->aux, VAR_1, &VAR_6);

 if (VAR_11 == 1) {
  const char *VAR_12 = "unknown";

  VAR_6 &= VAR_0;
  if (VAR_6 < FUNC_0(VAR_7))
   VAR_12 = VAR_7[VAR_6];
  FUNC_5(VAR_4, "Sink PSR status: 0x%x [%s]\n", VAR_6, VAR_12);
 } else {
  return VAR_11;
 }

 return 0;
}

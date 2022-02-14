
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct intel_encoder {TYPE_1__* audio_connector; } ;
struct drm_i915_private {int av_mutex; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * eld; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*) ;
 struct intel_encoder* FUNC_2 (struct drm_i915_private*,int,int) ;
 struct drm_i915_private* FUNC_3 (struct device*) ;
 int FUNC_4 (unsigned char*,int const*,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_1, int VAR_2,
     int VAR_3, bool *VAR_4,
     unsigned char *VAR_5, int VAR_6)
{
 struct drm_i915_private *VAR_7 = FUNC_3(VAR_1);
 struct intel_encoder *VAR_8;
 const u8 *VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_6(&VAR_7->av_mutex);

 VAR_8 = FUNC_2(VAR_7, VAR_2, VAR_3);
 if (!VAR_8) {
  FUNC_0("Not valid for port %c\n", FUNC_8(VAR_2));
  FUNC_7(&VAR_7->av_mutex);
  return VAR_10;
 }

 VAR_10 = 0;
 *VAR_4 = VAR_8->audio_connector != ((void*)0);
 if (*VAR_4) {
  VAR_9 = VAR_8->audio_connector->eld;
  VAR_10 = FUNC_1(VAR_9);
  FUNC_4(VAR_5, VAR_9, FUNC_5(VAR_6, VAR_10));
 }

 FUNC_7(&VAR_7->av_mutex);
 return VAR_10;
}

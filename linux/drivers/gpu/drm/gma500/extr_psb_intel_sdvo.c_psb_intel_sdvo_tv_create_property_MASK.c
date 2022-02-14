
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct psb_intel_sdvo_tv_format {int dummy; } ;
struct TYPE_7__ {int base; } ;
struct TYPE_8__ {TYPE_3__ base; } ;
struct psb_intel_sdvo_connector {int format_supported_num; int* tv_format_supported; int tv_format; TYPE_4__ base; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct psb_intel_sdvo {size_t tv_format_index; TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
typedef int format_map ;
typedef int format ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct drm_device*,int ,char*,int) ;
 int FUNC_5 (int*,struct psb_intel_sdvo_tv_format*,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct psb_intel_sdvo*,int ,struct psb_intel_sdvo_tv_format*,int) ;
 int FUNC_8 (struct psb_intel_sdvo*,int) ;
 int * VAR_2 ;

__attribute__((used)) static bool FUNC_9(struct psb_intel_sdvo *VAR_3,
       struct psb_intel_sdvo_connector *VAR_4,
       int VAR_5)
{
 struct drm_device *VAR_6 = VAR_3->base.base.dev;
 struct psb_intel_sdvo_tv_format VAR_7;
 uint32_t VAR_8, VAR_9;

 if (!FUNC_8(VAR_3, VAR_5))
  return 0;

 FUNC_1(sizeof(VAR_7) != 6);
 if (!FUNC_7(VAR_3,
      VAR_1,
      &VAR_7, sizeof(VAR_7)))
  return 0;

 FUNC_5(&VAR_8, &VAR_7, FUNC_6(sizeof(VAR_8), sizeof(VAR_7)));

 if (VAR_8 == 0)
  return 0;

 VAR_4->format_supported_num = 0;
 for (VAR_9 = 0 ; VAR_9 < FUNC_0(VAR_2); VAR_9++)
  if (VAR_8 & (1 << VAR_9))
   VAR_4->tv_format_supported[VAR_4->format_supported_num++] = VAR_9;


 VAR_4->tv_format =
   FUNC_4(VAR_6, VAR_0,
         "mode", VAR_4->format_supported_num);
 if (!VAR_4->tv_format)
  return 0;

 for (VAR_9 = 0; VAR_9 < VAR_4->format_supported_num; VAR_9++)
  FUNC_3(
    VAR_4->tv_format,
    VAR_9, VAR_2[VAR_4->tv_format_supported[VAR_9]]);

 VAR_3->tv_format_index = VAR_4->tv_format_supported[0];
 FUNC_2(&VAR_4->base.base.base,
          VAR_4->tv_format, 0);
 return 1;

}

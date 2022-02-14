
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct intel_sdvo_tv_format {int dummy; } ;
struct TYPE_11__ {int base; TYPE_4__* state; } ;
struct TYPE_12__ {TYPE_5__ base; } ;
struct intel_sdvo_connector {int format_supported_num; int* tv_format_supported; int tv_format; TYPE_6__ base; } ;
struct TYPE_7__ {struct drm_device* dev; } ;
struct TYPE_8__ {TYPE_1__ base; } ;
struct intel_sdvo {TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
typedef int format_map ;
typedef int format ;
struct TYPE_9__ {size_t mode; } ;
struct TYPE_10__ {TYPE_3__ tv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct drm_device*,int ,char*,int) ;
 int FUNC_4 (struct intel_sdvo*,int ,struct intel_sdvo_tv_format*,int) ;
 int FUNC_5 (struct intel_sdvo*,int) ;
 int FUNC_6 (int*,struct intel_sdvo_tv_format*,int ) ;
 int FUNC_7 (int,int) ;
 int * VAR_3 ;

__attribute__((used)) static bool FUNC_8(struct intel_sdvo *VAR_4,
       struct intel_sdvo_connector *VAR_5,
       int VAR_6)
{
 struct drm_device *VAR_7 = VAR_4->base.base.dev;
 struct intel_sdvo_tv_format VAR_8;
 u32 VAR_9, VAR_10;

 if (!FUNC_5(VAR_4, VAR_6))
  return 0;

 FUNC_0(sizeof(VAR_8) != 6);
 if (!FUNC_4(VAR_4,
      VAR_1,
      &VAR_8, sizeof(VAR_8)))
  return 0;

 FUNC_6(&VAR_9, &VAR_8, FUNC_7(sizeof(VAR_9), sizeof(VAR_8)));

 if (VAR_9 == 0)
  return 0;

 VAR_5->format_supported_num = 0;
 for (VAR_10 = 0 ; VAR_10 < VAR_2; VAR_10++)
  if (VAR_9 & (1 << VAR_10))
   VAR_5->tv_format_supported[VAR_5->format_supported_num++] = VAR_10;


 VAR_5->tv_format =
   FUNC_3(VAR_7, VAR_0,
         "mode", VAR_5->format_supported_num);
 if (!VAR_5->tv_format)
  return 0;

 for (VAR_10 = 0; VAR_10 < VAR_5->format_supported_num; VAR_10++)
  FUNC_2(VAR_5->tv_format, VAR_10,
          VAR_3[VAR_5->tv_format_supported[VAR_10]]);

 VAR_5->base.base.state->tv.mode = VAR_5->tv_format_supported[0];
 FUNC_1(&VAR_5->base.base.base,
       VAR_5->tv_format, 0);
 return 1;

}

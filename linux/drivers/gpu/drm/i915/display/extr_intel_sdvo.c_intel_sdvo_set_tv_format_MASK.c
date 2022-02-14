
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_sdvo_tv_format {int dummy; } ;
struct intel_sdvo {int dummy; } ;
struct TYPE_2__ {int mode; } ;
struct drm_connector_state {TYPE_1__ tv; } ;
typedef int format_map ;
typedef int format ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_sdvo*,int ,struct intel_sdvo_tv_format*,int) ;
 int FUNC_2 (struct intel_sdvo_tv_format*,int*,int ) ;
 int FUNC_3 (struct intel_sdvo_tv_format*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static bool FUNC_5(struct intel_sdvo *VAR_1,
         const struct drm_connector_state *VAR_2)
{
 struct intel_sdvo_tv_format VAR_3;
 u32 VAR_4;

 VAR_4 = 1 << VAR_2->tv.mode;
 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 FUNC_2(&VAR_3, &VAR_4, FUNC_4(sizeof(VAR_3), sizeof(VAR_4)));

 FUNC_0(sizeof(VAR_3) != 6);
 return FUNC_1(VAR_1,
        VAR_0,
        &VAR_3, sizeof(VAR_3));
}

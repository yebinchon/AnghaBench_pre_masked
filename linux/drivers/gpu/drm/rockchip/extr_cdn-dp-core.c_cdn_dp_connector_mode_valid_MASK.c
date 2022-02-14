
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct drm_display_mode {int clock; } ;
struct drm_display_info {int bpc; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {struct drm_display_info display_info; } ;
struct cdn_dp_device {int lanes; int dev; int dpcd; int connected; TYPE_1__ connector; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cdn_dp_device* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_4,
           struct drm_display_mode *VAR_5)
{
 struct cdn_dp_device *VAR_6 = FUNC_1(VAR_4);
 struct drm_display_info *VAR_7 = &VAR_6->connector.display_info;
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 u8 VAR_13, VAR_14;


 if (!VAR_6->connected)
  return VAR_1;

 switch (VAR_7->bpc) {
 case 10:
  VAR_14 = 10;
  break;
 case 6:
  VAR_14 = 6;
  break;
 default:
  VAR_14 = 8;
  break;
 }

 VAR_8 = VAR_5->clock * VAR_14 * 3 / 1000;

 VAR_12 = VAR_6->lanes;
 VAR_11 = FUNC_3(VAR_6->dpcd);
 VAR_13 = FUNC_5(VAR_12, VAR_11);

 VAR_12 = FUNC_2(VAR_0);
 VAR_11 = FUNC_4(VAR_6->dpcd);
 VAR_10 = FUNC_5(VAR_12, VAR_11);

 VAR_9 = VAR_10 * VAR_13 / 100;


 VAR_9 = VAR_9 * 8 / 10;

 if (VAR_8 > VAR_9) {
  FUNC_0(VAR_6->dev,
      "requested=%d, actual=%d, clock=%d\n",
      VAR_8, VAR_9, VAR_5->clock);
  return VAR_2;
 }

 return VAR_3;
}

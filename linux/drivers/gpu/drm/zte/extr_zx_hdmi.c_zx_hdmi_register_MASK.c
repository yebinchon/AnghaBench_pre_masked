
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int polled; } ;
struct drm_encoder {int possible_crtcs; } ;
struct zx_hdmi {TYPE_1__ connector; struct drm_encoder encoder; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct drm_encoder*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct drm_device*,TYPE_1__*,int *,int ) ;
 int FUNC_3 (struct drm_encoder*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_8, struct zx_hdmi *VAR_9)
{
 struct drm_encoder *VAR_10 = &VAR_9->encoder;

 VAR_10->possible_crtcs = VAR_3;

 FUNC_4(VAR_8, VAR_10, &VAR_6,
    VAR_2, ((void*)0));
 FUNC_3(VAR_10, &VAR_7);

 VAR_9->connector.polled = VAR_0;

 FUNC_2(VAR_8, &VAR_9->connector, &VAR_4,
      VAR_1);
 FUNC_1(&VAR_9->connector,
     &VAR_5);

 FUNC_0(&VAR_9->connector, VAR_10);

 return 0;
}

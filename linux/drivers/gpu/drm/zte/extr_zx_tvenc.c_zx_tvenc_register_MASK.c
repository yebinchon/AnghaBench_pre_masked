
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int interlace_allowed; } ;
struct drm_encoder {int possible_crtcs; } ;
struct zx_tvenc {struct drm_connector connector; struct drm_encoder encoder; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_4 (struct drm_encoder*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_6, struct zx_tvenc *VAR_7)
{
 struct drm_encoder *VAR_8 = &VAR_7->encoder;
 struct drm_connector *VAR_9 = &VAR_7->connector;





 VAR_8->possible_crtcs = FUNC_0(1);

 FUNC_5(VAR_6, VAR_8, &VAR_4,
    VAR_1, ((void*)0));
 FUNC_4(VAR_8, &VAR_5);

 VAR_9->interlace_allowed = 1;

 FUNC_3(VAR_6, VAR_9, &VAR_2,
      VAR_0);
 FUNC_2(VAR_9, &VAR_3);

 FUNC_1(VAR_9, VAR_8);

 return 0;
}

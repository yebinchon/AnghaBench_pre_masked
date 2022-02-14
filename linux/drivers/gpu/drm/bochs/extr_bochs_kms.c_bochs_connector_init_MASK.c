
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct bochs_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct bochs_device {scalar_t__ edid; struct drm_connector connector; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bochs_device*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct drm_connector*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_3)
{
 struct bochs_device *VAR_4 = VAR_3->dev_private;
 struct drm_connector *VAR_5 = &VAR_4->connector;

 FUNC_4(VAR_3, VAR_5, &VAR_1,
      VAR_0);
 FUNC_3(VAR_5,
     &VAR_2);
 FUNC_5(VAR_5);

 FUNC_1(VAR_4);
 if (VAR_4->edid) {
  FUNC_0("Found EDID data blob.\n");
  FUNC_2(VAR_5);
  FUNC_6(VAR_5, VAR_4->edid);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* funcs; int polled; } ;
struct tc358764 {TYPE_2__ connector; int panel; } ;
struct drm_device {int fb_helper; } ;
struct drm_bridge {int encoder; struct drm_device* dev; } ;
struct TYPE_9__ {int (* reset ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct tc358764* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (struct drm_device*,TYPE_2__*,int *,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct drm_bridge *VAR_4)
{
 struct tc358764 *VAR_5 = FUNC_1(VAR_4);
 struct drm_device *VAR_6 = VAR_4->dev;
 int VAR_7;

 VAR_5->connector.polled = VAR_0;
 VAR_7 = FUNC_4(VAR_6, &VAR_5->connector,
     &VAR_2,
     VAR_1);
 if (VAR_7) {
  FUNC_0("Failed to initialize connector\n");
  return VAR_7;
 }

 FUNC_3(&VAR_5->connector,
     &VAR_3);
 FUNC_2(&VAR_5->connector, VAR_4->encoder);
 FUNC_7(VAR_5->panel, &VAR_5->connector);
 VAR_5->connector.funcs->reset(&VAR_5->connector);
 FUNC_6(VAR_6->fb_helper, &VAR_5->connector);
 FUNC_5(&VAR_5->connector);

 return 0;
}

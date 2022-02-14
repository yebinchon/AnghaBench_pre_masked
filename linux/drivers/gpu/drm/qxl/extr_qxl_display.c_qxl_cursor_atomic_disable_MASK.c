
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_release {int dummy; } ;
struct qxl_device {int dummy; } ;
struct qxl_cursor_cmd {int release_info; int type; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct TYPE_2__ {struct qxl_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qxl_device*,int,int ,struct qxl_release**,int *) ;
 int FUNC_1 (struct qxl_device*,struct qxl_release*,int ,int) ;
 int FUNC_2 (struct qxl_release*) ;
 int FUNC_3 (struct qxl_device*,struct qxl_release*) ;
 scalar_t__ FUNC_4 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_5 (struct qxl_release*,int) ;
 int FUNC_6 (struct qxl_device*,struct qxl_release*,int *) ;

__attribute__((used)) static void FUNC_7(struct drm_plane *VAR_3,
          struct drm_plane_state *VAR_4)
{
 struct qxl_device *VAR_5 = VAR_3->dev->dev_private;
 struct qxl_release *VAR_6;
 struct qxl_cursor_cmd *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5, sizeof(*VAR_7),
      VAR_2,
      &VAR_6, ((void*)0));
 if (VAR_8)
  return;

 VAR_8 = FUNC_5(VAR_6, 1);
 if (VAR_8) {
  FUNC_3(VAR_5, VAR_6);
  return;
 }

 VAR_7 = (struct qxl_cursor_cmd *)FUNC_4(VAR_5, VAR_6);
 VAR_7->type = VAR_1;
 FUNC_6(VAR_5, VAR_6, &VAR_7->release_info);

 FUNC_1(VAR_5, VAR_6, VAR_0, 0);
 FUNC_2(VAR_6);
}

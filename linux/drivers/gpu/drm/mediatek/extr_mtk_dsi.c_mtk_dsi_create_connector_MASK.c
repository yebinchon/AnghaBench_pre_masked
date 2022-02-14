
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dpms; } ;
struct mtk_dsi {TYPE_1__ conn; scalar_t__ panel; int encoder; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (struct drm_device*,TYPE_1__*,int *,int ) ;
 int FUNC_5 (scalar_t__,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_4, struct mtk_dsi *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_4(VAR_4, &VAR_5->conn, &VAR_2,
     VAR_0);
 if (VAR_6) {
  FUNC_0("Failed to connector init to drm\n");
  return VAR_6;
 }

 FUNC_3(&VAR_5->conn, &VAR_3);

 VAR_5->conn.dpms = VAR_1;
 FUNC_1(&VAR_5->conn, &VAR_5->encoder);

 if (VAR_5->panel) {
  VAR_6 = FUNC_5(VAR_5->panel, &VAR_5->conn);
  if (VAR_6) {
   FUNC_0("Failed to attach panel to drm\n");
   goto err_connector_cleanup;
  }
 }

 return 0;

err_connector_cleanup:
 FUNC_2(&VAR_5->conn);
 return VAR_6;
}

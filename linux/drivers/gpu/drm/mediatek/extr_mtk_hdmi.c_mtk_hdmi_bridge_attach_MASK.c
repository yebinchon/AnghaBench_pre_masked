
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int interlace_allowed; int doublescan_allowed; int polled; } ;
struct mtk_hdmi {int dev; int cec_dev; scalar_t__ next_bridge; TYPE_1__ conn; } ;
struct drm_bridge {TYPE_4__* encoder; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_4__*,scalar_t__,struct drm_bridge*) ;
 int FUNC_2 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int *,int ) ;
 struct mtk_hdmi* FUNC_5 (struct drm_bridge*) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct drm_bridge *VAR_5)
{
 struct mtk_hdmi *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_4(VAR_5->encoder->dev, &VAR_6->conn,
     &VAR_2,
     VAR_1);
 if (VAR_7) {
  FUNC_0(VAR_6->dev, "Failed to initialize connector: %d\n", VAR_7);
  return VAR_7;
 }
 FUNC_3(&VAR_6->conn, &VAR_3);

 VAR_6->conn.polled = VAR_0;
 VAR_6->conn.interlace_allowed = 1;
 VAR_6->conn.doublescan_allowed = 0;

 VAR_7 = FUNC_2(&VAR_6->conn,
      VAR_5->encoder);
 if (VAR_7) {
  FUNC_0(VAR_6->dev,
   "Failed to attach connector to encoder: %d\n", VAR_7);
  return VAR_7;
 }

 if (VAR_6->next_bridge) {
  VAR_7 = FUNC_1(VAR_5->encoder, VAR_6->next_bridge,
     VAR_5);
  if (VAR_7) {
   FUNC_0(VAR_6->dev,
    "Failed to attach external bridge: %d\n", VAR_7);
   return VAR_7;
  }
 }

 FUNC_6(VAR_6->cec_dev, VAR_4, VAR_6->dev);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv50_mstc {TYPE_2__* port; } ;
struct drm_connector {TYPE_1__* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_4__ {int mgr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,int ,TYPE_2__*) ;
 struct nv50_mstc* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static enum drm_connector_status
FUNC_6(struct drm_connector *VAR_2, bool VAR_3)
{
 struct nv50_mstc *VAR_4 = FUNC_2(VAR_2);
 enum drm_connector_status VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_2))
  return VAR_1;

 VAR_6 = FUNC_3(VAR_2->dev->dev);
 if (VAR_6 < 0 && VAR_6 != -VAR_0)
  return VAR_1;

 VAR_5 = FUNC_1(VAR_2, VAR_4->port->mgr,
          VAR_4->port);

 FUNC_4(VAR_2->dev->dev);
 FUNC_5(VAR_2->dev->dev);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int polled; int display_info; } ;
struct tfp410 {scalar_t__ hpd_irq; TYPE_1__ connector; int bus_format; int dev; int ddc; int connector_type; } ;
struct drm_bridge {int encoder; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 struct tfp410* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int *,int ,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct drm_bridge *VAR_6)
{
 struct tfp410 *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 if (!VAR_6->encoder) {
  FUNC_0(VAR_7->dev, "Missing encoder\n");
  return -VAR_3;
 }

 if (VAR_7->hpd_irq >= 0)
  VAR_7->connector.polled = VAR_2;
 else
  VAR_7->connector.polled = VAR_0 | VAR_1;

 FUNC_3(&VAR_7->connector,
     &VAR_5);
 VAR_8 = FUNC_4(VAR_6->dev, &VAR_7->connector,
       &VAR_4,
       VAR_7->connector_type,
       VAR_7->ddc);
 if (VAR_8) {
  FUNC_0(VAR_7->dev, "drm_connector_init() failed: %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_5(&VAR_7->connector.display_info,
      &VAR_7->bus_format, 1);

 FUNC_2(&VAR_7->connector,
       VAR_6->encoder);

 return 0;
}

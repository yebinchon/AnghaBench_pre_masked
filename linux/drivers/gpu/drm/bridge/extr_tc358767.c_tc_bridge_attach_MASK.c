
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int encoder; } ;
struct TYPE_9__ {int bus_flags; } ;
struct TYPE_8__ {int polled; TYPE_3__ display_info; } ;
struct tc_data {scalar_t__ hpd_pin; TYPE_1__ bridge; TYPE_2__ connector; scalar_t__ panel; scalar_t__ have_irq; } ;
struct drm_device {int dummy; } ;
struct drm_bridge {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct tc_data* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (struct drm_device*,TYPE_2__*,int *,int ) ;
 int FUNC_4 (TYPE_3__*,int *,int) ;
 int FUNC_5 (scalar_t__,TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_6(struct drm_bridge *VAR_11)
{
 u32 VAR_12 = VAR_8;
 struct tc_data *VAR_13 = FUNC_0(VAR_11);
 struct drm_device *VAR_14 = VAR_11->dev;
 int VAR_15;


 FUNC_2(&VAR_13->connector, &VAR_10);
 VAR_15 = FUNC_3(VAR_14, &VAR_13->connector, &VAR_9,
     VAR_13->panel ? VAR_7 :
     VAR_6);
 if (VAR_15)
  return VAR_15;


 if (VAR_13->hpd_pin >= 0) {
  if (VAR_13->have_irq)
   VAR_13->connector.polled = VAR_5;
  else
   VAR_13->connector.polled = VAR_3 |
            VAR_4;
 }

 if (VAR_13->panel)
  FUNC_5(VAR_13->panel, &VAR_13->connector);

 FUNC_4(&VAR_13->connector.display_info,
      &VAR_12, 1);
 VAR_13->connector.display_info.bus_flags =
  VAR_0 |
  VAR_1 |
  VAR_2;
 FUNC_1(&VAR_13->connector, VAR_13->bridge.encoder);

 return 0;
}

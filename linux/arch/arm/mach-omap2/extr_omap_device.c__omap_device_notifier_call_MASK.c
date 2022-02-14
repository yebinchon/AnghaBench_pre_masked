
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {int od; } ;
struct platform_device {TYPE_2__ dev; TYPE_1__ archdata; } ;
struct omap_device {int _driver_status; int _state; } ;
struct notifier_block {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,char*) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 struct omap_device* FUNC_8 (struct platform_device*) ;
 struct platform_device* FUNC_9 (void*) ;

__attribute__((used)) static int FUNC_10(struct notifier_block *VAR_2,
          unsigned long VAR_3, void *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_9(VAR_4);
 struct omap_device *VAR_6;
 int VAR_7;

 switch (VAR_3) {
 case 129:
  if (VAR_5->archdata.od)
   FUNC_4(VAR_5->archdata.od);
  break;
 case 128:
  VAR_6 = FUNC_8(VAR_5);
  if (VAR_6 && (VAR_6->_state == VAR_1)) {
   FUNC_1(VAR_4, "enabled after unload, idling\n");
   VAR_7 = FUNC_5(VAR_5);
   if (VAR_7)
    FUNC_0(VAR_4, "failed to idle\n");
  }
  break;
 case 130:
  VAR_6 = FUNC_8(VAR_5);
  if (VAR_6 && (VAR_6->_state == VAR_1) &&
      FUNC_7(VAR_4)) {
   VAR_6->_driver_status = 130;
   FUNC_6(VAR_4);
  }
  break;
 case 131:
  if (VAR_5->dev.of_node)
   FUNC_3(VAR_5);
  FUNC_2(VAR_4);

 default:
  VAR_6 = FUNC_8(VAR_5);
  if (VAR_6)
   VAR_6->_driver_status = VAR_3;
 }

 return VAR_0;
}

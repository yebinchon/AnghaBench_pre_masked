
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* encoder; } ;
struct mtk_hdmi {TYPE_2__ bridge; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ dev; } ;


 struct mtk_hdmi* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(bool VAR_0, struct device *VAR_1)
{
 struct mtk_hdmi *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 && VAR_2->bridge.encoder && VAR_2->bridge.encoder->dev)
  FUNC_1(VAR_2->bridge.encoder->dev);
}

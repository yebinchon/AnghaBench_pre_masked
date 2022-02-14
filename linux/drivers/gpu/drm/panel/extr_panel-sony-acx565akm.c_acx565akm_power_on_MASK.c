
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acx565akm_panel {int enabled; int backlight; int cabc_mode; TYPE_1__* spi; int reset_gpio; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct acx565akm_panel*,int ) ;
 int FUNC_2 (struct acx565akm_panel*,int) ;
 int FUNC_3 (struct acx565akm_panel*,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct acx565akm_panel *VAR_0)
{

 FUNC_6(50);

 FUNC_5(VAR_0->reset_gpio, 1);

 if (VAR_0->enabled) {
  FUNC_4(&VAR_0->spi->dev, "panel already enabled\n");
  return 0;
 }
 FUNC_6(120);

 FUNC_3(VAR_0, 0);
 VAR_0->enabled = 1;


 FUNC_7(5000, 10000);
 FUNC_2(VAR_0, 1);
 FUNC_1(VAR_0, VAR_0->cabc_mode);

 return FUNC_0(VAR_0->backlight);
}

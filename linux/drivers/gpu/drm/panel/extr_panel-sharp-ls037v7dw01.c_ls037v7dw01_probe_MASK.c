
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int * funcs; int * dev; } ;
struct ls037v7dw01_panel {TYPE_1__ panel; void* ud_gpio; void* lr_gpio; void* mo_gpio; void* resb_gpio; void* ini_gpio; void* vdd; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*,int ) ;
 void* FUNC_4 (int *,char*,int,int ) ;
 struct ls037v7dw01_panel* FUNC_5 (int *,int,int ) ;
 void* FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_9 (struct platform_device*,struct ls037v7dw01_panel*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct ls037v7dw01_panel *VAR_5;

 VAR_5 = FUNC_5(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_9(VAR_4, VAR_5);
 VAR_5->pdev = VAR_4;

 VAR_5->vdd = FUNC_6(&VAR_4->dev, "envdd");
 if (FUNC_0(VAR_5->vdd)) {
  FUNC_2(&VAR_4->dev, "failed to get regulator\n");
  return FUNC_1(VAR_5->vdd);
 }

 VAR_5->ini_gpio = FUNC_3(&VAR_4->dev, "enable", VAR_2);
 if (FUNC_0(VAR_5->ini_gpio)) {
  FUNC_2(&VAR_4->dev, "failed to get enable gpio\n");
  return FUNC_1(VAR_5->ini_gpio);
 }

 VAR_5->resb_gpio = FUNC_3(&VAR_4->dev, "reset", VAR_2);
 if (FUNC_0(VAR_5->resb_gpio)) {
  FUNC_2(&VAR_4->dev, "failed to get reset gpio\n");
  return FUNC_1(VAR_5->resb_gpio);
 }

 VAR_5->mo_gpio = FUNC_4(&VAR_4->dev, "mode", 0,
         VAR_2);
 if (FUNC_0(VAR_5->mo_gpio)) {
  FUNC_2(&VAR_4->dev, "failed to get mode[0] gpio\n");
  return FUNC_1(VAR_5->mo_gpio);
 }

 VAR_5->lr_gpio = FUNC_4(&VAR_4->dev, "mode", 1,
         VAR_2);
 if (FUNC_0(VAR_5->lr_gpio)) {
  FUNC_2(&VAR_4->dev, "failed to get mode[1] gpio\n");
  return FUNC_1(VAR_5->lr_gpio);
 }

 VAR_5->ud_gpio = FUNC_4(&VAR_4->dev, "mode", 2,
         VAR_2);
 if (FUNC_0(VAR_5->ud_gpio)) {
  FUNC_2(&VAR_4->dev, "failed to get mode[2] gpio\n");
  return FUNC_1(VAR_5->ud_gpio);
 }

 FUNC_8(&VAR_5->panel);
 VAR_5->panel.dev = &VAR_4->dev;
 VAR_5->panel.funcs = &VAR_3;

 return FUNC_7(&VAR_5->panel);
}

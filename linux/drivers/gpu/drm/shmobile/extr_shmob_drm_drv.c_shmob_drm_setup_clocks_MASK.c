
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmob_drm_device {struct clk* clock; int dev; int lddckr; } ;
struct clk {int dummy; } ;
typedef enum shmob_drm_clk_source { ____Placeholder_shmob_drm_clk_source } shmob_drm_clk_source ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct clk*) ;



 int FUNC_2 (int ,char*,char*) ;
 struct clk* FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct shmob_drm_device *VAR_4,
         enum shmob_drm_clk_source VAR_5)
{
 struct clk *VAR_6;
 char *VAR_7;

 switch (VAR_5) {
 case 130:
  VAR_7 = "bus_clk";
  VAR_4->lddckr = VAR_1;
  break;
 case 128:
  VAR_7 = "peripheral_clk";
  VAR_4->lddckr = VAR_3;
  break;
 case 129:
  VAR_7 = ((void*)0);
  VAR_4->lddckr = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_4->dev, VAR_7);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_4->dev, "cannot get dot clock %s\n", VAR_7);
  return FUNC_1(VAR_6);
 }

 VAR_4->clock = VAR_6;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct mixer_context {int irq; TYPE_1__* pdev; int * mixer_regs; void* sclk_hdmi; void* hdmi; void* mixer; int reg_slock; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 int * FUNC_4 (struct device*,int ,int ) ;
 int FUNC_5 (struct device*,int ,int ,int ,char*,struct mixer_context*) ;
 int VAR_4 ;
 struct resource* FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct mixer_context *VAR_5)
{
 struct device *VAR_6 = &VAR_5->pdev->dev;
 struct resource *VAR_7;
 int VAR_8;

 FUNC_8(&VAR_5->reg_slock);

 VAR_5->mixer = FUNC_3(VAR_6, "mixer");
 if (FUNC_0(VAR_5->mixer)) {
  FUNC_2(VAR_6, "failed to get clock 'mixer'\n");
  return -VAR_0;
 }

 VAR_5->hdmi = FUNC_3(VAR_6, "hdmi");
 if (FUNC_0(VAR_5->hdmi)) {
  FUNC_2(VAR_6, "failed to get clock 'hdmi'\n");
  return FUNC_1(VAR_5->hdmi);
 }

 VAR_5->sclk_hdmi = FUNC_3(VAR_6, "sclk_hdmi");
 if (FUNC_0(VAR_5->sclk_hdmi)) {
  FUNC_2(VAR_6, "failed to get clock 'sclk_hdmi'\n");
  return -VAR_0;
 }
 VAR_7 = FUNC_6(VAR_5->pdev, VAR_3, 0);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_6, "get memory resource failed.\n");
  return -VAR_1;
 }

 VAR_5->mixer_regs = FUNC_4(VAR_6, VAR_7->start,
       FUNC_7(VAR_7));
 if (VAR_5->mixer_regs == ((void*)0)) {
  FUNC_2(VAR_6, "register mapping failed.\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_6(VAR_5->pdev, VAR_2, 0);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_6, "get interrupt resource failed.\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_5(VAR_6, VAR_7->start, VAR_4,
      0, "drm_mixer", VAR_5);
 if (VAR_8) {
  FUNC_2(VAR_6, "request interrupt failed.\n");
  return VAR_8;
 }
 VAR_5->irq = VAR_7->start;

 return 0;
}

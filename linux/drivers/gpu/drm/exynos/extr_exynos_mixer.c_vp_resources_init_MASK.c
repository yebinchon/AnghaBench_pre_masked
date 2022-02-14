
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct mixer_context {int * vp_regs; TYPE_1__* pdev; scalar_t__ sclk_hdmi; void* mout_mixer; void* sclk_mixer; int flags; void* vp; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_3 ;
 int FUNC_1 (void*,scalar_t__) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 int * FUNC_4 (struct device*,int ,int ) ;
 struct resource* FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (struct resource*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct mixer_context *VAR_4)
{
 struct device *VAR_5 = &VAR_4->pdev->dev;
 struct resource *VAR_6;

 VAR_4->vp = FUNC_3(VAR_5, "vp");
 if (FUNC_0(VAR_4->vp)) {
  FUNC_2(VAR_5, "failed to get clock 'vp'\n");
  return -VAR_0;
 }

 if (FUNC_7(VAR_3, &VAR_4->flags)) {
  VAR_4->sclk_mixer = FUNC_3(VAR_5, "sclk_mixer");
  if (FUNC_0(VAR_4->sclk_mixer)) {
   FUNC_2(VAR_5, "failed to get clock 'sclk_mixer'\n");
   return -VAR_0;
  }
  VAR_4->mout_mixer = FUNC_3(VAR_5, "mout_mixer");
  if (FUNC_0(VAR_4->mout_mixer)) {
   FUNC_2(VAR_5, "failed to get clock 'mout_mixer'\n");
   return -VAR_0;
  }

  if (VAR_4->sclk_hdmi && VAR_4->mout_mixer)
   FUNC_1(VAR_4->mout_mixer,
           VAR_4->sclk_hdmi);
 }

 VAR_6 = FUNC_5(VAR_4->pdev, VAR_2, 1);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_5, "get memory resource failed.\n");
  return -VAR_1;
 }

 VAR_4->vp_regs = FUNC_4(VAR_5, VAR_6->start,
       FUNC_6(VAR_6));
 if (VAR_4->vp_regs == ((void*)0)) {
  FUNC_2(VAR_5, "register mapping failed.\n");
  return -VAR_1;
 }

 return 0;
}

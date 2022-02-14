
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mtk_ddp {int mutex_mod; int regs; int clk; TYPE_1__* mutex; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct mtk_ddp* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct mtk_ddp*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct mtk_ddp *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < 10; VAR_7++)
  VAR_5->mutex[VAR_7].id = VAR_7;

 VAR_5->clk = FUNC_3(VAR_4, ((void*)0));
 if (FUNC_0(VAR_5->clk)) {
  FUNC_2(VAR_4, "Failed to get clock\n");
  return FUNC_1(VAR_5->clk);
 }

 VAR_6 = FUNC_7(VAR_3, VAR_2, 0);
 VAR_5->regs = FUNC_4(VAR_4, VAR_6);
 if (FUNC_0(VAR_5->regs)) {
  FUNC_2(VAR_4, "Failed to map mutex registers\n");
  return FUNC_1(VAR_5->regs);
 }

 VAR_5->mutex_mod = FUNC_6(VAR_4);

 FUNC_8(VAR_3, VAR_5);

 return 0;
}

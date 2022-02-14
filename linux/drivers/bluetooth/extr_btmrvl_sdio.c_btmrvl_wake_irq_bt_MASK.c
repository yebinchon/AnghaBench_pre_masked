
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct btmrvl_sdio_card {struct btmrvl_plt_wake_cfg* plt_wake_cfg; TYPE_1__* func; } ;
struct btmrvl_plt_wake_cfg {int wake_by_bt; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct device*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct btmrvl_sdio_card *VAR_3 = VAR_2;
 struct device *VAR_4 = &VAR_3->func->dev;
 struct btmrvl_plt_wake_cfg *VAR_5 = VAR_3->plt_wake_cfg;

 FUNC_0(VAR_4, "wake by bt\n");
 VAR_5->wake_by_bt = 1;
 FUNC_1(VAR_1);

 FUNC_3(VAR_4, 0);
 FUNC_2();

 return VAR_0;
}

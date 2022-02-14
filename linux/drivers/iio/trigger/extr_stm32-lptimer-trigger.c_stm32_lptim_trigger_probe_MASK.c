
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stm32_lptim_trigger {int trg; TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct stm32_lptim_trigger* FUNC_1 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_2 (int ,char*,size_t*) ;
 int FUNC_3 (struct platform_device*,struct stm32_lptim_trigger*) ;
 int FUNC_4 (struct stm32_lptim_trigger*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct stm32_lptim_trigger *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 if (FUNC_2(VAR_4->dev.of_node, "reg", &VAR_6))
  return -VAR_0;

 if (VAR_6 >= FUNC_0(VAR_3))
  return -VAR_0;

 VAR_5->dev = &VAR_4->dev;
 VAR_5->trg = VAR_3[VAR_6];

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_4, VAR_5);

 return 0;
}

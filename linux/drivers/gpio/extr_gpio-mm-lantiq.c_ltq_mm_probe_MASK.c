
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_4__ {int ngpio; int set; int direction_output; } ;
struct TYPE_5__ {int save_regs; TYPE_1__ gc; } ;
struct ltq_mm {TYPE_2__ mmchip; int shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ltq_mm* FUNC_0 (TYPE_3__*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_2__*,struct ltq_mm*) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (struct platform_device*,struct ltq_mm*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 struct ltq_mm *VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_0(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_5, VAR_6);

 VAR_6->mmchip.gc.ngpio = 16;
 VAR_6->mmchip.gc.direction_output = VAR_2;
 VAR_6->mmchip.gc.set = VAR_4;
 VAR_6->mmchip.save_regs = VAR_3;


 if (!FUNC_2(VAR_5->dev.of_node, "lantiq,shadow", &VAR_7))
  VAR_6->shadow = VAR_7;

 return FUNC_1(VAR_5->dev.of_node, &VAR_6->mmchip, VAR_6);
}

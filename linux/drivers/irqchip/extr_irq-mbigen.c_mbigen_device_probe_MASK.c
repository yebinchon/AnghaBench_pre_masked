
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mbigen_device {int base; struct platform_device* pdev; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 struct mbigen_device* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct platform_device*,struct mbigen_device*) ;
 int FUNC_6 (struct platform_device*,struct mbigen_device*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct mbigen_device*) ;
 int FUNC_9 (struct resource*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct mbigen_device *VAR_6;
 struct resource *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->pdev = VAR_5;

 VAR_7 = FUNC_7(VAR_5, VAR_4, 0);
 if (!VAR_7)
  return -VAR_1;

 VAR_6->base = FUNC_3(&VAR_5->dev, VAR_7->start,
          FUNC_9(VAR_7));
 if (!VAR_6->base) {
  FUNC_2(&VAR_5->dev, "failed to ioremap %pR\n", VAR_7);
  return -VAR_2;
 }

 if (FUNC_1(VAR_0) && VAR_5->dev.of_node)
  VAR_8 = FUNC_6(VAR_5, VAR_6);
 else if (FUNC_0(&VAR_5->dev))
  VAR_8 = FUNC_5(VAR_5, VAR_6);
 else
  VAR_8 = -VAR_1;

 if (VAR_8) {
  FUNC_2(&VAR_5->dev, "Failed to create mbi-gen irqdomain\n");
  return VAR_8;
 }

 FUNC_8(VAR_5, VAR_6);
 return 0;
}

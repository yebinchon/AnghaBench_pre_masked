
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct resource*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct resource *VAR_6, *VAR_7;

 FUNC_4(VAR_1);

 VAR_7 = FUNC_6(VAR_5, VAR_0, 1);
 VAR_3 = FUNC_2(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_6 = FUNC_6(VAR_5, VAR_0, 0);
 VAR_2 = FUNC_2(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_3(VAR_5);

 FUNC_5(&VAR_4, VAR_5->dev.of_node);
 FUNC_7(&VAR_4);
 return 0;
}

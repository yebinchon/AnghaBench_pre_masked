
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_dev_auxdata {int dummy; } ;


 struct of_dev_auxdata* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct platform_device*) ;
 int FUNC_3 (int ,int *,struct of_dev_auxdata const*,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 const struct of_dev_auxdata *VAR_2 = FUNC_0(&VAR_1->dev);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1->dev.of_node,
      VAR_0, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_1->dev.of_node, ((void*)0), VAR_2, &VAR_1->dev);
 if (VAR_3 < 0)
  FUNC_1(VAR_1->dev.of_node);

 return VAR_3;
}

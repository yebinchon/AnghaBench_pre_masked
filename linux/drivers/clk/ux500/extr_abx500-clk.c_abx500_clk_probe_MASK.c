
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ab8500 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct ab8500* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ab8500*) ;
 scalar_t__ FUNC_4 (struct ab8500*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct ab8500 *VAR_2 = FUNC_2(VAR_1->dev.parent);
 int VAR_3;

 if (FUNC_3(VAR_2) || FUNC_4(VAR_2)) {
  VAR_3 = FUNC_0(&VAR_1->dev);
 } else {
  FUNC_1(&VAR_1->dev, "non supported plf id\n");
  return -VAR_0;
 }

 return VAR_3;
}

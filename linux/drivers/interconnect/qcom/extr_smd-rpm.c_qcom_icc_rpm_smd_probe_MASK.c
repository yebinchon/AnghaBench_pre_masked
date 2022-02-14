
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 VAR_1 = FUNC_1(VAR_2->dev.parent);

 if (!VAR_1) {
  FUNC_0(&VAR_2->dev, "unable to retrieve handle to RPM\n");
  return -VAR_0;
 }

 return 0;
}

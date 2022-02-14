
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; } ;
struct platform_device {int id; TYPE_1__ dev; int name; } ;
struct platform_object {struct platform_device pdev; int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct platform_object* FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

struct platform_device *FUNC_5(const char *VAR_2, int VAR_3)
{
 struct platform_object *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4) + FUNC_4(VAR_2) + 1, VAR_0);
 if (VAR_4) {
  FUNC_3(VAR_4->name, VAR_2);
  VAR_4->pdev.name = VAR_4->name;
  VAR_4->pdev.id = VAR_3;
  FUNC_0(&VAR_4->pdev.dev);
  VAR_4->pdev.dev.release = VAR_1;
  FUNC_2(&VAR_4->pdev);
 }

 return VAR_4 ? &VAR_4->pdev : ((void*)0);
}

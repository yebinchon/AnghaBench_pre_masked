
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wacom {TYPE_2__* hdev; } ;
struct attribute_group {int dummy; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct wacom*,int *,struct attribute_group*) ;

__attribute__((used)) static int FUNC_1(struct wacom *VAR_0,
      struct attribute_group *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_0->hdev->dev.kobj,
            VAR_1);
}

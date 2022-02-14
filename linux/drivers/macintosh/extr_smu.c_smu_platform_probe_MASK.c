
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {struct platform_device* of_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct platform_device* VAR_3)
{
 if (!VAR_1)
  return -VAR_0;
 VAR_1->of_dev = VAR_3;





 FUNC_0(&VAR_2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_2)
{
 VAR_1 = (void *)(VAR_2->dev.platform_data);

 return FUNC_0(&VAR_0, ((void*)0));
}

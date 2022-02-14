
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int * init_name; } ;
struct amba_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct amba_device*,struct resource*) ;
 int FUNC_1 (struct amba_device*,int *) ;

int FUNC_2(struct amba_device *VAR_0, struct resource *VAR_1)
{
 FUNC_1(VAR_0, VAR_0->dev.init_name);
 VAR_0->dev.init_name = ((void*)0);

 return FUNC_0(VAR_0, VAR_1);
}

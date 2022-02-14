
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_device {int monitors_config_bo; TYPE_1__* ram_header; int * monitors_config; } ;
struct TYPE_2__ {scalar_t__ monitors_config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct qxl_device *VAR_0)
{
 int VAR_1;

 VAR_0->monitors_config = ((void*)0);
 VAR_0->ram_header->monitors_config = 0;

 FUNC_0(VAR_0->monitors_config_bo);
 VAR_1 = FUNC_1(VAR_0->monitors_config_bo);
 if (VAR_1)
  return VAR_1;

 FUNC_2(&VAR_0->monitors_config_bo);
 return 0;
}

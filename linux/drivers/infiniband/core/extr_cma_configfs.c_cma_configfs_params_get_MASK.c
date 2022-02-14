
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item {int dummy; } ;
struct cma_device {int dummy; } ;
struct cma_dev_port_group {TYPE_1__* cma_dev_group; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 struct cma_device* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 struct cma_dev_port_group* FUNC_1 (struct config_item*) ;

__attribute__((used)) static int FUNC_2(struct config_item *VAR_2,
       struct cma_device **VAR_3,
       struct cma_dev_port_group **VAR_4)
{
 struct cma_dev_port_group *VAR_5 = FUNC_1(VAR_2);
 struct cma_device *VAR_6;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1,
         VAR_5->cma_dev_group->name);
 if (!VAR_6)
  return -VAR_0;

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_5;

 return 0;
}

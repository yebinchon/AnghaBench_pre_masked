
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct config_item {int dummy; } ;
struct cma_device {int dummy; } ;
struct cma_dev_port_group {int port_num; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (struct config_item*,struct cma_device**,struct cma_dev_port_group**) ;
 int FUNC_1 (struct cma_device*) ;
 int FUNC_2 (struct cma_device*,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_0, char *VAR_1)
{
 struct cma_device *VAR_2;
 struct cma_dev_port_group *VAR_3;
 ssize_t VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_0(VAR_0, &VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_2(VAR_2, VAR_3->port_num);
 FUNC_1(VAR_2);

 return FUNC_3(VAR_1, "%u\n", VAR_5);
}

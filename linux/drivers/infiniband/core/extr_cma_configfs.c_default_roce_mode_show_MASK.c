
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct cma_device {int dummy; } ;
struct cma_dev_port_group {int port_num; } ;
typedef int ssize_t ;


 int FUNC_0 (struct config_item*,struct cma_device**,struct cma_dev_port_group**) ;
 int FUNC_1 (struct cma_device*) ;
 int FUNC_2 (struct cma_device*,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_0,
          char *VAR_1)
{
 struct cma_device *VAR_2;
 struct cma_dev_port_group *VAR_3;
 int VAR_4;
 ssize_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_2, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3->port_num);
 FUNC_1(VAR_2);

 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_4(VAR_1, "%s\n", FUNC_3(VAR_4));
}

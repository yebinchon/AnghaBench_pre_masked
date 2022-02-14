
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
 scalar_t__ FUNC_2 (struct cma_device*,int ,int ) ;
 scalar_t__ FUNC_3 (char const*,int ,int *) ;
 scalar_t__ FUNC_4 (char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_0,
          const char *VAR_1, size_t VAR_2)
{
 struct cma_device *VAR_3;
 struct cma_dev_port_group *VAR_4;
 ssize_t VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_3(VAR_1, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_4->port_num, VAR_6);
 FUNC_1(VAR_3);

 return VAR_5 ? VAR_5 : FUNC_4(VAR_1, VAR_2);
}

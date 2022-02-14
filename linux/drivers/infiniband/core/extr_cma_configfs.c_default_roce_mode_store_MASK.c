
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct cma_device {int dummy; } ;
struct cma_dev_port_group {int port_num; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct config_item*,struct cma_device**,struct cma_dev_port_group**) ;
 int FUNC_1 (struct cma_device*) ;
 scalar_t__ FUNC_2 (struct cma_device*,int ,int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_1,
           const char *VAR_2, size_t VAR_3)
{
 struct cma_device *VAR_4;
 struct cma_dev_port_group *VAR_5;
 int VAR_6 = FUNC_3(VAR_2);
 ssize_t VAR_7;

 if (VAR_6 < 0)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_1, &VAR_4, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_5->port_num, VAR_6);

 FUNC_1(VAR_4);

 return !VAR_7 ? FUNC_4(VAR_2, VAR_3) : VAR_7;
}

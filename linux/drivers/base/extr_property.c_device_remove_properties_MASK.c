
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int secondary; } ;
struct device {int dummy; } ;


 struct fwnode_handle* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct device*,int *) ;

void FUNC_4(struct device *VAR_0)
{
 struct fwnode_handle *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return;

 if (FUNC_2(VAR_1->secondary)) {
  FUNC_1(VAR_1->secondary);
  FUNC_3(VAR_0, ((void*)0));
 }
}

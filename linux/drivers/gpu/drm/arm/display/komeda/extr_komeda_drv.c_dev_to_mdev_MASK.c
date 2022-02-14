
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_drv {struct komeda_dev* mdev; } ;
struct komeda_dev {int dummy; } ;
struct device {int dummy; } ;


 struct komeda_drv* FUNC_0 (struct device*) ;

struct komeda_dev *FUNC_1(struct device *VAR_0)
{
 struct komeda_drv *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? VAR_1->mdev : ((void*)0);
}

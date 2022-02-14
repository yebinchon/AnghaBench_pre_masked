
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_drv {int mdev; int kms; } ;
struct device {int dummy; } ;


 struct komeda_drv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*,struct komeda_drv*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct komeda_drv *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return;

 FUNC_4(VAR_1->kms);
 FUNC_3(VAR_1->mdev);

 FUNC_1(VAR_0, ((void*)0));
 FUNC_2(VAR_0, VAR_1);
}

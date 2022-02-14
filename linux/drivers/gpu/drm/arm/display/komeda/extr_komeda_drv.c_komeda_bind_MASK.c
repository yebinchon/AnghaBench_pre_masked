
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_drv {int mdev; int kms; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct komeda_drv*) ;
 int FUNC_3 (struct device*,struct komeda_drv*) ;
 struct komeda_drv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2)
{
 struct komeda_drv *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_2, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->mdev = FUNC_5(VAR_2);
 if (FUNC_0(VAR_3->mdev)) {
  VAR_4 = FUNC_1(VAR_3->mdev);
  goto free_mdrv;
 }

 VAR_3->kms = FUNC_7(VAR_3->mdev);
 if (FUNC_0(VAR_3->kms)) {
  VAR_4 = FUNC_1(VAR_3->kms);
  goto destroy_mdev;
 }

 FUNC_2(VAR_2, VAR_3);

 return 0;

destroy_mdev:
 FUNC_6(VAR_3->mdev);

free_mdrv:
 FUNC_3(VAR_2, VAR_3);
 return VAR_4;
}

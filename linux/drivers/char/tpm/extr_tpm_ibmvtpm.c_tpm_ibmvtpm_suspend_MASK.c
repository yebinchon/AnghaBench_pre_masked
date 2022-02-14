
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct tpm_chip {struct device dev; } ;
struct ibmvtpm_dev {int dev; int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 void* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3)
{
 struct tpm_chip *VAR_4 = FUNC_1(VAR_3);
 struct ibmvtpm_dev *VAR_5 = FUNC_1(&VAR_4->dev);
 int VAR_6 = 0;

 VAR_6 = FUNC_2(VAR_5->vdev,
   VAR_1, VAR_2, 0, 0);
 if (VAR_6 != VAR_0)
  FUNC_0(VAR_5->dev,
   "tpm_ibmvtpm_suspend failed rc=%d\n", VAR_6);

 return VAR_6;
}

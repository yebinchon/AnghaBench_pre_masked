
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvtpm_dev {int dev; int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ibmvtpm_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->vdev,
   VAR_1, VAR_2, 0, 0);
 if (VAR_4 != VAR_0)
  FUNC_0(VAR_3->dev,
   "ibmvtpm_crq_get_version failed rc=%d\n", VAR_4);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvtpm_dev {int dev; int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ibmvtpm_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->vdev, VAR_1);
 if (VAR_3 != VAR_0)
  FUNC_0(VAR_2->dev,
   "ibmvtpm_crq_send_init_complete failed rc=%d\n", VAR_3);

 return VAR_3;
}

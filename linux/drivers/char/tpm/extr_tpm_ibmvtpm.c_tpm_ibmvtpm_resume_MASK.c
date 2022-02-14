
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct tpm_chip {struct device dev; } ;
struct ibmvtpm_dev {TYPE_1__* vdev; } ;
struct TYPE_2__ {int unit_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 void* FUNC_2 (struct device*) ;
 int FUNC_3 (struct ibmvtpm_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3)
{
 struct tpm_chip *VAR_4 = FUNC_2(VAR_3);
 struct ibmvtpm_dev *VAR_5 = FUNC_2(&VAR_4->dev);
 int VAR_6 = 0;

 do {
  if (VAR_6)
   FUNC_4(100);
  VAR_6 = FUNC_5(VAR_1,
     VAR_5->vdev->unit_address);
 } while (VAR_6 == VAR_2 || VAR_6 == VAR_0 || FUNC_0(VAR_6));

 if (VAR_6) {
  FUNC_1(VAR_3, "Error enabling ibmvtpm rc=%d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_5->vdev);
 if (VAR_6) {
  FUNC_1(VAR_3, "Error vio_enable_interrupts rc=%d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  FUNC_1(VAR_3, "Error send_init rc=%d\n", VAR_6);

 return VAR_6;
}

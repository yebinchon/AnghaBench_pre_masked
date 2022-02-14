
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct adf_accel_dev {int dummy; } ;


 int FUNC_0 (struct adf_accel_dev*) ;
 int FUNC_1 (struct adf_accel_dev*) ;
 int FUNC_2 (struct adf_accel_dev*) ;
 int FUNC_3 (struct adf_accel_dev*) ;
 struct adf_accel_dev* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct adf_accel_dev*) ;
 int FUNC_6 (struct adf_accel_dev*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct adf_accel_dev *VAR_1 = FUNC_4(VAR_0);

 if (!VAR_1) {
  FUNC_7("QAT: Driver removal failed\n");
  return;
 }
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_5(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 FUNC_6(VAR_1);
}

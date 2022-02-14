
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct adf_accel_dev {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct adf_accel_dev*,int ) ;
 struct adf_accel_dev* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct pci_dev *VAR_3)
{
 struct adf_accel_dev *VAR_4 = FUNC_1(VAR_3);

 if (!VAR_4) {
  FUNC_2("QAT: Can't find acceleration device\n");
  return VAR_1;
 }
 if (FUNC_0(VAR_4, VAR_0))
  return VAR_1;

 return VAR_2;
}

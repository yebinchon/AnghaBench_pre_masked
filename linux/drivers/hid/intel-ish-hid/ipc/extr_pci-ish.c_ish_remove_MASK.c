
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ishtp_device {int dummy; } ;


 int FUNC_0 (struct ishtp_device*) ;
 int FUNC_1 (struct ishtp_device*,int) ;
 struct ishtp_device* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct ishtp_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, 0);
 FUNC_0(VAR_1);
}

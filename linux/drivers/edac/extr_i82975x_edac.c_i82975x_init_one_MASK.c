
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int * VAR_1 ;
 int * FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_2,
       const struct pci_device_id *VAR_3)
{
 int VAR_4;

 FUNC_0(0, "\n");

 if (FUNC_3(VAR_2) < 0)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2, VAR_3->driver_data);

 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_2(VAR_2);

 return VAR_4;
}

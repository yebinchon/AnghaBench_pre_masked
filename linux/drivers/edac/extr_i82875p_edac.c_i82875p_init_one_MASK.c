
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int * VAR_2 ;
 int * FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_3,
       const struct pci_device_id *VAR_4)
{
 int VAR_5;

 FUNC_0(0, "\n");
 FUNC_1(VAR_1, "i82875p init one\n");

 if (FUNC_4(VAR_3) < 0)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_3, VAR_4->driver_data);

 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_3(VAR_3);

 return VAR_5;
}

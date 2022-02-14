
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int * VAR_0 ;
 int * FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1,
          const struct pci_device_id *VAR_2)
{
 int VAR_3;

 FUNC_0(0, "MC:\n");


 VAR_3 = FUNC_1(VAR_1, VAR_2->driver_data);

 if (VAR_0 == ((void*)0))
  VAR_0 = FUNC_2(VAR_1);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 unsigned int FUNC_0 (int,struct pci_dev*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_2,
       const struct pci_device_id *VAR_3)
{
 static int VAR_4 = -1;
 unsigned int VAR_5;

 VAR_4++;
 VAR_1[VAR_4] = ((void*)0);

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5) {
  VAR_1[VAR_4--] = ((void*)0);
  goto err_out;
 }

 return 0;
err_out:
 return -VAR_0;
}

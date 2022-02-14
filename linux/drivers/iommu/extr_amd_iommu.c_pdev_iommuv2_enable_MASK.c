
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_3)
{
 bool VAR_4;
 int VAR_5, VAR_6;


 VAR_5 = 32;
 if (FUNC_6(VAR_3, VAR_1))
  VAR_5 = 1;
 VAR_4 = FUNC_6(VAR_3, VAR_0);


 VAR_6 = FUNC_3(VAR_3, 0);
 if (VAR_6)
  goto out_err;


 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6)
  goto out_err;


 VAR_6 = FUNC_4(VAR_3, VAR_5);
 if (VAR_6)
  goto out_err;

 if (VAR_4) {
  VAR_6 = FUNC_7(VAR_3);
  if (VAR_6)
   goto out_err;
 }

 VAR_6 = FUNC_2(VAR_3, VAR_2);
 if (VAR_6)
  goto out_err;

 return 0;

out_err:
 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 return VAR_6;
}

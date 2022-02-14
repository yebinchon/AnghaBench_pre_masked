
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int bus; } ;
struct zpci_ccdf_err {int fid; int pec; } ;
struct pci_dev {int error_state; } ;


 int VAR_0 ;
 struct zpci_dev* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ) ;
 char* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (char*,char*,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct zpci_ccdf_err*,int) ;

__attribute__((used)) static void FUNC_7(struct zpci_ccdf_err *VAR_2)
{
 struct zpci_dev *VAR_3 = FUNC_0(VAR_2->fid);
 struct pci_dev *VAR_4 = ((void*)0);

 FUNC_5("error CCDF:\n");
 FUNC_6(VAR_2, sizeof(*VAR_2));

 if (VAR_3)
  VAR_4 = FUNC_2(VAR_3->bus, VAR_0);

 FUNC_4("%s: Event 0x%x reports an error for PCI function 0x%x\n",
        VAR_4 ? FUNC_3(VAR_4) : "n/a", VAR_2->pec, VAR_2->fid);

 if (!VAR_4)
  return;

 VAR_4->error_state = VAR_1;
 FUNC_1(VAR_4);
}

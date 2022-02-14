
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_report_error_header {int dummy; } ;
struct zpci_dev {int fid; int fh; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct zpci_report_error_header*,int ,int ) ;
 struct zpci_dev* FUNC_1 (struct pci_dev*) ;

int FUNC_2(struct pci_dev *VAR_0,
        struct zpci_report_error_header *VAR_1)
{
 struct zpci_dev *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, VAR_2->fh, VAR_2->fid);
}

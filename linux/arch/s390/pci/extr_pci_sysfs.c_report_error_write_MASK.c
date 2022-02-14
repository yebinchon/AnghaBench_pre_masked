
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_report_error_header {int dummy; } ;
struct zpci_dev {int fid; int fh; } ;
struct pci_dev {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 struct device* FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct zpci_report_error_header*,int ,int ) ;
 struct pci_dev* FUNC_2 (struct device*) ;
 struct zpci_dev* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_1, struct kobject *VAR_2,
      struct bin_attribute *VAR_3, char *VAR_4,
      loff_t VAR_5, size_t VAR_6)
{
 struct zpci_report_error_header *VAR_7 = (void *) VAR_4;
 struct device *VAR_8 = FUNC_0(VAR_2);
 struct pci_dev *VAR_9 = FUNC_2(VAR_8);
 struct zpci_dev *VAR_10 = FUNC_3(VAR_9);
 int VAR_11;

 if (VAR_5 || (VAR_6 < sizeof(*VAR_7)))
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_7, VAR_10->fh, VAR_10->fid);

 return VAR_11 ? VAR_11 : VAR_6;
}

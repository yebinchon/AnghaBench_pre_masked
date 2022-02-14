
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct pci_dev {TYPE_2__ dev; int * resource; } ;
struct TYPE_3__ {char* name; int mode; } ;
struct bin_attribute {size_t size; int * private; TYPE_1__ attr; int mmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (char*,char*,int,char*) ;
 int FUNC_2 (int *,struct bin_attribute*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_4, int VAR_5, char *VAR_6,
          char *VAR_7, struct bin_attribute *VAR_8,
          unsigned long VAR_9)
{
 size_t VAR_10 = FUNC_0(VAR_4, VAR_5);

 FUNC_1(VAR_6, "resource%d%s", VAR_5, VAR_7);
 VAR_8->mmap = VAR_9 ? VAR_3 :
      VAR_2;
 VAR_8->attr.name = VAR_6;
 VAR_8->attr.mode = VAR_0 | VAR_1;
 VAR_8->size = VAR_9 ? VAR_10 << 5 : VAR_10;
 VAR_8->private = &VAR_4->resource[VAR_5];
 return FUNC_2(&VAR_4->dev.kobj, VAR_8);
}

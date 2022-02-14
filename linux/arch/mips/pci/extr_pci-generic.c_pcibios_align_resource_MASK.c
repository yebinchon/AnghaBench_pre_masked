
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int flags; } ;
struct pci_host_bridge {int (* align_resource ) (struct pci_dev*,struct resource const*,int,int,int) ;} ;
struct pci_dev {int bus; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 struct pci_host_bridge* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,struct resource const*,int,int,int) ;

resource_size_t FUNC_2(void *VAR_1, const struct resource *VAR_2,
    resource_size_t VAR_3, resource_size_t VAR_4)
{
 struct pci_dev *VAR_5 = VAR_1;
 resource_size_t VAR_6 = VAR_2->start;
 struct pci_host_bridge *VAR_7;

 if (VAR_2->flags & VAR_0 && VAR_6 & 0x300)
  VAR_6 = (VAR_6 + 0x3ff) & ~0x3ff;

 VAR_6 = (VAR_6 + VAR_4 - 1) & ~(VAR_4 - 1);

 VAR_7 = FUNC_0(VAR_5->bus);

 if (VAR_7->align_resource)
  return VAR_7->align_resource(VAR_5, VAR_2,
    VAR_6, VAR_3, VAR_4);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct resource {int flags; } ;
struct pci_pbm_info {int dummy; } ;
struct pci_dev {int bus; } ;
struct pci_bus_region {int start; int end; } ;
struct pci_bus {struct resource** resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (int ,struct resource*,struct pci_bus_region*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_4,
       struct pci_bus *VAR_5,
       struct pci_pbm_info *VAR_6)
{
 struct pci_bus_region VAR_7;
 struct resource *VAR_8;
 u32 VAR_9, VAR_10;
 u8 VAR_11;

 FUNC_1(VAR_4, VAR_0, &VAR_11);
 FUNC_0(VAR_11, &VAR_9, &VAR_10);
 VAR_8 = VAR_5->resource[0];
 VAR_8->flags = VAR_2;
 VAR_7.start = (VAR_9 << 21);
 VAR_7.end = (VAR_10 << 21) + ((1 << 21) - 1);
 FUNC_2(VAR_4->bus, VAR_8, &VAR_7);

 FUNC_1(VAR_4, VAR_1, &VAR_11);
 FUNC_0(VAR_11, &VAR_9, &VAR_10);
 VAR_8 = VAR_5->resource[1];
 VAR_8->flags = VAR_3;
 VAR_7.start = (VAR_9 << 29);
 VAR_7.end = (VAR_10 << 29) + ((1 << 29) - 1);
 FUNC_2(VAR_4->bus, VAR_8, &VAR_7);
}

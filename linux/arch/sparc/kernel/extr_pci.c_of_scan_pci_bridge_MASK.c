
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct resource {int flags; } ;
struct pci_pbm_info {int dummy; } ;
struct pci_dev {TYPE_1__* bus; struct resource* resource; } ;
struct pci_bus_region {int start; int end; } ;
struct pci_bus {int number; struct device_node* name; struct resource** resource; scalar_t__ bridge_ctl; int primary; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int number; } ;


 int FUNC_0 (int const*,int) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct pci_dev*,struct pci_bus*,struct pci_pbm_info*) ;
 void* FUNC_2 (struct device_node*,char*,int*) ;
 scalar_t__ VAR_3 ;
 struct pci_bus* FUNC_3 (TYPE_1__*,struct pci_dev*,int const) ;
 int FUNC_4 (struct pci_bus*,int const,int const) ;
 int FUNC_5 (struct pci_bus*) ;
 int FUNC_6 (struct pci_dev*,char*,struct device_node*) ;
 int FUNC_7 (struct pci_dev*,char*,unsigned int,...) ;
 int FUNC_8 (struct pci_pbm_info*,struct device_node*,struct pci_bus*) ;
 unsigned int FUNC_9 (int const) ;
 int FUNC_10 (struct pci_bus*) ;
 int FUNC_11 (TYPE_1__*,struct resource*,struct pci_bus_region*) ;
 int FUNC_12 (struct device_node*,char*,int,int) ;
 int FUNC_13 (char const*,char*) ;

__attribute__((used)) static void FUNC_14(struct pci_pbm_info *VAR_4,
          struct device_node *VAR_5,
          struct pci_dev *VAR_6)
{
 struct pci_bus *VAR_7;
 const u32 *VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 struct pci_bus_region VAR_13;
 struct resource *VAR_14;
 unsigned int VAR_15;
 u64 VAR_16;

 if (VAR_3)
  FUNC_7(VAR_6, "of_scan_pci_bridge(%pOF)\n", VAR_5);


 VAR_8 = FUNC_2(VAR_5, "bus-range", &VAR_10);
 if (VAR_8 == ((void*)0) || VAR_10 != 8) {
  FUNC_7(VAR_6, "Can't get bus-range for PCI-PCI bridge %pOF\n",
         VAR_5);
  return;
 }

 if (VAR_3)
  FUNC_7(VAR_6, "    Bridge bus range [%u --> %u]\n",
    VAR_8[0], VAR_8[1]);

 VAR_9 = FUNC_2(VAR_5, "ranges", &VAR_10);
 VAR_12 = 0;
 if (VAR_9 == ((void*)0)) {
  const char *VAR_17 = FUNC_2(VAR_5, "model", ((void*)0));
  if (VAR_17 && !FUNC_13(VAR_17, "SUNW,simba"))
   VAR_12 = 1;
 }

 VAR_7 = FUNC_3(VAR_6->bus, VAR_6, VAR_8[0]);
 if (!VAR_7) {
  FUNC_6(VAR_6, "Failed to create pci bus for %pOF\n",
   VAR_5);
  return;
 }

 VAR_7->primary = VAR_6->bus->number;
 FUNC_4(VAR_7, VAR_8[0], VAR_8[1]);
 VAR_7->bridge_ctl = 0;

 if (VAR_3)
  FUNC_7(VAR_6, "    Bridge ranges[%p] simba[%d]\n",
    VAR_9, VAR_12);



 VAR_14 = &VAR_6->resource[VAR_1];
 for (VAR_11 = 0; VAR_11 < VAR_2 - VAR_1; ++VAR_11) {
  VAR_14->flags = 0;
  VAR_7->resource[VAR_11] = VAR_14;
  ++VAR_14;
 }
 if (VAR_12) {
  FUNC_1(VAR_6, VAR_7, VAR_4);
  goto after_ranges;
 } else if (VAR_9 == ((void*)0)) {
  FUNC_10(VAR_7);
  goto after_ranges;
 }
 VAR_11 = 1;
 for (; VAR_10 >= 32; VAR_10 -= 32, VAR_9 += 8) {
  u64 VAR_18;

  if (VAR_3)
   FUNC_7(VAR_6, "    RAW Range[%08x:%08x:%08x:%08x:%08x:%08x:"
     "%08x:%08x]\n",
     VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3],
     VAR_9[4], VAR_9[5], VAR_9[6], VAR_9[7]);

  VAR_15 = FUNC_9(VAR_9[0]);
  VAR_16 = FUNC_0(VAR_9, 6);
  if (VAR_15 == 0 || VAR_16 == 0)
   continue;
  if (VAR_16 >> 32 == 0xffffffff)
   continue;

  if (VAR_15 & VAR_0) {
   VAR_14 = VAR_7->resource[0];
   if (VAR_14->flags) {
    FUNC_6(VAR_6, "ignoring extra I/O range"
     " for bridge %pOF\n", VAR_5);
    continue;
   }
  } else {
   if (VAR_11 >= VAR_2 - VAR_1) {
    FUNC_6(VAR_6, "too many memory ranges"
     " for bridge %pOF\n", VAR_5);
    continue;
   }
   VAR_14 = VAR_7->resource[VAR_11];
   ++VAR_11;
  }

  VAR_14->flags = VAR_15;
  VAR_13.start = VAR_18 = FUNC_0(VAR_9, 1);
  VAR_13.end = VAR_13.start + VAR_16 - 1;

  if (VAR_3)
   FUNC_7(VAR_6, "      Using flags[%08x] start[%016llx] size[%016llx]\n",
     VAR_15, VAR_18, VAR_16);

  FUNC_11(VAR_6->bus, VAR_14, &VAR_13);
 }
after_ranges:
 FUNC_12(VAR_7->name, "PCI Bus %04x:%02x", FUNC_5(VAR_7),
  VAR_7->number);
 if (VAR_3)
  FUNC_7(VAR_6, "    bus name: %s\n", VAR_7->name);

 FUNC_8(VAR_4, VAR_5, VAR_7);
}

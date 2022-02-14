
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvdimm {int dummy; } ;
struct nfit_spa {int nd_region; struct acpi_nfit_system_address* spa; } ;
struct nfit_mem {TYPE_1__* bdw; } ;
struct nd_region_desc {int num_mappings; struct nd_mapping_desc* mapping; int num_lanes; } ;
struct nd_mapping_desc {int start; int size; struct nvdimm* nvdimm; } ;
struct nd_blk_region_desc {int do_io; int enable; } ;
struct acpi_nfit_system_address {int range_index; } ;
struct acpi_nfit_memory_map {int region_size; int address; int device_handle; } ;
struct acpi_nfit_desc {int nvdimm_bus; int blk_do_io; int dev; } ;
struct TYPE_2__ {int windows; int start_address; int capacity; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 struct nvdimm* FUNC_0 (struct acpi_nfit_desc*,int ) ;
 int FUNC_1 (struct acpi_nfit_desc*,struct nd_region_desc*,struct acpi_nfit_system_address*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (struct acpi_nfit_system_address*) ;
 int FUNC_5 (int ,struct nd_region_desc*) ;
 int FUNC_6 (struct nvdimm*) ;
 struct nfit_mem* FUNC_7 (struct nvdimm*) ;
 struct nd_blk_region_desc* FUNC_8 (struct nd_region_desc*) ;

__attribute__((used)) static int FUNC_9(struct acpi_nfit_desc *VAR_3,
  struct nd_mapping_desc *VAR_4, struct nd_region_desc *VAR_5,
  struct acpi_nfit_memory_map *VAR_6,
  struct nfit_spa *VAR_7)
{
 struct nvdimm *VAR_8 = FUNC_0(VAR_3,
   VAR_6->device_handle);
 struct acpi_nfit_system_address *VAR_9 = VAR_7->spa;
 struct nd_blk_region_desc *VAR_10;
 struct nfit_mem *VAR_11;
 int VAR_12;

 if (!VAR_8) {
  FUNC_3(VAR_3->dev, "spa%d dimm: %#x not found\n",
    VAR_9->range_index, VAR_6->device_handle);
  return -VAR_0;
 }

 VAR_4->nvdimm = VAR_8;
 switch (FUNC_4(VAR_9)) {
 case 129:
 case 128:
  VAR_4->start = VAR_6->address;
  VAR_4->size = VAR_6->region_size;
  break;
 case 130:
  VAR_11 = FUNC_7(VAR_8);
  if (!VAR_11 || !VAR_11->bdw) {
   FUNC_2(VAR_3->dev, "spa%d %s missing bdw\n",
     VAR_9->range_index, FUNC_6(VAR_8));
   break;
  }

  VAR_4->size = VAR_11->bdw->capacity;
  VAR_4->start = VAR_11->bdw->start_address;
  VAR_5->num_lanes = VAR_11->bdw->windows;
  VAR_5->mapping = VAR_4;
  VAR_5->num_mappings = 1;
  VAR_10 = FUNC_8(VAR_5);
  VAR_10->enable = VAR_2;
  VAR_10->do_io = VAR_3->blk_do_io;
  VAR_12 = FUNC_1(VAR_3, VAR_5, VAR_9);
  if (VAR_12)
   return VAR_12;
  VAR_7->nd_region = FUNC_5(VAR_3->nvdimm_bus,
    VAR_5);
  if (!VAR_7->nd_region)
   return -VAR_1;
  break;
 }

 return 0;
}

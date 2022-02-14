
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmar_drhd_unit {int include_all; scalar_t__ devices_cnt; int * devices; int segment; int reg_base_addr; void* hdr; } ;
struct acpi_dmar_header {scalar_t__ length; } ;
struct TYPE_2__ {int length; } ;
struct acpi_dmar_hardware_unit {int flags; TYPE_1__ header; int segment; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dmar_drhd_unit*) ;
 int * FUNC_1 (void*,void*,scalar_t__*) ;
 struct dmar_drhd_unit* FUNC_2 (struct acpi_dmar_hardware_unit*) ;
 int FUNC_3 (int **,scalar_t__*) ;
 int FUNC_4 (struct dmar_drhd_unit*) ;
 int FUNC_5 (struct dmar_drhd_unit*) ;
 struct dmar_drhd_unit* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (void*,struct acpi_dmar_header*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct acpi_dmar_header *VAR_2, void *VAR_3)
{
 struct acpi_dmar_hardware_unit *VAR_4;
 struct dmar_drhd_unit *VAR_5;
 int VAR_6;

 VAR_4 = (struct acpi_dmar_hardware_unit *)VAR_2;
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_6(sizeof(*VAR_5) + VAR_2->length, VAR_1);
 if (!VAR_5)
  return -VAR_0;





 VAR_5->hdr = (void *)(VAR_5 + 1);
 FUNC_7(VAR_5->hdr, VAR_2, VAR_2->length);
 VAR_5->reg_base_addr = VAR_4->address;
 VAR_5->segment = VAR_4->segment;
 VAR_5->include_all = VAR_4->flags & 0x1;
 VAR_5->devices = FUNC_1((void *)(VAR_4 + 1),
           ((void *)VAR_4) + VAR_4->header.length,
           &VAR_5->devices_cnt);
 if (VAR_5->devices_cnt && VAR_5->devices == ((void*)0)) {
  FUNC_5(VAR_5);
  return -VAR_0;
 }

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6) {
  FUNC_3(&VAR_5->devices,
        &VAR_5->devices_cnt);
  FUNC_5(VAR_5);
  return VAR_6;
 }
 FUNC_4(VAR_5);

out:
 if (VAR_3)
  (*(int *)VAR_3)++;

 return 0;
}

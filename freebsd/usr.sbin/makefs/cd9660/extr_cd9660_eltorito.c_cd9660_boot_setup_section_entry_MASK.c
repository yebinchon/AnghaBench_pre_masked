
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cd9660_boot_image {int sector; int num_sectors; int loadSegment; int targetMode; } ;
struct TYPE_4__ {int load_rba; int sector_count; int load_segment; int * media_type; int * boot_indicator; } ;
struct TYPE_3__ {TYPE_2__ SE; } ;
struct boot_catalog_entry {TYPE_1__ entry_data; int entry_type; } ;
typedef TYPE_2__ boot_catalog_section_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct boot_catalog_entry* FUNC_2 () ;

__attribute__((used)) static struct boot_catalog_entry *
FUNC_3(struct cd9660_boot_image *VAR_2)
{
 struct boot_catalog_entry *VAR_3;
 boot_catalog_section_entry *VAR_4;
 if ((VAR_3 = FUNC_2()) == ((void*)0))
  return ((void*)0);

 VAR_3->entry_type = VAR_1;
 VAR_4 = &VAR_3->entry_data.SE;

 VAR_4->boot_indicator[0] = VAR_0;
 VAR_4->media_type[0] = VAR_2->targetMode;
 FUNC_0(VAR_2->loadSegment, VAR_4->load_segment);
 FUNC_0(VAR_2->num_sectors, VAR_4->sector_count);
 FUNC_1(VAR_2->sector, VAR_4->load_rba);
 return VAR_3;
}

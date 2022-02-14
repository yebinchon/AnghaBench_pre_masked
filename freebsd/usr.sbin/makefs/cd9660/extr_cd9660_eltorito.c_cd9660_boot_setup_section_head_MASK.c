
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* platform_id; scalar_t__* num_section_entries; int * header_indicator; } ;
struct TYPE_3__ {TYPE_2__ SH; } ;
struct boot_catalog_entry {TYPE_1__ entry_data; int entry_type; } ;
typedef TYPE_2__ boot_catalog_section_header ;


 int VAR_0 ;
 int VAR_1 ;
 struct boot_catalog_entry* FUNC_0 () ;

__attribute__((used)) static struct boot_catalog_entry *
FUNC_1(char VAR_2)
{
 struct boot_catalog_entry *VAR_3;
 boot_catalog_section_header *VAR_4;

 VAR_3 = FUNC_0();
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->entry_type = VAR_0;
 VAR_4 = &VAR_3->entry_data.SH;




 VAR_4->header_indicator[0] = VAR_1;
 VAR_4->platform_id[0] = VAR_2;
 VAR_4->num_section_entries[0] = 0;
 return VAR_3;
}

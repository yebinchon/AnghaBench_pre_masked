
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct screen_info {int dummy; } ;
struct kimage {scalar_t__ type; } ;
struct edd_info {int dummy; } ;
struct TYPE_9__ {unsigned long long ext_mem_k; } ;
struct TYPE_6__ {int hardware_subarch; } ;
struct boot_params {unsigned long long alt_mem_k; unsigned int e820_entries; TYPE_4__* edd_mbr_sig_buffer; int eddbuf_entries; TYPE_4__* eddbuf; TYPE_4__ screen_info; TYPE_3__* e820_table; int hd1_info; int hd0_info; int apm_bios_info; int acpi_rsdp_addr; TYPE_1__ hdr; } ;
struct TYPE_7__ {int hardware_subarch; } ;
struct TYPE_10__ {int * edd_mbr_sig_buffer; int eddbuf_entries; int * eddbuf; int acpi_rsdp_addr; int screen_info; TYPE_2__ hdr; } ;
struct TYPE_8__ {scalar_t__ type; unsigned long long addr; int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_0 (struct kimage*,struct boot_params*) ;
 int FUNC_1 (TYPE_4__*,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct boot_params*) ;
 int FUNC_4 (struct boot_params*,unsigned long,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_5(struct kimage *VAR_5, struct boot_params *VAR_6,
        unsigned long VAR_7,
        unsigned int VAR_8, unsigned int VAR_9,
        unsigned int VAR_10)
{
 unsigned int VAR_11;
 unsigned long long VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16 = 0;


 VAR_6->hdr.hardware_subarch = VAR_4.hdr.hardware_subarch;


 FUNC_1(&VAR_6->screen_info, &VAR_4.screen_info,
    sizeof(struct screen_info));


 VAR_6->screen_info.ext_mem_k = 0;
 VAR_6->alt_mem_k = 0;


 VAR_6->acpi_rsdp_addr = VAR_4.acpi_rsdp_addr;


 FUNC_2(&VAR_6->apm_bios_info, 0, sizeof(VAR_6->apm_bios_info));


 FUNC_2(&VAR_6->hd0_info, 0, sizeof(VAR_6->hd0_info));
 FUNC_2(&VAR_6->hd1_info, 0, sizeof(VAR_6->hd1_info));

 if (VAR_5->type == VAR_3) {
  VAR_16 = FUNC_0(VAR_5, VAR_6);
  if (VAR_16)
   return VAR_16;
 } else
  FUNC_3(VAR_6);

 VAR_11 = VAR_6->e820_entries;

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  if (VAR_6->e820_table[VAR_15].type != VAR_0)
   continue;
  VAR_13 = VAR_6->e820_table[VAR_15].addr;
  VAR_14 = VAR_6->e820_table[VAR_15].addr + VAR_6->e820_table[VAR_15].size - 1;

  if ((VAR_13 <= 0x100000) && VAR_14 > 0x100000) {
   VAR_12 = (VAR_14 >> 10) - (0x100000 >> 10);
   VAR_6->screen_info.ext_mem_k = VAR_12;
   VAR_6->alt_mem_k = VAR_12;
   if (VAR_12 > 0xfc00)
    VAR_6->screen_info.ext_mem_k = 0xfc00;
   if (VAR_12 > 0xffffffff)
    VAR_6->alt_mem_k = 0xffffffff;
  }
 }







 FUNC_1(VAR_6->eddbuf, VAR_4.eddbuf,
    VAR_1 * sizeof(struct edd_info));
 VAR_6->eddbuf_entries = VAR_4.eddbuf_entries;

 FUNC_1(VAR_6->edd_mbr_sig_buffer, VAR_4.edd_mbr_sig_buffer,
        VAR_2 * sizeof(unsigned int));

 return VAR_16;
}

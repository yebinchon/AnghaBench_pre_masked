
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct memdev_dmi_entry {int size; int extended_size; int memory_type; int type_detail; char* total_width; char* data_width; int handle; } ;
struct mem_ctl_info {int n_layers; int dimms; int layers; } ;
struct ghes_edac_dimm_fill {int count; struct mem_ctl_info* mci; } ;
struct dmi_header {scalar_t__ type; } ;
struct dimm_info {size_t mtype; scalar_t__ edac_mode; int grain; int smbios_handle; void* nr_pages; int dtype; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dimm_info* FUNC_1 (int ,int ,int ,int,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 void* FUNC_2 (int) ;
 char* FUNC_3 (void*) ;
 int FUNC_4 (int,char*,int,int,char*,char*) ;
 int* VAR_19 ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(const struct dmi_header *VAR_20, void *VAR_21)
{
 struct ghes_edac_dimm_fill *VAR_22 = VAR_21;
 struct mem_ctl_info *VAR_23 = VAR_22->mci;

 if (VAR_20->type == VAR_1) {
  struct memdev_dmi_entry *VAR_24 = (struct memdev_dmi_entry *)VAR_20;
  struct dimm_info *VAR_25 = FUNC_1(VAR_23->layers, VAR_23->dimms,
             VAR_23->n_layers,
             VAR_22->count, 0, 0);
  u16 VAR_26 = FUNC_0(7) | FUNC_0(13);

  if (VAR_24->size == 0xffff) {
   FUNC_5("Can't get DIMM%i size\n",
    VAR_22->count);
   VAR_25->nr_pages = FUNC_2(32);
  } else if (VAR_24->size == 0x7fff) {
   VAR_25->nr_pages = FUNC_2(VAR_24->extended_size);
  } else {
   if (VAR_24->size & FUNC_0(15))
    VAR_25->nr_pages = FUNC_2((VAR_24->size & 0x7fff) << 10);
   else
    VAR_25->nr_pages = FUNC_2(VAR_24->size);
  }

  switch (VAR_24->memory_type) {
  case 0x12:
   if (VAR_24->type_detail & FUNC_0(13))
    VAR_25->mtype = VAR_11;
   else
    VAR_25->mtype = VAR_4;
   break;
  case 0x13:
   if (VAR_24->type_detail & FUNC_0(13))
    VAR_25->mtype = VAR_12;
   else
    VAR_25->mtype = VAR_5;
   break;
  case 0x14:
   VAR_25->mtype = VAR_9;
   break;
  case 0x18:
   if (VAR_24->type_detail & FUNC_0(12))
    VAR_25->mtype = VAR_10;
   else if (VAR_24->type_detail & FUNC_0(13))
    VAR_25->mtype = VAR_13;
   else
    VAR_25->mtype = VAR_6;
   break;
  case 0x1a:
   if (VAR_24->type_detail & FUNC_0(12))
    VAR_25->mtype = VAR_10;
   else if (VAR_24->type_detail & FUNC_0(13))
    VAR_25->mtype = VAR_14;
   else
    VAR_25->mtype = VAR_7;
   break;
  default:
   if (VAR_24->type_detail & FUNC_0(6))
    VAR_25->mtype = VAR_16;
   else if ((VAR_24->type_detail & VAR_26) == VAR_26)
    VAR_25->mtype = VAR_15;
   else if (VAR_24->type_detail & FUNC_0(7))
    VAR_25->mtype = VAR_17;
   else if (VAR_24->type_detail & FUNC_0(9))
    VAR_25->mtype = VAR_8;
   else
    VAR_25->mtype = VAR_18;
  }





  if (VAR_24->total_width == VAR_24->data_width)
   VAR_25->edac_mode = VAR_2;
  else
   VAR_25->edac_mode = VAR_3;

  VAR_25->dtype = VAR_0;
  VAR_25->grain = 128;





  if (VAR_25->nr_pages) {
   FUNC_4(1, "DIMM%i: %s size = %d MB%s\n",
    VAR_22->count, VAR_19[VAR_25->mtype],
    FUNC_3(VAR_25->nr_pages),
    (VAR_25->edac_mode != VAR_2) ? "(ECC)" : "");
   FUNC_4(2, "\ttype %d, detail 0x%02x, width %d(total %d)\n",
    VAR_24->memory_type, VAR_24->type_detail,
    VAR_24->total_width, VAR_24->data_width);
  }

  VAR_25->smbios_handle = VAR_24->handle;

  VAR_22->count++;
 }
}

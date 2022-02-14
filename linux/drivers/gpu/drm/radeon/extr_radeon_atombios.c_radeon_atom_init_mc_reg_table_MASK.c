
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int ucNumOfVRAMModule; int usMemClkPatchTblOffset; } ;
union vram_info {TYPE_2__ v2_1; } ;
typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {TYPE_7__* atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct atom_mc_reg_table {int last; int num_entries; TYPE_4__* mc_reg_table_entry; TYPE_3__* mc_reg_address; } ;
struct TYPE_14__ {scalar_t__ bios; } ;
struct TYPE_13__ {int usRegDataBlkSize; int usRegIndexTblSize; TYPE_5__* asRegIndexBuf; } ;
struct TYPE_12__ {int ucPreRegDataLength; int usRegIndex; } ;
struct TYPE_11__ {int mclk_max; int* mc_data; } ;
struct TYPE_10__ {int pre_reg_data; scalar_t__ s1; } ;
typedef int ATOM_MEMORY_SETTING_DATA_BLOCK ;
typedef TYPE_5__ ATOM_INIT_REG_INDEX_FORMAT ;
typedef TYPE_6__ ATOM_INIT_REG_BLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (TYPE_7__*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct atom_mc_reg_table*,int ,int) ;

int FUNC_6(struct radeon_device *VAR_14,
      u8 VAR_15,
      struct atom_mc_reg_table *VAR_16)
{
 int VAR_17 = FUNC_1(VAR_3, VAR_13);
 u8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = 0;
 u32 VAR_23 = 0, VAR_24;
 u16 VAR_25, VAR_26;
 union vram_info *VAR_27;

 FUNC_5(VAR_16, 0, sizeof(struct atom_mc_reg_table));

 if (FUNC_2(VAR_14->mode_info.atom_context, VAR_17, &VAR_26,
       &VAR_18, &VAR_19, &VAR_25)) {
  VAR_27 = (union vram_info *)
   (VAR_14->mode_info.atom_context->bios + VAR_25);
  switch (VAR_18) {
  case 1:
   FUNC_0("old table version %d, %d\n", VAR_18, VAR_19);
   return -VAR_6;
  case 2:
   switch (VAR_19) {
   case 1:
    if (VAR_15 < VAR_27->v2_1.ucNumOfVRAMModule) {
     ATOM_INIT_REG_BLOCK *VAR_28 =
      (ATOM_INIT_REG_BLOCK *)
      ((u8 *)VAR_27 + FUNC_3(VAR_27->v2_1.usMemClkPatchTblOffset));
     ATOM_MEMORY_SETTING_DATA_BLOCK *VAR_29 =
      (ATOM_MEMORY_SETTING_DATA_BLOCK *)
      ((u8 *)VAR_28 + (2 * sizeof(u16)) +
       FUNC_3(VAR_28->usRegIndexTblSize));
     ATOM_INIT_REG_INDEX_FORMAT *VAR_30 = &VAR_28->asRegIndexBuf[0];
     VAR_20 = (u8)((FUNC_3(VAR_28->usRegIndexTblSize)) /
          sizeof(ATOM_INIT_REG_INDEX_FORMAT)) - 1;
     if (VAR_20 > VAR_12)
      return -VAR_6;
     while (VAR_23 < VAR_20) {
      if (VAR_30->ucPreRegDataLength & VAR_0)
       break;
      VAR_16->mc_reg_address[VAR_23].s1 =
       (u16)(FUNC_3(VAR_30->usRegIndex));
      VAR_16->mc_reg_address[VAR_23].pre_reg_data =
       (u8)(VAR_30->ucPreRegDataLength);
      VAR_23++;
      VAR_30 = (ATOM_INIT_REG_INDEX_FORMAT *)
       ((u8 *)VAR_30 + sizeof(ATOM_INIT_REG_INDEX_FORMAT));
     }
     VAR_16->last = VAR_23;
     while ((FUNC_4(*(u32 *)VAR_29) != VAR_7) &&
            (VAR_22 < VAR_11)) {
      VAR_21 = (u8)((FUNC_4(*(u32 *)VAR_29) & VAR_9)
        >> VAR_10);
      if (VAR_15 == VAR_21) {
       VAR_16->mc_reg_table_entry[VAR_22].mclk_max =
        (u32)((FUNC_4(*(u32 *)VAR_29) & VAR_1)
              >> VAR_2);
       for (VAR_23 = 0, VAR_24 = 1; VAR_23 < VAR_16->last; VAR_23++) {
        if ((VAR_16->mc_reg_address[VAR_23].pre_reg_data & VAR_8) == VAR_5) {
         VAR_16->mc_reg_table_entry[VAR_22].mc_data[VAR_23] =
          (u32)FUNC_4(*((u32 *)VAR_29 + VAR_24));
         VAR_24++;
        } else if ((VAR_16->mc_reg_address[VAR_23].pre_reg_data & VAR_8) == VAR_4) {
         VAR_16->mc_reg_table_entry[VAR_22].mc_data[VAR_23] =
          VAR_16->mc_reg_table_entry[VAR_22].mc_data[VAR_23 - 1];
        }
       }
       VAR_22++;
      }
      VAR_29 = (ATOM_MEMORY_SETTING_DATA_BLOCK *)
       ((u8 *)VAR_29 + FUNC_3(VAR_28->usRegDataBlkSize));
     }
     if (FUNC_4(*(u32 *)VAR_29) != VAR_7)
      return -VAR_6;
     VAR_16->num_entries = VAR_22;
    } else
     return -VAR_6;
    break;
   default:
    FUNC_0("Unknown table version %d, %d\n", VAR_18, VAR_19);
    return -VAR_6;
   }
   break;
  default:
   FUNC_0("Unknown table version %d, %d\n", VAR_18, VAR_19);
   return -VAR_6;
  }
  return 0;
 }
 return -VAR_6;
}

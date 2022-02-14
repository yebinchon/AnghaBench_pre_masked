
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct arm_smmu_device {int features; scalar_t__ version; unsigned int streamid_mask; unsigned int num_mapping_groups; int pgshift; int numpage; unsigned int num_s2_context_banks; unsigned int num_context_banks; unsigned int ipa_size; unsigned int pa_size; unsigned int va_size; int pgsize_bitmap; TYPE_1__* impl; int dev; void* cbs; int global_sync_lock; int stream_map_mutex; int * s2crs; void* smrs; } ;
struct TYPE_4__ {unsigned long pgsize_bitmap; } ;
struct TYPE_3__ {int (* cfg_probe ) (struct arm_smmu_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (unsigned int) ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int FUNC_1 (int ,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_2 (struct arm_smmu_device*,int ) ;
 void* FUNC_3 (unsigned int) ;
 TYPE_2__ VAR_52 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*,...) ;
 void* FUNC_7 (int ,unsigned int,int,int ) ;
 int * FUNC_8 (int ,unsigned int,int,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int VAR_53 ;
 int FUNC_10 (int *) ;
 int VAR_54 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct arm_smmu_device*) ;

__attribute__((used)) static int FUNC_13(struct arm_smmu_device *VAR_55)
{
 unsigned int VAR_56;
 u32 VAR_57;
 bool VAR_58, VAR_59 = VAR_55->features & VAR_0;
 int VAR_60;

 FUNC_5(VAR_55->dev, "probing hardware configuration...\n");
 FUNC_5(VAR_55->dev, "SMMUv%d with:\n",
   VAR_55->version == VAR_17 ? 2 : 1);


 VAR_57 = FUNC_2(VAR_55, VAR_13);


 if (VAR_53 == 1)
  VAR_57 &= ~(VAR_30 | VAR_24);
 else if (VAR_53 == 2)
  VAR_57 &= ~(VAR_29 | VAR_24);

 if (VAR_57 & VAR_29) {
  VAR_55->features |= VAR_10;
  FUNC_5(VAR_55->dev, "\tstage 1 translation\n");
 }

 if (VAR_57 & VAR_30) {
  VAR_55->features |= VAR_11;
  FUNC_5(VAR_55->dev, "\tstage 2 translation\n");
 }

 if (VAR_57 & VAR_24) {
  VAR_55->features |= VAR_8;
  FUNC_5(VAR_55->dev, "\tnested translation\n");
 }

 if (!(VAR_55->features &
  (VAR_10 | VAR_11))) {
  FUNC_4(VAR_55->dev, "\tno translation support!\n");
  return -VAR_18;
 }

 if ((VAR_57 & VAR_29) &&
  ((VAR_55->version < VAR_17) || !(VAR_57 & VAR_21))) {
  VAR_55->features |= VAR_9;
  FUNC_5(VAR_55->dev, "\taddress translation ops\n");
 }







 VAR_58 = !!(VAR_57 & VAR_22);
 if (VAR_59 || VAR_58)
  FUNC_5(VAR_55->dev, "\t%scoherent table walk\n",
      VAR_59 ? "" : "non-");
 if (VAR_59 != VAR_58)
  FUNC_5(VAR_55->dev,
      "\t(IDR0.CTTW overridden by FW configuration)\n");


 if (VAR_55->version == VAR_17 && VAR_57 & VAR_23) {
  VAR_55->features |= VAR_1;
  VAR_56 = 1 << 16;
 } else {
  VAR_56 = 1 << FUNC_1(VAR_25, VAR_57);
 }
 VAR_55->streamid_mask = VAR_56 - 1;
 if (VAR_57 & VAR_31) {
  VAR_55->features |= VAR_7;
  VAR_56 = FUNC_1(VAR_26, VAR_57);
  if (VAR_56 == 0) {
   FUNC_4(VAR_55->dev,
    "stream-matching supported, but no SMRs present!\n");
   return -VAR_18;
  }


  VAR_55->smrs = FUNC_7(VAR_55->dev, VAR_56, sizeof(*VAR_55->smrs),
       VAR_20);
  if (!VAR_55->smrs)
   return -VAR_19;

  FUNC_5(VAR_55->dev,
      "\tstream matching with %u register groups", VAR_56);
 }

 VAR_55->s2crs = FUNC_8(VAR_55->dev, VAR_56, sizeof(*VAR_55->s2crs),
      VAR_20);
 if (!VAR_55->s2crs)
  return -VAR_19;
 for (VAR_60 = 0; VAR_60 < VAR_56; VAR_60++)
  VAR_55->s2crs[VAR_60] = VAR_54;

 VAR_55->num_mapping_groups = VAR_56;
 FUNC_10(&VAR_55->stream_map_mutex);
 FUNC_11(&VAR_55->global_sync_lock);

 if (VAR_55->version < VAR_17 || !(VAR_57 & VAR_27)) {
  VAR_55->features |= VAR_2;
  if (!(VAR_57 & VAR_28))
   VAR_55->features |= VAR_3;
 }


 VAR_57 = FUNC_2(VAR_55, VAR_14);
 VAR_55->pgshift = (VAR_57 & VAR_35) ? 16 : 12;


 VAR_56 = 1 << (FUNC_1(VAR_33, VAR_57) + 1);
 if (VAR_55->numpage != 2 * VAR_56 << VAR_55->pgshift)
  FUNC_6(VAR_55->dev,
   "SMMU address space size (0x%x) differs from mapped region size (0x%x)!\n",
   2 * VAR_56 << VAR_55->pgshift, VAR_55->numpage);

 VAR_55->numpage = VAR_56;

 VAR_55->num_s2_context_banks = FUNC_1(VAR_34, VAR_57);
 VAR_55->num_context_banks = FUNC_1(VAR_32, VAR_57);
 if (VAR_55->num_s2_context_banks > VAR_55->num_context_banks) {
  FUNC_4(VAR_55->dev, "impossible number of S2 context banks!\n");
  return -VAR_18;
 }
 FUNC_5(VAR_55->dev, "\t%u context banks (%u stage-2 only)\n",
     VAR_55->num_context_banks, VAR_55->num_s2_context_banks);
 VAR_55->cbs = FUNC_7(VAR_55->dev, VAR_55->num_context_banks,
     sizeof(*VAR_55->cbs), VAR_20);
 if (!VAR_55->cbs)
  return -VAR_19;


 VAR_57 = FUNC_2(VAR_55, VAR_15);
 VAR_56 = FUNC_3(FUNC_1(VAR_36, VAR_57));
 VAR_55->ipa_size = VAR_56;


 VAR_56 = FUNC_3(FUNC_1(VAR_37, VAR_57));
 VAR_55->pa_size = VAR_56;

 if (VAR_57 & VAR_42)
  VAR_55->features |= VAR_12;






 if (FUNC_9(VAR_55->dev, FUNC_0(VAR_56)))
  FUNC_6(VAR_55->dev,
    "failed to set DMA mask for table walker\n");

 if (VAR_55->version < VAR_17) {
  VAR_55->va_size = VAR_55->ipa_size;
  if (VAR_55->version == VAR_16)
   VAR_55->features |= VAR_6;
 } else {
  VAR_56 = FUNC_1(VAR_41, VAR_57);
  VAR_55->va_size = FUNC_3(VAR_56);
  if (VAR_57 & VAR_39)
   VAR_55->features |= VAR_5;
  if (VAR_57 & VAR_38)
   VAR_55->features |= VAR_4;
  if (VAR_57 & VAR_40)
   VAR_55->features |= VAR_6;
 }


 if (VAR_55->features & VAR_3)
  VAR_55->pgsize_bitmap |= VAR_49 | VAR_51 | VAR_46 | VAR_44;
 if (VAR_55->features &
     (VAR_2 | VAR_5))
  VAR_55->pgsize_bitmap |= VAR_49 | VAR_47 | VAR_45;
 if (VAR_55->features & VAR_4)
  VAR_55->pgsize_bitmap |= VAR_43 | VAR_48;
 if (VAR_55->features & VAR_6)
  VAR_55->pgsize_bitmap |= VAR_51 | VAR_50;

 if (VAR_52.pgsize_bitmap == -1UL)
  VAR_52.pgsize_bitmap = VAR_55->pgsize_bitmap;
 else
  VAR_52.pgsize_bitmap |= VAR_55->pgsize_bitmap;
 FUNC_5(VAR_55->dev, "\tSupported page sizes: 0x%08lx\n",
     VAR_55->pgsize_bitmap);


 if (VAR_55->features & VAR_10)
  FUNC_5(VAR_55->dev, "\tStage-1: %lu-bit VA -> %lu-bit IPA\n",
      VAR_55->va_size, VAR_55->ipa_size);

 if (VAR_55->features & VAR_11)
  FUNC_5(VAR_55->dev, "\tStage-2: %lu-bit IPA -> %lu-bit PA\n",
      VAR_55->ipa_size, VAR_55->pa_size);

 if (VAR_55->impl && VAR_55->impl->cfg_probe)
  return VAR_55->impl->cfg_probe(VAR_55);

 return 0;
}

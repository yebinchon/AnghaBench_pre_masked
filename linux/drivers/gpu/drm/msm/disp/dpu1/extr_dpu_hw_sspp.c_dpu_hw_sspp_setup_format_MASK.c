
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_pipe {TYPE_4__* cap; TYPE_3__* mdp; TYPE_2__* catalog; struct dpu_hw_blk_reg_map hw; } ;
struct dpu_format {int chroma_sample; int fetch_planes; int* bits; int* element; int unpack_count; int unpack_tight; int unpack_align_msb; int bpp; int fetch_mode; scalar_t__ alpha_enable; } ;
typedef enum dpu_sspp_multirect_index { ____Placeholder_dpu_sspp_multirect_index } dpu_sspp_multirect_index ;
struct TYPE_8__ {int features; } ;
struct TYPE_7__ {int highest_bank_bit; int ubwc_swizzle; } ;
struct TYPE_6__ {TYPE_1__* caps; } ;
struct TYPE_5__ {int ubwc_version; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct dpu_format const*) ;
 scalar_t__ FUNC_2 (struct dpu_format const*) ;
 scalar_t__ FUNC_3 (struct dpu_format const*) ;
 int VAR_8 ;
 int FUNC_4 (struct dpu_hw_blk_reg_map*,int) ;
 int FUNC_5 (struct dpu_hw_blk_reg_map*,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_19 ;
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
 int FUNC_7 (struct dpu_hw_pipe*,int,scalar_t__) ;
 int FUNC_8 (struct dpu_hw_pipe*,int,scalar_t__) ;
 scalar_t__ FUNC_9 (struct dpu_hw_pipe*,int ,int*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct dpu_hw_pipe *VAR_36,
  const struct dpu_format *VAR_37, u32 VAR_38,
  enum dpu_sspp_multirect_index VAR_39)
{
 struct dpu_hw_blk_reg_map *VAR_40;
 u32 VAR_41, VAR_42, VAR_43;
 u32 VAR_44 = 0;
 u32 VAR_45 = 0;
 u32 VAR_46, VAR_47, VAR_48;
 u32 VAR_49;

 if (FUNC_9(VAR_36, VAR_18, &VAR_49) || !VAR_37)
  return;

 if (VAR_39 == VAR_14 || VAR_39 == VAR_13) {
  VAR_46 = VAR_26;
  VAR_47 = VAR_28;
  VAR_48 = VAR_24;
 } else {
  VAR_46 = VAR_27;
  VAR_47 = VAR_29;
  VAR_48 = VAR_25;
 }

 VAR_40 = &VAR_36->hw;
 VAR_44 = FUNC_4(VAR_40, VAR_46 + VAR_49);
 VAR_44 &= ~(VAR_20 | VAR_21 |
   VAR_19 | VAR_22);

 if (VAR_38 & VAR_11)
  VAR_44 |= VAR_20;
 if (VAR_38 & VAR_12)
  VAR_44 |= VAR_21;

 VAR_41 = VAR_37->chroma_sample;
 if (VAR_38 & VAR_17) {
  if (VAR_41 == VAR_5)
   VAR_41 = VAR_4;
  else if (VAR_41 == VAR_4)
   VAR_41 = VAR_5;
 }

 VAR_43 = (VAR_41 << 23) | (VAR_37->fetch_planes << 19) |
  (VAR_37->bits[VAR_3] << 6) | (VAR_37->bits[VAR_2] << 4) |
  (VAR_37->bits[VAR_1] << 2) | (VAR_37->bits[VAR_0] << 0);

 if (VAR_38 & VAR_15)
  VAR_43 |= FUNC_0(11);

 if (VAR_37->alpha_enable && VAR_37->fetch_planes == VAR_8)
  VAR_43 |= FUNC_0(8);

 if (VAR_38 & VAR_16)
  VAR_43 |= FUNC_0(22);

 VAR_42 = (VAR_37->element[3] << 24) | (VAR_37->element[2] << 16) |
  (VAR_37->element[1] << 8) | (VAR_37->element[0] << 0);
 VAR_43 |= ((VAR_37->unpack_count - 1) << 12) |
  (VAR_37->unpack_tight << 17) |
  (VAR_37->unpack_align_msb << 18) |
  ((VAR_37->bpp - 1) << 9);

 if (VAR_37->fetch_mode != VAR_7) {
  if (FUNC_2(VAR_37))
   VAR_44 |= VAR_19;
  VAR_43 |= (VAR_37->fetch_mode & 3) << 30;
  FUNC_5(VAR_40, VAR_23,
   VAR_6 |
   VAR_36->mdp->highest_bank_bit << 18);
  if (FUNC_6(VAR_36->catalog->caps->ubwc_version)) {
   VAR_45 = VAR_37->alpha_enable ? FUNC_0(31) : 0;
   FUNC_5(VAR_40, VAR_31,
     VAR_45 | (VAR_36->mdp->ubwc_swizzle) |
     (VAR_36->mdp->highest_bank_bit << 4));
  }
 }

 VAR_44 |= VAR_22;


 if (FUNC_3(VAR_37))
  VAR_43 |= FUNC_0(15);

 if (FUNC_1(VAR_37))
  VAR_43 |= FUNC_0(14);


 if (FUNC_10(VAR_9, &VAR_36->cap->features))
  FUNC_8(VAR_36, VAR_34 | VAR_35,
   FUNC_3(VAR_37));
 else if (FUNC_10(VAR_10, &VAR_36->cap->features))
  FUNC_7(VAR_36,
   VAR_32 | VAR_33,
   FUNC_3(VAR_37));

 FUNC_5(VAR_40, VAR_48 + VAR_49, VAR_43);
 FUNC_5(VAR_40, VAR_47 + VAR_49, VAR_42);
 FUNC_5(VAR_40, VAR_46 + VAR_49, VAR_44);


 FUNC_5(VAR_40, VAR_30 + VAR_49, FUNC_0(31));
}

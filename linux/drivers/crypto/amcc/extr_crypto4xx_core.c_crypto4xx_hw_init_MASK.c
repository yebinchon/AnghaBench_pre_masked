
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ring_size; int ring_offset; } ;
union ce_ring_size {int w; TYPE_1__ bf; } ;
union ce_ring_control {int w; } ;
struct TYPE_8__ {int bo_sgpd_en; int bo_sa_en; int bo_pd_en; int dynamic_sa_en; int reset_sg; int reset_pdr; int reset_pe; int pe_mode; scalar_t__ bo_td_en; scalar_t__ bo_data_en; } ;
union ce_pe_dma_cfg {int w; TYPE_4__ bf; } ;
struct TYPE_6__ {int gdr_size; int sdr_size; } ;
union ce_part_ring_size {int w; TYPE_2__ bf; } ;
struct TYPE_7__ {int input_threshold; int output_threshold; } ;
union ce_io_threshold {int w; TYPE_3__ bf; } ;
typedef int u32 ;
struct crypto4xx_device {int pdr_pa; int gdr_pa; int sdr_pa; scalar_t__ ce_base; scalar_t__ is_revb; } ;
typedef int rand_num ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
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
 int FUNC_0 (int*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct crypto4xx_device *VAR_43)
{
 union ce_ring_size VAR_44;
 union ce_ring_control VAR_45;
 union ce_part_ring_size VAR_46;
 union ce_io_threshold VAR_47;
 u32 VAR_48;
 union ce_pe_dma_cfg VAR_49;
 u32 VAR_50;

 FUNC_2(VAR_27, VAR_43->ce_base + VAR_0);

 VAR_49.w = 0;
 VAR_49.bf.bo_sgpd_en = 1;
 VAR_49.bf.bo_data_en = 0;
 VAR_49.bf.bo_sa_en = 1;
 VAR_49.bf.bo_pd_en = 1;
 VAR_49.bf.dynamic_sa_en = 1;
 VAR_49.bf.reset_sg = 1;
 VAR_49.bf.reset_pdr = 1;
 VAR_49.bf.reset_pe = 1;
 FUNC_2(VAR_49.w, VAR_43->ce_base + VAR_14);

 VAR_49.bf.pe_mode = 0;
 VAR_49.bf.reset_sg = 0;
 VAR_49.bf.reset_pdr = 0;
 VAR_49.bf.reset_pe = 0;
 VAR_49.bf.bo_td_en = 0;
 FUNC_2(VAR_49.w, VAR_43->ce_base + VAR_14);
 FUNC_2(VAR_43->pdr_pa, VAR_43->ce_base + VAR_12);
 FUNC_2(VAR_43->pdr_pa, VAR_43->ce_base + VAR_20);
 FUNC_2(VAR_39, VAR_43->ce_base + VAR_17);
 FUNC_0(&VAR_48, sizeof(VAR_48));
 FUNC_2(VAR_48, VAR_43->ce_base + VAR_19);
 FUNC_0(&VAR_48, sizeof(VAR_48));
 FUNC_2(VAR_48, VAR_43->ce_base + VAR_18);
 VAR_44.w = 0;
 VAR_44.bf.ring_offset = VAR_38;
 VAR_44.bf.ring_size = VAR_35;
 FUNC_2(VAR_44.w, VAR_43->ce_base + VAR_23);
 VAR_45.w = 0;
 FUNC_2(VAR_45.w, VAR_43->ce_base + VAR_22);
 VAR_50 = FUNC_1(VAR_43->ce_base + VAR_1);
 VAR_50 |= VAR_28;
 FUNC_2(VAR_50, VAR_43->ce_base + VAR_1);
 FUNC_2(VAR_43->gdr_pa, VAR_43->ce_base + VAR_2);
 FUNC_2(VAR_43->sdr_pa, VAR_43->ce_base + VAR_25);
 VAR_46.w = 0;
 VAR_46.bf.sdr_size = VAR_40;
 VAR_46.bf.gdr_size = VAR_29;
 FUNC_2(VAR_46.w, VAR_43->ce_base + VAR_11);
 FUNC_2(VAR_41, VAR_43->ce_base + VAR_10);
 VAR_47.w = 0;
 VAR_47.bf.output_threshold = VAR_36;
 VAR_47.bf.input_threshold = VAR_30;
 FUNC_2(VAR_47.w, VAR_43->ce_base + VAR_9);
 FUNC_2(0, VAR_43->ce_base + VAR_13);
 FUNC_2(0, VAR_43->ce_base + VAR_21);
 FUNC_2(0, VAR_43->ce_base + VAR_16);
 FUNC_2(0, VAR_43->ce_base + VAR_15);
 FUNC_2(0, VAR_43->ce_base + VAR_24);
 FUNC_2(0, VAR_43->ce_base + VAR_3);
 FUNC_2(0, VAR_43->ce_base + VAR_26);

 VAR_49.bf.pe_mode = 1;
 VAR_49.bf.reset_sg = 0;
 VAR_49.bf.reset_pdr = 0;
 VAR_49.bf.reset_pe = 0;
 VAR_49.bf.bo_td_en = 0;
 FUNC_2(VAR_49.w, VAR_43->ce_base + VAR_14);

 FUNC_2(VAR_31, VAR_43->ce_base + VAR_5);
 FUNC_2(VAR_33, VAR_43->ce_base + VAR_6);
 FUNC_2(VAR_33, VAR_43->ce_base + VAR_6);
 FUNC_2(VAR_32, VAR_43->ce_base + VAR_4);
 if (VAR_43->is_revb) {
  FUNC_2(VAR_34 << 10,
         VAR_43->ce_base + VAR_8);
  FUNC_2(VAR_37 | VAR_42,
         VAR_43->ce_base + VAR_7);
 } else {
  FUNC_2(VAR_37, VAR_43->ce_base + VAR_7);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long long u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct adf4350_state {unsigned long long min_out_freq; int r4_rf_div_sel; int chspc; scalar_t__ r0_int; int r1_mod; int fpfd; int r0_fract; int* regs; unsigned long long freq_req; TYPE_1__* spi; struct adf4350_platform_data* pdata; } ;
struct adf4350_platform_data {scalar_t__ ref_div_factor; int r2_user_settings; int r3_user_settings; int r4_user_settings; scalar_t__ ref_div2_en; scalar_t__ ref_doubler_en; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long long VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long long) ;
 size_t VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_17 ;
 size_t VAR_18 ;
 int FUNC_10 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_23 ;
 size_t VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_14 (int,int ) ;
 int VAR_29 ;
 int FUNC_15 (struct adf4350_state*) ;
 scalar_t__ FUNC_16 (struct adf4350_state*,scalar_t__) ;
 int FUNC_17 (int *,char*,unsigned long long,int,scalar_t__,unsigned long long,int,int,int,char*,int ) ;
 int FUNC_18 (unsigned long long,int) ;
 int FUNC_19 (int,int) ;

__attribute__((used)) static int FUNC_20(struct adf4350_state *VAR_30, unsigned long long VAR_31)
{
 struct adf4350_platform_data *VAR_32 = VAR_30->pdata;
 u64 VAR_33;
 u32 VAR_34, VAR_35, VAR_36;
 u16 VAR_37, VAR_38 = 0;
 u8 VAR_39;

 if (VAR_31 > VAR_3 || VAR_31 < VAR_30->min_out_freq)
  return -VAR_29;

 if (VAR_31 > VAR_1) {
  VAR_35 = VAR_8;
  VAR_37 = 75;
 } else {
  VAR_35 = 0;
  VAR_37 = 23;
 }

 VAR_30->r4_rf_div_sel = 0;

 while (VAR_31 < VAR_5) {
  VAR_31 <<= 1;
  VAR_30->r4_rf_div_sel++;
 }





 if (VAR_32->ref_div_factor)
  VAR_38 = VAR_32->ref_div_factor - 1;

 VAR_36 = VAR_30->chspc;

 do {
  do {
   do {
    VAR_38 = FUNC_16(VAR_30, VAR_38);
    VAR_30->r1_mod = VAR_30->fpfd / VAR_36;
    if (VAR_38 > VAR_4) {

     VAR_36++;
     VAR_38 = 0;
    }
   } while ((VAR_30->r1_mod > VAR_2) && VAR_38);
  } while (VAR_38 == 0);

  VAR_33 = VAR_31 * (u64)VAR_30->r1_mod + (VAR_30->fpfd >> 1);
  FUNC_18(VAR_33, VAR_30->fpfd);
  VAR_30->r0_fract = FUNC_18(VAR_33, VAR_30->r1_mod);
  VAR_30->r0_int = VAR_33;
 } while (VAR_37 > VAR_30->r0_int);

 VAR_39 = FUNC_14(VAR_30->fpfd, VAR_0);

 if (VAR_30->r0_fract && VAR_30->r1_mod) {
  VAR_34 = FUNC_19(VAR_30->r1_mod, VAR_30->r0_fract);
  VAR_30->r1_mod /= VAR_34;
  VAR_30->r0_fract /= VAR_34;
 } else {
  VAR_30->r0_fract = 0;
  VAR_30->r1_mod = 1;
 }

 FUNC_17(&VAR_30->spi->dev, "VCO: %llu Hz, PFD %lu Hz\n"
  "REF_DIV %d, R0_INT %d, R0_FRACT %d\n"
  "R1_MOD %d, RF_DIV %d\nPRESCALER %s, BAND_SEL_DIV %d\n",
  VAR_31, VAR_30->fpfd, VAR_38, VAR_30->r0_int, VAR_30->r0_fract, VAR_30->r1_mod,
  1 << VAR_30->r4_rf_div_sel, VAR_35 ? "8/9" : "4/5",
  VAR_39);

 VAR_30->regs[VAR_6] = FUNC_1(VAR_30->r0_int) |
     FUNC_0(VAR_30->r0_fract);

 VAR_30->regs[VAR_7] = FUNC_3(1) |
     FUNC_2(VAR_30->r1_mod) |
     VAR_35;

 VAR_30->regs[VAR_9] =
  FUNC_4(VAR_38) |
  VAR_10 |
  (VAR_32->ref_doubler_en ? VAR_15 : 0) |
  (VAR_32->ref_div2_en ? VAR_14 : 0) |
  (VAR_32->r2_user_settings & (VAR_13 |
  VAR_12 | VAR_11 |
  FUNC_5(5000) |
  FUNC_6(0x7) | FUNC_7(0x3)));

 VAR_30->regs[VAR_16] = VAR_32->r3_user_settings &
     (FUNC_8(0xFFF) |
     FUNC_9(0x3) |
     VAR_17 |
     VAR_28 |
     VAR_26 |
     VAR_27);

 VAR_30->regs[VAR_18] =
  VAR_21 |
  FUNC_13(VAR_30->r4_rf_div_sel) |
  FUNC_10(VAR_39) |
  VAR_23 |
  (VAR_32->r4_user_settings &
  (FUNC_12(0x3) |
  FUNC_11(0x3) |
  VAR_19 |
  VAR_20 |
  VAR_22));

 VAR_30->regs[VAR_24] = VAR_25;
 VAR_30->freq_req = VAR_31;

 return FUNC_15(VAR_30);
}

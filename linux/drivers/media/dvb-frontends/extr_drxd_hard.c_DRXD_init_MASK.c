
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int IF; scalar_t__ (* osc_deviation ) (int ,int ,int ) ;} ;
struct drxd_state {int init_done; long expected_sys_clock_freq; int microcode_length; int drxd_state; int cscd_state; int rf_agc_cfg; int if_agc_cfg; int m_FeAgRegAgAgcSio; int m_FeAgRegAgPwd; scalar_t__ PGA; int const* microcode; scalar_t__ type_A; scalar_t__ sys_clock_freq; scalar_t__ osc_clock_deviation; int priv; TYPE_1__ config; scalar_t__ m_HiI2cPatch; int operation_mode; } ;
typedef long s32 ;


 int FUNC_0 (struct drxd_state*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drxd_state*,int const*,int) ;
 int FUNC_2 (struct drxd_state*) ;
 int FUNC_3 (struct drxd_state*) ;
 int FUNC_4 (struct drxd_state*) ;
 int FUNC_5 (struct drxd_state*) ;
 int FUNC_6 (struct drxd_state*) ;
 int FUNC_7 (struct drxd_state*) ;
 int FUNC_8 (struct drxd_state*) ;
 int FUNC_9 (struct drxd_state*) ;
 int FUNC_10 (struct drxd_state*) ;
 int FUNC_11 (struct drxd_state*) ;
 int FUNC_12 (struct drxd_state*) ;
 int FUNC_13 (struct drxd_state*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (struct drxd_state*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (struct drxd_state*,int *) ;
 int FUNC_16 (struct drxd_state*,int ) ;
 int FUNC_17 (struct drxd_state*,int *) ;
 int FUNC_18 (struct drxd_state*) ;
 int FUNC_19 (struct drxd_state*) ;
 int FUNC_20 (struct drxd_state*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_21 (struct drxd_state*,int,int,int ) ;
 int FUNC_22 (struct drxd_state*,int ,int,int ) ;
 int FUNC_23 (struct drxd_state*,scalar_t__) ;
 scalar_t__ FUNC_24 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_25(struct drxd_state *VAR_13, const u8 *VAR_14, u32 VAR_15)
{
 int VAR_16 = 0;
 u32 VAR_17;

 if (VAR_13->init_done)
  return 0;

 FUNC_0(VAR_13, VAR_13->config.IF ? VAR_13->config.IF : 36000000);

 do {
  VAR_13->operation_mode = VAR_6;

  VAR_16 = FUNC_18(VAR_13);
  if (VAR_16 < 0)
   break;


  if (!VAR_13->type_A && VAR_13->m_HiI2cPatch) {
   VAR_16 = FUNC_23(VAR_13, VAR_13->m_HiI2cPatch);
   if (VAR_16 < 0)
    break;
  }

  if (VAR_13->type_A) {


   VAR_16 = FUNC_21(VAR_13, 0x43012D, 0x047f, 0);
   if (VAR_16 < 0)
    break;
  }

  VAR_16 = FUNC_3(VAR_13);
  if (VAR_16 < 0)
   break;

  VAR_16 = FUNC_19(VAR_13);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_5(VAR_13);
  if (VAR_16 < 0)
   break;

  VAR_13->osc_clock_deviation = 0;

  if (VAR_13->config.osc_deviation)
   VAR_13->osc_clock_deviation =
       VAR_13->config.osc_deviation(VAR_13->priv, 0, 0);
  {

   s32 VAR_18;
   s32 VAR_19 = (s32) (VAR_13->osc_clock_deviation) *
       (s32) (VAR_13->expected_sys_clock_freq);

   s32 VAR_20 = (VAR_19 / (1000000L));

   if (VAR_19 > 0)
    VAR_18 = (2);
   else
    VAR_18 = (-2);
   if ((VAR_18 * (VAR_19 % 1000000L) > 1000000L)) {

    VAR_20 += (VAR_18 / 2);
   }

   VAR_13->sys_clock_freq =
       (u16) ((VAR_13->expected_sys_clock_freq) +
       VAR_20);
  }
  VAR_16 = FUNC_12(VAR_13);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_4(VAR_13);
  if (VAR_16 < 0)
   break;

  VAR_16 = FUNC_2(VAR_13);
  if (VAR_16 < 0)
   break;
  if (VAR_13->type_A) {
   VAR_16 = FUNC_14(VAR_13);
   if (VAR_16 < 0)
    break;
  }
  if (VAR_14) {
   VAR_16 = FUNC_1(VAR_13, VAR_14, VAR_15);
   if (VAR_16 < 0)
    break;
  } else {
   VAR_16 = FUNC_1(VAR_13, VAR_13->microcode, VAR_13->microcode_length);
   if (VAR_16 < 0)
    break;
  }

  if (VAR_13->PGA) {
   VAR_13->m_FeAgRegAgPwd = VAR_3;
   FUNC_16(VAR_13, 0);
  } else {
   VAR_13->m_FeAgRegAgPwd = VAR_2;
  }

  VAR_13->m_FeAgRegAgAgcSio = VAR_1;

  VAR_16 = FUNC_10(VAR_13);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_11(VAR_13);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_7(VAR_13);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_6(VAR_13);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_9(VAR_13);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_8(VAR_13);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_13(VAR_13);
  if (VAR_16 < 0)
   break;

  VAR_16 = FUNC_15(VAR_13, &VAR_13->if_agc_cfg);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_17(VAR_13, &VAR_13->rf_agc_cfg);
  if (VAR_16 < 0)
   break;

  VAR_13->cscd_state = VAR_0;
  VAR_16 = FUNC_21(VAR_13, VAR_8, VAR_7, 0);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_21(VAR_13, VAR_5, VAR_7, 0);
  if (VAR_16 < 0)
   break;

  VAR_17 = (((VAR_10 / 10) << 4) +
     (VAR_10 % 10)) << 24;
  VAR_17 += (((VAR_11 / 10) << 4) +
      (VAR_11 % 10)) << 16;
  VAR_17 += ((VAR_12 / 1000) << 12) +
      ((VAR_12 / 100) << 8) +
      ((VAR_12 / 10) << 4) + (VAR_12 % 10);

  VAR_16 = FUNC_22(VAR_13, VAR_9, VAR_17, 0);
  if (VAR_16 < 0)
   break;

  VAR_16 = FUNC_20(VAR_13);
  if (VAR_16 < 0)
   break;

  VAR_13->drxd_state = VAR_4;
  VAR_13->init_done = 1;
  VAR_16 = 0;
 } while (0);
 return VAR_16;
}

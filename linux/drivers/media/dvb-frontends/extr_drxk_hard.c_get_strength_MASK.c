
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct s_cfg_agc {scalar_t__ ctrl_mode; int output_level; scalar_t__ min_output_level; scalar_t__ max_output_level; int top; } ;
struct drxk_state {struct s_cfg_agc m_atv_if_agc_cfg; struct s_cfg_agc m_atv_rf_agc_cfg; struct s_cfg_agc m_qam_if_agc_cfg; struct s_cfg_agc m_qam_rf_agc_cfg; struct s_cfg_agc m_dvbt_if_agc_cfg; struct s_cfg_agc m_dvbt_rf_agc_cfg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct drxk_state*) ;
 scalar_t__ FUNC_1 (struct drxk_state*) ;
 int FUNC_2 (struct drxk_state*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct drxk_state *VAR_5, u64 *VAR_6)
{
 int VAR_7;
 struct s_cfg_agc VAR_8, VAR_9;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;

 u16 VAR_15 = 50;
 u16 VAR_16 = 40;

 *VAR_6 = 0;

 if (FUNC_0(VAR_5)) {
  VAR_8 = VAR_5->m_dvbt_rf_agc_cfg;
  VAR_9 = VAR_5->m_dvbt_if_agc_cfg;
 } else if (FUNC_1(VAR_5)) {
  VAR_8 = VAR_5->m_qam_rf_agc_cfg;
  VAR_9 = VAR_5->m_qam_if_agc_cfg;
 } else {
  VAR_8 = VAR_5->m_atv_rf_agc_cfg;
  VAR_9 = VAR_5->m_atv_if_agc_cfg;
 }

 if (VAR_8.ctrl_mode == VAR_0) {

  VAR_7 = FUNC_2(VAR_5, VAR_4, &VAR_13);
  if (VAR_7 < 0)
   return VAR_7;


  VAR_7 = FUNC_2(VAR_5, VAR_3, &VAR_14);
  if (VAR_7 < 0)
   return VAR_7;

  if (((u32) VAR_13 + (u32) VAR_14) < 0xffff)
   VAR_8.output_level = VAR_13 + VAR_14;
  else
   VAR_8.output_level = 0xffff;


  VAR_10 += VAR_15;


  if (VAR_8.output_level < VAR_8.min_output_level)
   VAR_8.output_level = VAR_8.min_output_level;
  if (VAR_8.output_level > VAR_8.max_output_level)
   VAR_8.output_level = VAR_8.max_output_level;

  VAR_12 = (u32) (VAR_8.max_output_level - VAR_8.min_output_level);
  if (VAR_12 > 0) {
   VAR_11 += 100UL *
    ((u32)(VAR_15)) *
    ((u32)(VAR_8.output_level - VAR_8.min_output_level))
    / VAR_12;
  }
 }

 if (VAR_9.ctrl_mode == VAR_0) {
  VAR_7 = FUNC_2(VAR_5, VAR_1,
    &VAR_9.output_level);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_2(VAR_5, VAR_2,
    &VAR_9.top);
  if (VAR_7 < 0)
   return VAR_7;


  VAR_10 += (u32) VAR_16;


  if (VAR_9.output_level < VAR_9.min_output_level)
   VAR_9.output_level = VAR_9.min_output_level;
  if (VAR_9.output_level > VAR_9.max_output_level)
   VAR_9.output_level = VAR_9.max_output_level;

  VAR_12 = (u32)(VAR_9.max_output_level - VAR_9.min_output_level);
  if (VAR_12 > 0) {
   VAR_11 += 100UL *
    ((u32)(VAR_16)) *
    ((u32)(VAR_9.output_level - VAR_9.min_output_level))
    / VAR_12;
  }
 }





 if (VAR_10 > 0)
  *VAR_6 = (65535UL * VAR_11 / VAR_10 / 100);
 else
  *VAR_6 = 65535;

 return 0;
}

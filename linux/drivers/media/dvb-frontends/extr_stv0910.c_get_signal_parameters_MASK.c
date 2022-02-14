
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv {scalar_t__ receive_mode; int mod_cod; int pilots; int fectype; int is_standard_broadcast; int feroll_off; scalar_t__ is_vcm; int puncture_rate; scalar_t__ regoff; int started; } ;
typedef enum fe_stv0910_mod_cod { ____Placeholder_fe_stv0910_mod_cod } fe_stv0910_mod_cod ;
typedef enum dvbs2_fectype { ____Placeholder_dvbs2_fectype } dvbs2_fectype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct stv*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(struct stv *VAR_12)
{
 u8 VAR_13;

 if (!VAR_12->started)
  return -VAR_0;

 if (VAR_12->receive_mode == VAR_9) {
  FUNC_0(VAR_12, VAR_10 + VAR_12->regoff, &VAR_13);
  VAR_12->mod_cod = (enum fe_stv0910_mod_cod)((VAR_13 & 0x7c) >> 2);
  VAR_12->pilots = (VAR_13 & 0x01) != 0;
  VAR_12->fectype = (enum dvbs2_fectype)((VAR_13 & 0x02) >> 1);

 } else if (VAR_12->receive_mode == VAR_8) {
  FUNC_0(VAR_12, VAR_11 + VAR_12->regoff, &VAR_13);
  VAR_12->puncture_rate = VAR_6;
  switch (VAR_13 & 0x1F) {
  case 0x0d:
   VAR_12->puncture_rate = VAR_1;
   break;
  case 0x12:
   VAR_12->puncture_rate = VAR_2;
   break;
  case 0x15:
   VAR_12->puncture_rate = VAR_3;
   break;
  case 0x18:
   VAR_12->puncture_rate = VAR_4;
   break;
  case 0x1a:
   VAR_12->puncture_rate = VAR_5;
   break;
  }
  VAR_12->is_vcm = 0;
  VAR_12->is_standard_broadcast = 1;
  VAR_12->feroll_off = VAR_7;
 }
 return 0;
}

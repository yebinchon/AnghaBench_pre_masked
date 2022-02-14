
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv {scalar_t__ receive_mode; int feroll_off; int is_vcm; int is_standard_broadcast; scalar_t__ regoff; int started; } ;
typedef enum fe_stv0910_roll_off { ____Placeholder_fe_stv0910_roll_off } fe_stv0910_roll_off ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct stv*,scalar_t__,int*,int) ;

__attribute__((used)) static int FUNC_1(struct stv *VAR_5)
{
 if (!VAR_5->started)
  return -VAR_0;
 if (VAR_5->receive_mode == VAR_3) {
  u8 VAR_6[2];

  FUNC_0(VAR_5, VAR_4 + VAR_5->regoff,
     VAR_6, 2);
  VAR_5->feroll_off =
   (enum fe_stv0910_roll_off)(VAR_6[0] & 0x03);
  VAR_5->is_vcm = (VAR_6[0] & 0x10) == 0;
  VAR_5->is_standard_broadcast = (VAR_6[0] & 0xFC) == 0xF0;
 } else if (VAR_5->receive_mode == VAR_2) {
  VAR_5->is_vcm = 0;
  VAR_5->is_standard_broadcast = 1;
  VAR_5->feroll_off = VAR_1;
 }
 return 0;
}

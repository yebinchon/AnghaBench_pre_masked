
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct apm_power_info {int battery_life; int time; int ac_line_status; int battery_flag; int battery_status; scalar_t__ units; } ;


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
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct apm_power_info *VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21;
 u8 VAR_22;

 VAR_18 = FUNC_1(VAR_1);
 VAR_19 = FUNC_1(VAR_0);
 VAR_20 = FUNC_1(VAR_2);

 VAR_21 = 100 * (VAR_18 - VAR_14) /
      (VAR_13 - VAR_14);


 VAR_17->battery_life = VAR_21;


 VAR_17->units = 0;


 VAR_17->time = (2 * VAR_18);

 VAR_17->ac_line_status = (VAR_18 > VAR_12) ?
    VAR_4 : VAR_3;

 VAR_22 = FUNC_0(VAR_15);
 if (VAR_22 & VAR_16) {
  VAR_17->battery_status = VAR_9;
  VAR_17->battery_flag = 0x80;
 } else if (VAR_20 < 8) {
  VAR_17->battery_status = VAR_5;
  VAR_17->battery_flag = 0x08;
  VAR_17->ac_line_status = 0x01;
 } else if (VAR_21 <= VAR_10) {
  VAR_17->battery_status = VAR_6;
  VAR_17->battery_flag = 0x04;
 } else if (VAR_21 <= VAR_11) {
  VAR_17->battery_status = VAR_8;
  VAR_17->battery_flag = 0x02;
 } else {
  VAR_17->battery_status = VAR_7;
  VAR_17->battery_flag = 0x01;
 }
}

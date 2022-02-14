
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max8997_haptic {int type; int enabled; int mode; int pwm_divisor; int internal_mode_pattern; int pattern_cycle; int pattern_signal_period; int client; } ;


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
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct max8997_haptic *VAR_16)
{
 u8 VAR_17;

 VAR_17 = VAR_16->type << VAR_12 |
  VAR_16->enabled << VAR_1 |
  VAR_16->mode << VAR_11 | VAR_16->pwm_divisor;
 FUNC_0(VAR_16->client, VAR_2, VAR_17);

 if (VAR_16->mode == VAR_10 && VAR_16->enabled) {
  VAR_17 = VAR_16->internal_mode_pattern << VAR_0 |
   VAR_16->internal_mode_pattern << VAR_15 |
   VAR_16->internal_mode_pattern << VAR_14 |
   VAR_16->internal_mode_pattern << VAR_13;
  FUNC_0(VAR_16->client,
   VAR_5, VAR_17);

  switch (VAR_16->internal_mode_pattern) {
  case 0:
   VAR_17 = VAR_16->pattern_cycle << 4;
   FUNC_0(VAR_16->client,
    VAR_3, VAR_17);
   VAR_17 = VAR_16->pattern_signal_period;
   FUNC_0(VAR_16->client,
    VAR_6, VAR_17);
   break;

  case 1:
   VAR_17 = VAR_16->pattern_cycle;
   FUNC_0(VAR_16->client,
    VAR_3, VAR_17);
   VAR_17 = VAR_16->pattern_signal_period;
   FUNC_0(VAR_16->client,
    VAR_7, VAR_17);
   break;

  case 2:
   VAR_17 = VAR_16->pattern_cycle << 4;
   FUNC_0(VAR_16->client,
    VAR_4, VAR_17);
   VAR_17 = VAR_16->pattern_signal_period;
   FUNC_0(VAR_16->client,
    VAR_8, VAR_17);
   break;

  case 3:
   VAR_17 = VAR_16->pattern_cycle;
   FUNC_0(VAR_16->client,
    VAR_4, VAR_17);
   VAR_17 = VAR_16->pattern_signal_period;
   FUNC_0(VAR_16->client,
    VAR_9, VAR_17);
   break;

  default:
   break;
  }
 }
}

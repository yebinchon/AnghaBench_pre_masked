
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max8997_haptic {scalar_t__ mode; int pwm_period; int level; int internal_mode_pattern; int client; int pwm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct max8997_haptic *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5->mode == VAR_0) {
  unsigned int VAR_7 = VAR_5->pwm_period * VAR_5->level / 100;
  VAR_6 = FUNC_1(VAR_5->pwm, VAR_7, VAR_5->pwm_period);
 } else {
  int VAR_8;
  u8 VAR_9 = 0;

  for (VAR_8 = 0; VAR_8 <= 64; VAR_8++) {
   if (VAR_5->level <= VAR_8 * 100 / 64) {
    VAR_9 = VAR_8;
    break;
   }
  }
  switch (VAR_5->internal_mode_pattern) {
  case 0:
   FUNC_0(VAR_5->client,
    VAR_1, VAR_9);
   break;
  case 1:
   FUNC_0(VAR_5->client,
    VAR_2, VAR_9);
   break;
  case 2:
   FUNC_0(VAR_5->client,
    VAR_3, VAR_9);
   break;
  case 3:
   FUNC_0(VAR_5->client,
    VAR_4, VAR_9);
   break;
  default:
   break;
  }
 }
 return VAR_6;
}

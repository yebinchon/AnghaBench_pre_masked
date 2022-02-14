
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pc87427_sio_data {int has_fanin; int has_fanout; } ;
struct pc87427_data {int fan_enabled; int pwm_enabled; int pwm_auto_ok; int temp_enabled; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
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
 int FUNC_3 (struct device*,char*,...) ;
 struct pc87427_data* FUNC_4 (struct device*) ;
 struct pc87427_sio_data* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*,char*) ;
 int FUNC_7 (struct pc87427_data*,int ,int ) ;
 int FUNC_8 (struct pc87427_data*,int ,int ,int ) ;
 int FUNC_9 (struct pc87427_data*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_11)
{
 struct pc87427_sio_data *VAR_12 = FUNC_5(VAR_11);
 struct pc87427_data *VAR_13 = FUNC_4(VAR_11);
 int VAR_14;
 u8 VAR_15;


 VAR_15 = FUNC_7(VAR_13, VAR_1, VAR_3);
 if (!(VAR_15 & 0x80))
  FUNC_6(VAR_11, "%s module not ready!\n", "FMC");


 for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
  if (!(VAR_12->has_fanin & (1 << VAR_14)))
   continue;
  VAR_15 = FUNC_8(VAR_13, VAR_1, FUNC_1(VAR_14),
      VAR_4);
  if (VAR_15 & VAR_0)
   VAR_13->fan_enabled |= (1 << VAR_14);
 }

 if (!VAR_13->fan_enabled) {
  FUNC_3(VAR_11, "Enabling monitoring of all fans\n");
  for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
   if (!(VAR_12->has_fanin & (1 << VAR_14)))
    continue;
   FUNC_9(VAR_13, VAR_1, FUNC_1(VAR_14),
         VAR_4,
         VAR_0);
  }
  VAR_13->fan_enabled = VAR_12->has_fanin;
 }


 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  if (!(VAR_12->has_fanout & (1 << VAR_14)))
   continue;
  VAR_15 = FUNC_8(VAR_13, VAR_1, FUNC_0(VAR_14),
      VAR_5);
  if (VAR_15 & VAR_7)
   VAR_13->pwm_enabled |= (1 << VAR_14);






  if ((VAR_15 & VAR_8) == VAR_9) {
   FUNC_3(VAR_11, "PWM%d is in automatic control mode\n",
    VAR_14 + 1);
   VAR_13->pwm_auto_ok |= (1 << VAR_14);
  }
 }


 VAR_15 = FUNC_7(VAR_13, VAR_2, VAR_3);
 if (!(VAR_15 & 0x80))
  FUNC_6(VAR_11, "%s module not ready!\n", "HMC");


 for (VAR_14 = 0; VAR_14 < 6; VAR_14++) {
  VAR_15 = FUNC_8(VAR_13, VAR_2, FUNC_2(VAR_14),
      VAR_6);
  if (VAR_15 & VAR_10)
   VAR_13->temp_enabled |= (1 << VAR_14);
 }
}

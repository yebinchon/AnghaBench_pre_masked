
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct gen6_interval_setting {scalar_t__ lp1_interval; scalar_t__ lp2_interval; } ;
struct device {int dummy; } ;
struct cyapa {scalar_t__ state; struct gen6_interval_setting gen6_interval_setting; TYPE_1__* client; } ;
typedef enum cyapa_pm_stage { ____Placeholder_cyapa_pm_stage } cyapa_pm_stage ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct cyapa*) ;
 scalar_t__ FUNC_1 (struct cyapa*) ;
 int FUNC_2 (struct cyapa*,scalar_t__) ;
 int FUNC_3 (struct cyapa*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct cyapa*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (struct cyapa*,scalar_t__) ;
 int FUNC_6 (struct cyapa*,int ) ;
 int FUNC_7 (struct cyapa*,int ) ;
 int FUNC_8 (struct cyapa*,struct gen6_interval_setting*) ;
 int FUNC_9 (struct cyapa*,struct gen6_interval_setting*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct device*,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_12(struct cyapa *VAR_14,
  u8 VAR_15, u16 VAR_16, enum cyapa_pm_stage VAR_17)
{
 struct device *VAR_18 = &VAR_14->client->dev;
 struct gen6_interval_setting *VAR_19 =
   &VAR_14->gen6_interval_setting;
 u8 VAR_20;
 int VAR_21;

 if (VAR_14->state != VAR_0)
  return 0;

 if (FUNC_0(VAR_14) == VAR_12) {





  FUNC_2(VAR_14, VAR_11);
 }

 if (FUNC_4(VAR_14) &&
  FUNC_0(VAR_14) != VAR_11)
  FUNC_3(VAR_14, VAR_13);

 if (FUNC_0(VAR_14) == VAR_15) {
  if (VAR_15 == VAR_11 ||
   VAR_15 == VAR_10 ||
   VAR_15 == VAR_9 ||
   FUNC_1(VAR_14) == VAR_16) {

   return 0;
  }
 }

 if (VAR_15 == VAR_11) {
  FUNC_6(VAR_14, VAR_1);

  VAR_21 = FUNC_7(VAR_14, VAR_7);
  if (VAR_21) {
   FUNC_11(VAR_18, "enter deep sleep fail: %d\n", VAR_21);
   return VAR_21;
  }

  FUNC_2(VAR_14, VAR_11);
  return 0;
 }






 if (FUNC_0(VAR_14) == VAR_11) {
  VAR_21 = FUNC_7(VAR_14, VAR_8);
  if (VAR_21) {
   FUNC_11(VAR_18, "deep sleep wake fail: %d\n", VAR_21);
   return VAR_21;
  }
 }





 FUNC_6(VAR_14, VAR_1);

 if (VAR_15 == VAR_10) {
  VAR_21 = FUNC_5(VAR_14,
    VAR_3);
  if (VAR_21) {
   FUNC_11(VAR_18, "change to active fail: %d\n", VAR_21);
   goto out;
  }

  FUNC_2(VAR_14, VAR_10);


  FUNC_8(VAR_14, VAR_19);

 } else if (VAR_15 == VAR_9) {
  VAR_21 = FUNC_5(VAR_14,
    VAR_4);
  if (VAR_21) {
   FUNC_11(VAR_18, "fail to button only mode: %d\n", VAR_21);
   goto out;
  }

  FUNC_2(VAR_14, VAR_9);
 } else {





  if (VAR_19->lp1_interval == VAR_16) {
   VAR_20 = VAR_5;
  } else if (VAR_19->lp2_interval == VAR_16) {
   VAR_20 = VAR_6;
  } else {
   if (VAR_19->lp1_interval == 0) {
    VAR_19->lp1_interval = VAR_16;
    VAR_20 = VAR_5;
   } else {
    VAR_19->lp2_interval = VAR_16;
    VAR_20 = VAR_6;
   }
   FUNC_9(VAR_14,
       VAR_19);
  }

  VAR_21 = FUNC_5(VAR_14, VAR_20);
  if (VAR_21) {
   FUNC_11(VAR_18, "set power state to 0x%02x failed: %d\n",
    VAR_20, VAR_21);
   goto out;
  }

  FUNC_3(VAR_14, VAR_16);
  FUNC_2(VAR_14,
   FUNC_10(VAR_16));
 }

out:
 FUNC_6(VAR_14, VAR_2);
 return VAR_21;
}

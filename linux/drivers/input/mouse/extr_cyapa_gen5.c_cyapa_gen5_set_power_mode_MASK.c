
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct device {int dummy; } ;
struct cyapa {scalar_t__ state; int dev_sleep_time; TYPE_1__* client; } ;
typedef enum cyapa_pm_stage { ____Placeholder_cyapa_pm_stage } cyapa_pm_stage ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct cyapa*) ;
 scalar_t__ FUNC_1 (struct cyapa*) ;
 int FUNC_2 (struct cyapa*,scalar_t__) ;
 int FUNC_3 (struct cyapa*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct cyapa*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (struct cyapa*,scalar_t__) ;
 int FUNC_6 (struct cyapa*) ;
 scalar_t__ FUNC_7 (struct cyapa*,int ,int *) ;
 scalar_t__ FUNC_8 (struct cyapa*,int ,scalar_t__) ;
 int FUNC_9 (struct cyapa*,int ) ;
 int FUNC_10 (struct cyapa*) ;
 int FUNC_11 (struct cyapa*,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct device*,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_14(struct cyapa *VAR_15,
  u8 VAR_16, u16 VAR_17, enum cyapa_pm_stage VAR_18)
{
 struct device *VAR_19 = &VAR_15->client->dev;
 u8 VAR_20;
 int VAR_21 = 0;

 if (VAR_15->state != VAR_1)
  return 0;

 FUNC_11(VAR_15, VAR_18);

 if (FUNC_0(VAR_15) == VAR_13) {





  FUNC_2(VAR_15, VAR_12);
 }

 if (FUNC_4(VAR_15) &&
   FUNC_0(VAR_15) != VAR_12)
  if (FUNC_7(VAR_15,
    VAR_2,
    &VAR_15->dev_sleep_time) != 0)
   FUNC_3(VAR_15, VAR_14);

 if (FUNC_0(VAR_15) == VAR_16) {
  if (VAR_16 == VAR_12 ||
   VAR_16 == VAR_11 ||
   VAR_16 == VAR_10 ||
   FUNC_1(VAR_15) == VAR_17) {

   goto out;
  }
 }

 if (VAR_16 == VAR_12) {
  VAR_21 = FUNC_9(VAR_15, VAR_8);
  if (VAR_21) {
   FUNC_13(VAR_19, "enter deep sleep fail: %d\n", VAR_21);
   goto out;
  }

  FUNC_2(VAR_15, VAR_12);
  goto out;
 }






 if (FUNC_0(VAR_15) == VAR_12) {
  VAR_21 = FUNC_9(VAR_15, VAR_9);
  if (VAR_21) {
   FUNC_13(VAR_19, "deep sleep wake fail: %d\n", VAR_21);
   goto out;
  }
 }

 if (VAR_16 == VAR_11) {
  VAR_21 = FUNC_5(VAR_15,
    VAR_4);
  if (VAR_21) {
   FUNC_13(VAR_19, "change to active fail: %d\n", VAR_21);
   goto out;
  }

  FUNC_2(VAR_15, VAR_11);
 } else if (VAR_16 == VAR_10) {
  VAR_21 = FUNC_5(VAR_15,
    VAR_5);
  if (VAR_21) {
   FUNC_13(VAR_19, "fail to button only mode: %d\n", VAR_21);
   goto out;
  }

  FUNC_2(VAR_15, VAR_10);
 } else {





  if (FUNC_4(VAR_15) ||
    VAR_17 != FUNC_1(VAR_15))
   if (FUNC_8(VAR_15,
     VAR_2,
     VAR_17) == 0)
    FUNC_3(VAR_15, VAR_17);

  if (VAR_17 <= VAR_3)
   VAR_20 = VAR_7;
  else
   VAR_20 = VAR_6;
  VAR_21 = FUNC_5(VAR_15, VAR_20);
  if (VAR_21) {
   FUNC_13(VAR_19, "set power state to 0x%02x failed: %d\n",
    VAR_20, VAR_21);
   goto out;
  }
  if (VAR_18 == VAR_0)
   FUNC_6(VAR_15);

  FUNC_2(VAR_15,
   FUNC_12(VAR_17));
 }

out:
 FUNC_10(VAR_15);
 return VAR_21;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct device {int dummy; } ;
struct cyapa_pip_report_data {scalar_t__* report_head; } ;
struct cyapa {TYPE_1__* client; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 unsigned int VAR_9 ;
 size_t VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_0 (struct cyapa*,struct cyapa_pip_report_data*) ;
 int FUNC_1 (struct cyapa*,struct cyapa_pip_report_data*) ;
 int FUNC_2 (struct cyapa*,struct cyapa_pip_report_data*) ;
 int FUNC_3 (struct device*,char*,unsigned int) ;
 unsigned int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct cyapa *VAR_16,
       struct cyapa_pip_report_data *VAR_17)
{
 struct device *VAR_18 = &VAR_16->client->dev;
 unsigned int VAR_19;
 u8 VAR_20;

 VAR_19 = FUNC_4(
   &VAR_17->report_head[VAR_8]);

 if (VAR_19 == VAR_9)
  return 0;

 VAR_20 = VAR_17->report_head[VAR_10];
 if (VAR_20 == VAR_14 &&
   VAR_19 == VAR_15) {
  FUNC_5(VAR_18);
  FUNC_6(VAR_18);
  FUNC_7(VAR_18);
  return 0;
 } else if (VAR_20 != VAR_12 &&
   VAR_20 != VAR_3 &&
   VAR_20 != VAR_1 &&
   VAR_20 != VAR_7 &&
   VAR_20 != VAR_5) {

  FUNC_3(VAR_18, "invalid report_id=0x%02x\n", VAR_20);
  return -VAR_0;
 }

 if (VAR_20 == VAR_12 &&
  (VAR_19 < VAR_11 ||
   VAR_19 > VAR_13)) {

  FUNC_3(VAR_18, "invalid touch packet length=%d\n", VAR_19);
  return 0;
 }

 if ((VAR_20 == VAR_3 ||
   VAR_20 == VAR_1 ||
   VAR_20 == VAR_7) &&
  (VAR_19 < VAR_2 ||
   VAR_19 > VAR_4)) {

  FUNC_3(VAR_18, "invalid button packet length=%d\n", VAR_19);
  return 0;
 }

 if (VAR_20 == VAR_5 &&
   VAR_19 != VAR_6) {

  FUNC_3(VAR_18, "invalid proximity data, length=%d\n", VAR_19);
  return 0;
 }

 if (VAR_20 == VAR_12)
  FUNC_2(VAR_16, VAR_17);
 else if (VAR_20 == VAR_5)
  FUNC_1(VAR_16, VAR_17);
 else
  FUNC_0(VAR_16, VAR_17);

 return 0;
}

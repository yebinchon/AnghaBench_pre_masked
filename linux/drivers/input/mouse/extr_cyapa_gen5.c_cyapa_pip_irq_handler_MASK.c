
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct cyapa_pip_report_data {int * report_head; } ;
struct cyapa {unsigned int gen; int state; TYPE_1__* client; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cyapa*,int *,unsigned int) ;
 int FUNC_1 (struct cyapa*) ;
 int FUNC_2 (struct cyapa*,struct cyapa_pip_report_data*) ;
 int FUNC_3 (struct device*,char*,unsigned int,...) ;
 unsigned int FUNC_4 (int *) ;

int FUNC_5(struct cyapa *VAR_3)
{
 struct device *VAR_4 = &VAR_3->client->dev;
 struct cyapa_pip_report_data VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_3)) {
  FUNC_3(VAR_4, "invalid device state, gen=%d, state=0x%02x\n",
   VAR_3->gen, VAR_3->state);
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_3, (u8 *)&VAR_5,
   VAR_2);
 if (VAR_7 != VAR_2) {
  FUNC_3(VAR_4, "failed to read length bytes, (%d)\n", VAR_7);
  return -VAR_0;
 }

 VAR_6 = FUNC_4(
   &VAR_5.report_head[VAR_1]);
 if (VAR_6 < VAR_2) {

  FUNC_3(VAR_4, "invalid report_len=%d. bytes: %02x %02x\n",
   VAR_6, VAR_5.report_head[0],
   VAR_5.report_head[1]);
  return -VAR_0;
 }


 if (VAR_6 == VAR_2)
  return 0;

 VAR_7 = FUNC_0(VAR_3, (u8 *)&VAR_5, VAR_6);
 if (VAR_7 != VAR_6) {
  FUNC_3(VAR_4, "failed to read %d bytes report data, (%d)\n",
   VAR_6, VAR_7);
  return -VAR_0;
 }

 return FUNC_2(VAR_3, &VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stts751_priv {size_t interval; int alert_valid; int max_alert; int min_alert; int therm_trip; TYPE_1__* client; scalar_t__ last_alert_update; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int * VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct stts751_priv *VAR_6)
{
 int VAR_7;
 bool VAR_8;
 int VAR_9 = FUNC_2(VAR_5[VAR_6->interval]);





 VAR_9 += VAR_9 / 10;

 VAR_7 = FUNC_1(VAR_6->client, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(&VAR_6->client->dev, "status reg %x\n", VAR_7);
 VAR_8 = VAR_7 & (VAR_1 | VAR_2);
 if (FUNC_3(VAR_4, VAR_6->last_alert_update + VAR_9) ||
     VAR_8 || !VAR_6->alert_valid) {
  VAR_6->max_alert = 0;
  VAR_6->min_alert = 0;
  VAR_6->alert_valid = 1;
  VAR_6->last_alert_update = VAR_4;
  FUNC_0(&VAR_6->client->dev, "invalidating alert cache\n");
 }

 VAR_6->max_alert |= !!(VAR_7 & VAR_1);
 VAR_6->min_alert |= !!(VAR_7 & VAR_2);
 VAR_6->therm_trip = !!(VAR_7 & VAR_3);

 FUNC_0(&VAR_6->client->dev, "max_alert: %d, min_alert: %d, therm_trip: %d\n",
  VAR_6->max_alert, VAR_6->min_alert, VAR_6->therm_trip);

 return 0;
}

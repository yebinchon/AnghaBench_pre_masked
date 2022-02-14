
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stts751_priv {int config; int res; int interval; int therm; int hyst; int event_min; int event_max; int dev; int client; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int FUNC_3 (struct stts751_priv*,int *,int ,int ) ;
 int FUNC_4 (struct stts751_priv*,int*,int ) ;

__attribute__((used)) static int FUNC_5(struct stts751_priv *VAR_12)
{
 int VAR_13;
 int VAR_14;

 VAR_13 = FUNC_2(VAR_12->client, VAR_3);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_12->config = VAR_13;
 VAR_12->res = (VAR_13 & VAR_1) >> VAR_2;

 VAR_13 = FUNC_2(VAR_12->client, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;
 if (VAR_13 >= FUNC_0(VAR_11)) {
  FUNC_1(VAR_12->dev, "Unrecognized conversion rate 0x%x\n", VAR_13);
  return -VAR_0;
 }
 VAR_12->interval = VAR_13;

 VAR_13 = FUNC_3(VAR_12, &VAR_12->event_max,
     VAR_4, VAR_5);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_12, &VAR_12->event_min,
     VAR_7, VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_12, &VAR_12->therm, VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_12, &VAR_14, VAR_6);
 if (VAR_13)
  return VAR_13;
 VAR_12->hyst = VAR_12->therm - VAR_14;

 return 0;
}

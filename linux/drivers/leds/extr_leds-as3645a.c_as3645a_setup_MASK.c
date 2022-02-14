
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct as3645a {int fled; TYPE_1__* client; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct as3645a*,int ) ;
 int FUNC_2 (struct as3645a*,int ,int) ;
 int FUNC_3 (struct as3645a*) ;
 int FUNC_4 (struct as3645a*) ;
 int FUNC_5 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct as3645a *VAR_7)
{
 struct device *VAR_8 = &VAR_7->client->dev;
 u32 VAR_9 = 0;
 int VAR_10;


 VAR_10 = FUNC_1(VAR_7, VAR_3);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_5(VAR_8, "Fault info: %02x\n", VAR_10);

 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_7, VAR_5, 0);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_0(&VAR_7->fled, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_5(VAR_8, "AS_INDICATOR_AND_TIMER_REG: %02x\n",
  FUNC_1(VAR_7, VAR_4));
 FUNC_5(VAR_8, "AS_CURRENT_SET_REG: %02x\n",
  FUNC_1(VAR_7, VAR_1));
 FUNC_5(VAR_8, "AS_CONTROL_REG: %02x\n",
  FUNC_1(VAR_7, VAR_0));

 return VAR_10 & ~VAR_2 ? -VAR_6 : 0;
}

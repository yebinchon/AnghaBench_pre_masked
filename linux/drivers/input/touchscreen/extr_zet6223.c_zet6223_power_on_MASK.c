
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zet6223_ts {TYPE_2__* supplies; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_6__ {char* supply; } ;
struct TYPE_5__ {struct device dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int ,struct zet6223_ts*) ;
 int FUNC_3 (struct device*,int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct zet6223_ts *VAR_2)
{
 struct device *VAR_3 = &VAR_2->client->dev;
 int VAR_4;

 VAR_2->supplies[0].supply = "vio";
 VAR_2->supplies[1].supply = "vcc";

 VAR_4 = FUNC_3(VAR_3, FUNC_0(VAR_2->supplies),
     VAR_2->supplies);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(FUNC_0(VAR_2->supplies), VAR_2->supplies);
 if (VAR_4)
  return VAR_4;

 FUNC_4(VAR_0);

 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_3, "failed to install poweroff action: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ektf2127_ts {TYPE_1__* client; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device dev; } ;



 char VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,char) ;
 int FUNC_2 (struct ektf2127_ts*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct ektf2127_ts *VAR_5 = VAR_4;
 struct device *VAR_6 = &VAR_5->client->dev;
 char VAR_7[VAR_1];
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5->client, VAR_7, VAR_1);
 if (VAR_8 != VAR_1) {
  FUNC_1(VAR_6, "Error reading touch data: %d\n", VAR_8);
  goto out;
 }

 switch (VAR_7[0]) {
 case 128:
  FUNC_2(VAR_5, VAR_7);
  break;

 case 129:
  if (VAR_7[1] == VAR_0)
   FUNC_0(VAR_6, "Environment is electrically noisy\n");
  break;

 case 130:
 case 131:
  break;

 default:
  FUNC_1(VAR_6, "Unexpected packet header byte %#02x\n", VAR_7[0]);
  break;
 }

out:
 return VAR_2;
}

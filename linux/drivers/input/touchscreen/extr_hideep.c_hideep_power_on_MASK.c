
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hideep_ts {TYPE_1__* client; int reg; scalar_t__ reset_gpio; int vcc_vid; int vcc_vdd; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct hideep_ts *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_4(VAR_1->vcc_vdd);
 if (VAR_2)
  FUNC_0(&VAR_1->client->dev,
   "failed to enable 'vdd' regulator: %d", VAR_2);

 FUNC_5(999, 1000);

 VAR_2 = FUNC_4(VAR_1->vcc_vid);
 if (VAR_2)
  FUNC_0(&VAR_1->client->dev,
   "failed to enable 'vcc_vid' regulator: %d",
   VAR_2);

 FUNC_2(30);

 if (VAR_1->reset_gpio) {
  FUNC_1(VAR_1->reset_gpio, 0);
 } else {
  VAR_2 = FUNC_3(VAR_1->reg, VAR_0, 0x01);
  if (VAR_2)
   FUNC_0(&VAR_1->client->dev,
    "failed to send 'reset' command: %d\n", VAR_2);
 }

 FUNC_2(50);

 return VAR_2;
}

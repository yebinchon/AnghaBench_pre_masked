
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hideep_ts {TYPE_1__* client; int xfer_buf; int reg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hideep_ts*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct hideep_ts *VAR_6 = VAR_5;
 int VAR_7;

 FUNC_0(VAR_1 > VAR_2);

 VAR_7 = FUNC_3(VAR_6->reg, VAR_0,
     VAR_6->xfer_buf, VAR_1 / 2);
 if (VAR_7) {
  FUNC_1(&VAR_6->client->dev, "failed to read events: %d\n", VAR_7);
  goto out;
 }

 FUNC_2(VAR_6);

out:
 return VAR_3;
}

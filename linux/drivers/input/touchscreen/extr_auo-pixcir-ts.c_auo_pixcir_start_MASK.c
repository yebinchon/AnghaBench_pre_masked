
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int irq; int dev; } ;
struct auo_pixcir_ts {int stopped; struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (struct auo_pixcir_ts*,int) ;
 int FUNC_1 (struct auo_pixcir_ts*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct auo_pixcir_ts *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->client;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (VAR_3 < 0) {
  FUNC_2(&VAR_2->dev, "could not set power mode, %d\n",
   VAR_3);
  return VAR_3;
 }

 VAR_1->stopped = 0;
 FUNC_5();
 FUNC_4(VAR_2->irq);

 VAR_3 = FUNC_0(VAR_1, 1);
 if (VAR_3 < 0) {
  FUNC_2(&VAR_2->dev, "could not enable interrupt, %d\n",
   VAR_3);
  FUNC_3(VAR_2->irq);
  return VAR_3;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int irq; int dev; } ;
struct auo_pixcir_ts {int stopped; int wait; struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (struct auo_pixcir_ts*,int ) ;
 int FUNC_1 (struct auo_pixcir_ts*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct auo_pixcir_ts *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->client;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, 0);
 if (VAR_3 < 0) {
  FUNC_2(&VAR_2->dev, "could not disable interrupt, %d\n",
   VAR_3);
  return VAR_3;
 }


 FUNC_3(VAR_2->irq);
 VAR_1->stopped = 1;
 FUNC_4();
 FUNC_5(&VAR_1->wait);

 return FUNC_1(VAR_1, VAR_0);
}

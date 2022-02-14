
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pca954x {scalar_t__ irq; TYPE_1__* chip; struct i2c_client* client; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int nchans; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct i2c_mux_core*) ;
 struct pca954x* FUNC_2 (struct i2c_mux_core*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(struct i2c_mux_core *VAR_1)
{
 struct pca954x *VAR_2 = FUNC_2(VAR_1);
 struct i2c_client *VAR_3 = VAR_2->client;
 int VAR_4, VAR_5;

 FUNC_0(&VAR_3->dev, &VAR_0);

 if (VAR_2->irq) {
  for (VAR_4 = 0; VAR_4 < VAR_2->chip->nchans; VAR_4++) {
   VAR_5 = FUNC_5(VAR_2->irq, VAR_4);
   FUNC_3(VAR_5);
  }
  FUNC_4(VAR_2->irq);
 }
 FUNC_1(VAR_1);
}

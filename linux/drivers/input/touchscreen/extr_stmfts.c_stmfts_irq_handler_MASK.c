
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmfts_data {int mutex; TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct stmfts_data*) ;
 int FUNC_4 (struct stmfts_data*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct stmfts_data *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_1(&VAR_3->mutex);

 VAR_4 = FUNC_4(VAR_3);
 if (FUNC_5(VAR_4))
  FUNC_0(&VAR_3->client->dev,
   "failed to read events: %d\n", VAR_4);
 else
  FUNC_3(VAR_3);

 FUNC_2(&VAR_3->mutex);
 return VAR_0;
}

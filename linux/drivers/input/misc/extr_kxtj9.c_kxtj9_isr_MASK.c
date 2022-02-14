
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kxtj9_data {TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct kxtj9_data*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct kxtj9_data *VAR_4 = VAR_3;
 int VAR_5;


 FUNC_2(VAR_4);

 VAR_5 = FUNC_1(VAR_4->client, VAR_0);
 if (VAR_5 < 0)
  FUNC_0(&VAR_4->client->dev,
   "error clearing interrupt status: %d\n", VAR_5);

 return VAR_1;
}

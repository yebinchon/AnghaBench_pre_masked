
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct goodix_ts_data {TYPE_1__* client; int irq_flags; } ;
struct TYPE_2__ {int name; int irq; int dev; } ;


 int FUNC_0 (int *,int ,int *,int ,int ,int ,struct goodix_ts_data*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct goodix_ts_data *VAR_1)
{
 return FUNC_0(&VAR_1->client->dev, VAR_1->client->irq,
      ((void*)0), VAR_0,
      VAR_1->irq_flags, VAR_1->client->name, VAR_1);
}

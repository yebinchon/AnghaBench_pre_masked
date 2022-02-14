
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxt_data {int reset_completion; int irq; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mxt_data*) ;
 int FUNC_4 (struct mxt_data*,int ,int ,int) ;
 int FUNC_5 (struct mxt_data*,int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mxt_data *VAR_4)
{
 struct device *VAR_5 = &VAR_4->client->dev;
 int VAR_6 = 0;

 FUNC_0(VAR_5, "Resetting device\n");

 FUNC_1(VAR_4->irq);

 FUNC_6(&VAR_4->reset_completion);

 VAR_6 = FUNC_4(VAR_4, VAR_0, VAR_3, 0);
 if (VAR_6)
  return VAR_6;


 FUNC_2(VAR_1);

 FUNC_3(VAR_4);

 VAR_6 = FUNC_5(VAR_4, &VAR_4->reset_completion,
          VAR_2);
 if (VAR_6)
  return VAR_6;

 return 0;
}

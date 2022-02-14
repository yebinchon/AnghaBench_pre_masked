
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bma150_data {scalar_t__ mode; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bma150_data*,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bma150_data *VAR_1)
{
 FUNC_1(&VAR_1->client->dev);

 if (VAR_1->mode != VAR_0)
  FUNC_0(VAR_1, VAR_0);
}

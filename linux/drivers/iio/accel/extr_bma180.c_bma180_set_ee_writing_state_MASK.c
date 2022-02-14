
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bma180_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bma180_data*,int ,int ,int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct bma180_data *VAR_2, bool VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_1, VAR_3);

 if (VAR_4)
  FUNC_1(&VAR_2->client->dev,
   "failed to set ee writing state %d\n", VAR_3);

 return VAR_4;
}

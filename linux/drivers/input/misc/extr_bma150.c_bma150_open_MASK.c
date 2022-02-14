
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bma150_data {scalar_t__ mode; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bma150_data*,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct bma150_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->client->dev);
 if (VAR_3 < 0 && VAR_3 != -VAR_1)
  return VAR_3;





 if (VAR_2->mode != VAR_0) {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}

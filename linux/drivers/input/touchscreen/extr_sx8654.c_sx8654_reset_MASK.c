
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx8654 {TYPE_1__* client; scalar_t__ gpio_reset; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sx8654 *VAR_2)
{
 int VAR_3;

 if (VAR_2->gpio_reset) {
  FUNC_1(VAR_2->gpio_reset, 1);
  FUNC_3(2);
  FUNC_1(VAR_2->gpio_reset, 0);
 } else {
  FUNC_0(&VAR_2->client->dev, "NRST unavailable, try softreset\n");
  VAR_3 = FUNC_2(VAR_2->client, VAR_0,
      VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}

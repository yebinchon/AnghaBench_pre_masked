
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int prox_power; } ;
struct tsl2772_chip {TYPE_2__* client; TYPE_1__ settings; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_5__ {TYPE_3__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 int FUNC_1 (struct device_node*,char*,int*) ;
 int** VAR_1 ;

__attribute__((used)) static int FUNC_2(struct tsl2772_chip *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->client->dev.of_node;
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_3, "led-max-microamp", &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 for (VAR_6 = 0; VAR_1[VAR_6][0] != 0; VAR_6++) {
  if (VAR_5 == VAR_1[VAR_6][0]) {
   VAR_2->settings.prox_power = VAR_1[VAR_6][1];
   return 0;
  }
 }

 FUNC_0(&VAR_2->client->dev, "Invalid value %d for led-max-microamp\n",
  VAR_5);

 return -VAR_0;

}

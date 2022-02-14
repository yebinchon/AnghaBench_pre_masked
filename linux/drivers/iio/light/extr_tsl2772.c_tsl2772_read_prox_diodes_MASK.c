
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tsl2772_chip {TYPE_1__* client; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*,char*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct tsl2772_chip *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->client->dev.of_node;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10[VAR_3];

 VAR_7 = FUNC_1(VAR_5, "amstaos,proximity-diodes");
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = VAR_7;
 if (VAR_8 > VAR_3)
  VAR_8 = VAR_3;

 VAR_7 = FUNC_2(VAR_5, "amstaos,proximity-diodes",
      VAR_10, VAR_8);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_4->client->dev,
   "Invalid value for amstaos,proximity-diodes: %d.\n",
   VAR_7);
  return VAR_7;
 }

 VAR_9 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  if (VAR_10[VAR_6] == 0)
   VAR_9 |= VAR_1;
  else if (VAR_10[VAR_6] == 1)
   VAR_9 |= VAR_2;
  else {
   FUNC_0(&VAR_4->client->dev,
    "Invalid value %d in amstaos,proximity-diodes.\n",
    VAR_10[VAR_6]);
   return -VAR_0;
  }
 }

 return 0;
}

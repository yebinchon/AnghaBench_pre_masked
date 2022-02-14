
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsl2583_chip {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tsl2583_chip *VAR_0, bool VAR_1)
{
 int VAR_2;

 if (VAR_1) {
  VAR_2 = FUNC_0(&VAR_0->client->dev);
  if (VAR_2 < 0)
   FUNC_3(&VAR_0->client->dev);
 } else {
  FUNC_1(&VAR_0->client->dev);
  VAR_2 = FUNC_2(&VAR_0->client->dev);
 }

 return VAR_2;
}

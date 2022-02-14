
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsc2007 {int (* get_pendown_state ) (int *) ;TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;

bool FUNC_1(struct tsc2007 *VAR_0)
{
 if (!VAR_0->get_pendown_state)
  return 1;

 return VAR_0->get_pendown_state(&VAR_0->client->dev);
}

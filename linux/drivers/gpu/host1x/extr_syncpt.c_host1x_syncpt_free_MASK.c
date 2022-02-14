
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_syncpt {int client_managed; TYPE_1__* host; int * name; int * client; int * base; } ;
struct TYPE_2__ {int syncpt_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct host1x_syncpt *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(&VAR_0->host->syncpt_mutex);

 FUNC_0(VAR_0->base);
 FUNC_1(VAR_0->name);
 VAR_0->base = ((void*)0);
 VAR_0->client = ((void*)0);
 VAR_0->name = ((void*)0);
 VAR_0->client_managed = 0;

 FUNC_3(&VAR_0->host->syncpt_mutex);
}

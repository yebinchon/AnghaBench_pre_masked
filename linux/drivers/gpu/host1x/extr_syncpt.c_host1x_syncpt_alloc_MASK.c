
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_syncpt {char* name; int client_managed; int * base; struct host1x_client* client; int id; } ;
struct host1x_client {int dev; } ;
struct host1x {int syncpt_mutex; TYPE_1__* info; struct host1x_syncpt* syncpt; } ;
struct TYPE_2__ {unsigned int nb_pts; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct host1x*) ;
 char* FUNC_3 (int ,char*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct host1x_syncpt *FUNC_6(struct host1x *VAR_3,
       struct host1x_client *VAR_4,
       unsigned long VAR_5)
{
 struct host1x_syncpt *VAR_6 = VAR_3->syncpt;
 unsigned int VAR_7;
 char *VAR_8;

 FUNC_4(&VAR_3->syncpt_mutex);

 for (VAR_7 = 0; VAR_7 < VAR_3->info->nb_pts && VAR_6->name; VAR_7++, VAR_6++)
  ;

 if (VAR_7 >= VAR_3->info->nb_pts)
  goto unlock;

 if (VAR_5 & VAR_2) {
  VAR_6->base = FUNC_2(VAR_3);
  if (!VAR_6->base)
   goto unlock;
 }

 VAR_8 = FUNC_3(VAR_0, "%02u-%s", VAR_6->id,
    VAR_4 ? FUNC_0(VAR_4->dev) : ((void*)0));
 if (!VAR_8)
  goto free_base;

 VAR_6->client = VAR_4;
 VAR_6->name = VAR_8;

 if (VAR_5 & VAR_1)
  VAR_6->client_managed = 1;
 else
  VAR_6->client_managed = 0;

 FUNC_5(&VAR_3->syncpt_mutex);
 return VAR_6;

free_base:
 FUNC_1(VAR_6->base);
 VAR_6->base = ((void*)0);
unlock:
 FUNC_5(&VAR_3->syncpt_mutex);
 return ((void*)0);
}

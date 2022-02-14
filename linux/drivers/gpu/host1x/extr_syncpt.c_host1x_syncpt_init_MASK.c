
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_syncpt_base {unsigned int id; } ;
struct host1x_syncpt {unsigned int id; struct host1x* host; } ;
struct host1x {int nop_sp; struct host1x_syncpt_base* bases; struct host1x_syncpt* syncpt; int syncpt_mutex; TYPE_1__* info; int dev; } ;
struct TYPE_2__ {unsigned int nb_pts; unsigned int nb_bases; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,unsigned int,int,int ) ;
 int FUNC_1 (struct host1x*,struct host1x_syncpt*,int *) ;
 int FUNC_2 (struct host1x*) ;
 int FUNC_3 (struct host1x*,int *,int ) ;
 int FUNC_4 (struct host1x*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct host1x *VAR_2)
{
 struct host1x_syncpt_base *VAR_3;
 struct host1x_syncpt *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(VAR_2->dev, VAR_2->info->nb_pts, sizeof(*VAR_4),
         VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2->dev, VAR_2->info->nb_bases, sizeof(*VAR_3),
        VAR_1);
 if (!VAR_3)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2->info->nb_pts; VAR_5++) {
  VAR_4[VAR_5].id = VAR_5;
  VAR_4[VAR_5].host = VAR_2;






  FUNC_1(VAR_2, &VAR_4[VAR_5], ((void*)0));
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->info->nb_bases; VAR_5++)
  VAR_3[VAR_5].id = VAR_5;

 FUNC_5(&VAR_2->syncpt_mutex);
 VAR_2->syncpt = VAR_4;
 VAR_2->bases = VAR_3;

 FUNC_4(VAR_2);
 FUNC_2(VAR_2);


 VAR_2->nop_sp = FUNC_3(VAR_2, ((void*)0), 0);
 if (!VAR_2->nop_sp)
  return -VAR_0;

 return 0;
}

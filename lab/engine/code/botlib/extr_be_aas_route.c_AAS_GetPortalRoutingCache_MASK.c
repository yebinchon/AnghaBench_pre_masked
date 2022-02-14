
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int travelflags; int cluster; int areanum; int starttraveltime; int type; int time; struct TYPE_10__* prev; struct TYPE_10__* next; int origin; } ;
typedef TYPE_2__ aas_routingcache_t ;
struct TYPE_11__ {TYPE_2__** portalcache; TYPE_1__* areas; int numportals; } ;
struct TYPE_9__ {int center; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ) ;
 TYPE_3__ VAR_1 ;

aas_routingcache_t *FUNC_6(int VAR_2, int VAR_3, int VAR_4)
{
 aas_routingcache_t *VAR_5;


 for (VAR_5 = VAR_1.portalcache[VAR_3]; VAR_5; VAR_5 = VAR_5->next)
 {
  if (VAR_5->travelflags == VAR_4) break;
 }

 if (!VAR_5)
 {
  VAR_5 = FUNC_0(VAR_1.numportals);
  VAR_5->cluster = VAR_2;
  VAR_5->areanum = VAR_3;
  FUNC_5(VAR_1.areas[VAR_3].center, VAR_5->origin);
  VAR_5->starttraveltime = 1;
  VAR_5->travelflags = VAR_4;

  VAR_5->prev = ((void*)0);
  VAR_5->next = VAR_1.portalcache[VAR_3];
  if (VAR_1.portalcache[VAR_3]) VAR_1.portalcache[VAR_3]->prev = VAR_5;
  VAR_1.portalcache[VAR_3] = VAR_5;

  FUNC_4(VAR_5);
 }
 else
 {
  FUNC_3(VAR_5);
 }

 VAR_5->time = FUNC_2();
 VAR_5->type = VAR_0;
 FUNC_1(VAR_5);
 return VAR_5;
}

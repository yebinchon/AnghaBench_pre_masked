
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qhandle_t ;
struct TYPE_5__ {int time; double alpha; int roll; int endtime; int startfade; int width; int height; int endheight; int endwidth; int rotate; int org; int type; scalar_t__ pshader; scalar_t__ alphavel; struct TYPE_5__* next; } ;
typedef TYPE_1__ cparticle_t ;
struct TYPE_6__ {int time; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;

void FUNC_3 (qhandle_t VAR_5, vec3_t VAR_6, int VAR_7, int VAR_8, float VAR_9)
{
 cparticle_t *VAR_10;

 if (!VAR_5)
  FUNC_0 ("CG_ParticleImpactSmokePuff pshader == ZERO!\n");

 if (!VAR_3)
  return;

 VAR_10 = VAR_3;
 VAR_3 = VAR_10->next;
 VAR_10->next = VAR_1;
 VAR_1 = VAR_10;
 VAR_10->time = VAR_2.time;
 VAR_10->alpha = 1.0;
 VAR_10->alphavel = 0;
 VAR_10->roll = FUNC_2()%179;

 VAR_10->pshader = VAR_5;

 if (VAR_8 > 0)
  VAR_10->endtime = VAR_2.time + VAR_8;
 else
  VAR_10->endtime = VAR_8;

 VAR_10->startfade = VAR_2.time;

 VAR_10->width = VAR_7;
 VAR_10->height = VAR_7;

 VAR_10->endheight = VAR_7;
 VAR_10->endwidth = VAR_7;

 VAR_10->type = VAR_0;

 FUNC_1( VAR_6, VAR_10->org );

 VAR_10->rotate = VAR_4;
}

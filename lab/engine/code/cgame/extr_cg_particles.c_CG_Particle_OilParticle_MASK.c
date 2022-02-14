
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ qhandle_t ;
struct TYPE_9__ {int time; double alpha; int roll; float endtime; float startfade; int width; int height; int endheight; int endwidth; int* vel; float snum; int* accel; int rotate; int org; int type; scalar_t__ pshader; scalar_t__ alphavel; struct TYPE_9__* next; } ;
typedef TYPE_2__ cparticle_t ;
struct TYPE_8__ {int time; int* origin2; int origin; } ;
struct TYPE_10__ {TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_11__ {int time; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;

void FUNC_4 (qhandle_t VAR_5, centity_t *VAR_6)
{
 cparticle_t *VAR_7;

 int VAR_8;
 int VAR_9;
 float VAR_10;

 float VAR_11 = 1500;

 VAR_8 = VAR_2.time;
 VAR_9 = VAR_2.time + VAR_6->currentState.time;

 VAR_10 =(float)1 - ((float)VAR_8 / (float)VAR_9);

 if (!VAR_5)
  FUNC_0 ("CG_Particle_OilParticle == ZERO!\n");

 if (!VAR_3)
  return;
 VAR_7 = VAR_3;
 VAR_3 = VAR_7->next;
 VAR_7->next = VAR_1;
 VAR_1 = VAR_7;
 VAR_7->time = VAR_2.time;
 VAR_7->alpha = 1.0;
 VAR_7->alphavel = 0;
 VAR_7->roll = 0;

 VAR_7->pshader = VAR_5;

 VAR_7->endtime = VAR_2.time + VAR_11;

 VAR_7->startfade = VAR_7->endtime;

 VAR_7->width = 1;
 VAR_7->height = 3;

 VAR_7->endheight = 3;
 VAR_7->endwidth = 1;

 VAR_7->type = VAR_0;

 FUNC_2(VAR_6->currentState.origin, VAR_7->org );

 VAR_7->vel[0] = (VAR_6->currentState.origin2[0] * (16 * VAR_10));
 VAR_7->vel[1] = (VAR_6->currentState.origin2[1] * (16 * VAR_10));
 VAR_7->vel[2] = (VAR_6->currentState.origin2[2]);

 VAR_7->snum = 1.0f;

 FUNC_1( VAR_7->accel );

 VAR_7->accel[2] = -20;

 VAR_7->rotate = VAR_4;

 VAR_7->roll = FUNC_3()%179;

 VAR_7->alpha = 0.75;

}

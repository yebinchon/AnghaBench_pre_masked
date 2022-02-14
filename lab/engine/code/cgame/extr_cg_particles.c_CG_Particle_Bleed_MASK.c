
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qhandle_t ;
struct TYPE_5__ {double alpha; int roll; int width; int height; int endheight; int endwidth; int* vel; int color; int rotate; int accel; int org; int type; scalar_t__ startfade; scalar_t__ endtime; scalar_t__ pshader; scalar_t__ alphavel; scalar_t__ time; struct TYPE_5__* next; } ;
typedef TYPE_1__ cparticle_t ;
struct TYPE_6__ {scalar_t__ time; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;

void FUNC_4 (qhandle_t VAR_6, vec3_t VAR_7, vec3_t VAR_8, int VAR_9, int VAR_10)
{
 cparticle_t *VAR_11;

 if (!VAR_6)
  FUNC_0 ("CG_Particle_Bleed pshader == ZERO!\n");

 if (!VAR_4)
  return;
 VAR_11 = VAR_4;
 VAR_4 = VAR_11->next;
 VAR_11->next = VAR_2;
 VAR_2 = VAR_11;
 VAR_11->time = VAR_3.time;
 VAR_11->alpha = 1.0;
 VAR_11->alphavel = 0;
 VAR_11->roll = 0;

 VAR_11->pshader = VAR_6;

 VAR_11->endtime = VAR_3.time + VAR_10;

 if (VAR_9)
  VAR_11->startfade = VAR_3.time;
 else
  VAR_11->startfade = VAR_3.time + 100;

 VAR_11->width = 4;
 VAR_11->height = 4;

 VAR_11->endheight = 4+FUNC_3()%3;
 VAR_11->endwidth = VAR_11->endheight;

 VAR_11->type = VAR_1;

 FUNC_2( VAR_7, VAR_11->org );
 VAR_11->vel[0] = 0;
 VAR_11->vel[1] = 0;
 VAR_11->vel[2] = -20;
 FUNC_1( VAR_11->accel );

 VAR_11->rotate = VAR_5;

 VAR_11->roll = FUNC_3()%179;

 VAR_11->color = VAR_0;
 VAR_11->alpha = 0.75;

}

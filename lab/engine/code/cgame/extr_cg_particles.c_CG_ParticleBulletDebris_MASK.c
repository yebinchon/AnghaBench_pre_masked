
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void** vec3_t ;
struct TYPE_8__ {double alpha; double height; double width; double endheight; double endwidth; int* vel; int* accel; int org; int type; int pshader; scalar_t__ alphavel; int color; scalar_t__ startfade; scalar_t__ endtime; scalar_t__ time; struct TYPE_8__* next; } ;
typedef TYPE_2__ cparticle_t ;
struct TYPE_10__ {scalar_t__ time; } ;
struct TYPE_7__ {int tracerShader; } ;
struct TYPE_9__ {TYPE_1__ media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,int ) ;
 TYPE_2__* VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_2__* VAR_5 ;

void FUNC_1 (vec3_t VAR_6, vec3_t VAR_7, int VAR_8)
{

 cparticle_t *VAR_9;

 if (!VAR_5)
  return;
 VAR_9 = VAR_5;
 VAR_5 = VAR_9->next;
 VAR_9->next = VAR_2;
 VAR_2 = VAR_9;
 VAR_9->time = VAR_3.time;

 VAR_9->endtime = VAR_3.time + VAR_8;
 VAR_9->startfade = VAR_3.time + VAR_8/2;

 VAR_9->color = VAR_0;
 VAR_9->alpha = 1.0;
 VAR_9->alphavel = 0;

 VAR_9->height = 0.5;
 VAR_9->width = 0.5;
 VAR_9->endheight = 0.5;
 VAR_9->endwidth = 0.5;

 VAR_9->pshader = VAR_4.media.tracerShader;

 VAR_9->type = VAR_1;

 FUNC_0(VAR_6, VAR_9->org);

 VAR_9->vel[0] = VAR_7[0];
 VAR_9->vel[1] = VAR_7[1];
 VAR_9->vel[2] = VAR_7[2];
 VAR_9->accel[0] = VAR_9->accel[1] = VAR_9->accel[2] = 0;

 VAR_9->accel[2] = -60;
 VAR_9->vel[2] += -20;

}

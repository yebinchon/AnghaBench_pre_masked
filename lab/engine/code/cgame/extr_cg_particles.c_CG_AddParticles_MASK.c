
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_7__ {double time; float alpha; float alphavel; scalar_t__ type; double endtime; double* org; float* vel; float* accel; struct TYPE_7__* next; scalar_t__ color; } ;
typedef TYPE_2__ cparticle_t ;
struct TYPE_6__ {int * viewaxis; } ;
struct TYPE_8__ {double time; TYPE_1__ refdef; } ;


 int FUNC_0 (double*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,double*,float) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* VAR_9 ;
 TYPE_3__ VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 double VAR_13 ;
 int VAR_14 ;
 double VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ,double*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

void FUNC_5 (void)
{
 cparticle_t *VAR_21, *VAR_22;
 float VAR_23;
 float VAR_24, VAR_25;
 vec3_t VAR_26;
 cparticle_t *VAR_27, *VAR_28;
 vec3_t VAR_29;

 if (!VAR_12)
  FUNC_2 ();

 FUNC_3( VAR_10.refdef.viewaxis[0], VAR_18 );
 FUNC_3( VAR_10.refdef.viewaxis[1], VAR_19 );
 FUNC_3( VAR_10.refdef.viewaxis[2], VAR_20 );

 FUNC_4( VAR_10.refdef.viewaxis[0], VAR_29 );
 VAR_15 += ((VAR_10.time - VAR_13) * 0.1) ;
 VAR_29[VAR_8] += (VAR_15*0.9);
 FUNC_0 ( VAR_29, VAR_14, VAR_16, VAR_17);

 VAR_13 = VAR_10.time;

 VAR_27 = ((void*)0);
 VAR_28 = ((void*)0);

 for (VAR_21=VAR_9 ; VAR_21 ; VAR_21=VAR_22)
 {

  VAR_22 = VAR_21->next;

  VAR_24 = (VAR_10.time - VAR_21->time)*0.001;

  VAR_23 = VAR_21->alpha + VAR_24*VAR_21->alphavel;
  if (VAR_23 <= 0)
  {
   VAR_21->next = VAR_11;
   VAR_11 = VAR_21;
   VAR_21->type = 0;
   VAR_21->color = 0;
   VAR_21->alpha = 0;
   continue;
  }

  if (VAR_21->type == VAR_4 || VAR_21->type == VAR_0 || VAR_21->type == VAR_2 || VAR_21->type == VAR_5)
  {
   if (VAR_10.time > VAR_21->endtime)
   {
    VAR_21->next = VAR_11;
    VAR_11 = VAR_21;
    VAR_21->type = 0;
    VAR_21->color = 0;
    VAR_21->alpha = 0;

    continue;
   }

  }

  if (VAR_21->type == VAR_7)
  {
   if (VAR_10.time > VAR_21->endtime)
   {
    VAR_21->next = VAR_11;
    VAR_11 = VAR_21;
    VAR_21->type = 0;
    VAR_21->color = 0;
    VAR_21->alpha = 0;

    continue;
   }
  }


  if (VAR_21->type == VAR_3)
  {
   if (VAR_10.time > VAR_21->endtime)
   {
    VAR_21->next = VAR_11;
    VAR_11 = VAR_21;
    VAR_21->type = 0;
    VAR_21->color = 0;
    VAR_21->alpha = 0;
    continue;
   }

  }

  if ((VAR_21->type == VAR_1 || VAR_21->type == VAR_6) && VAR_21->endtime < 0) {

   FUNC_1 (VAR_21, VAR_21->org, VAR_23);
   VAR_21->next = VAR_11;
   VAR_11 = VAR_21;
   VAR_21->type = 0;
   VAR_21->color = 0;
   VAR_21->alpha = 0;
   continue;
  }

  VAR_21->next = ((void*)0);
  if (!VAR_28)
   VAR_27 = VAR_28 = VAR_21;
  else
  {
   VAR_28->next = VAR_21;
   VAR_28 = VAR_21;
  }

  if (VAR_23 > 1.0)
   VAR_23 = 1;

  VAR_25 = VAR_24*VAR_24;

  VAR_26[0] = VAR_21->org[0] + VAR_21->vel[0]*VAR_24 + VAR_21->accel[0]*VAR_25;
  VAR_26[1] = VAR_21->org[1] + VAR_21->vel[1]*VAR_24 + VAR_21->accel[1]*VAR_25;
  VAR_26[2] = VAR_21->org[2] + VAR_21->vel[2]*VAR_24 + VAR_21->accel[2]*VAR_25;

  FUNC_1 (VAR_21, VAR_26, VAR_23);
 }

 VAR_9 = VAR_27;
}

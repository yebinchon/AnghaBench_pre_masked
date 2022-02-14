
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct aas_predictroute_s {int stopevent; int endarea; int endcontents; int endtravelflags; int time; int endpos; } ;
struct TYPE_6__ {int numareas; int firstarea; } ;
typedef TYPE_2__ aas_reachabilityareas_t ;
struct TYPE_7__ {size_t areanum; int end; int traveltype; scalar_t__ traveltime; int start; } ;
typedef TYPE_3__ aas_reachability_t ;
struct TYPE_8__ {int numareas; int* reachabilityareaindex; TYPE_1__* areasettings; TYPE_2__* reachabilityareas; TYPE_3__* reachability; } ;
struct TYPE_5__ {int contents; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int,int ,int,int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_5(struct aas_predictroute_s *VAR_8, int VAR_9, vec3_t VAR_10,
       int VAR_11, int VAR_12, int VAR_13, int VAR_14,
       int VAR_15, int VAR_16, int VAR_17, int VAR_18)
{
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 vec3_t VAR_24;
 aas_reachability_t *VAR_25;
 aas_reachabilityareas_t *VAR_26;


 VAR_8->stopevent = VAR_2;
 VAR_8->endarea = VAR_11;
 VAR_8->endcontents = 0;
 VAR_8->endtravelflags = 0;
 FUNC_4(VAR_10, VAR_8->endpos);
 VAR_8->time = 0;

 VAR_19 = VAR_9;
 FUNC_4(VAR_10, VAR_24);

 for (VAR_21 = 0; VAR_19 != VAR_11 && (!VAR_13 || VAR_21 < VAR_13) && VAR_21 < VAR_5.numareas; VAR_21++)
 {
  VAR_20 = FUNC_1(VAR_19, VAR_24, VAR_11, VAR_12);
  if (!VAR_20)
  {
   VAR_8->stopevent = VAR_3;
   return VAR_6;
  }
  VAR_25 = &VAR_5.reachability[VAR_20];

  if (VAR_15 & VAR_4)
  {
   if (FUNC_3(VAR_25->traveltype) & VAR_17)
   {
    VAR_8->stopevent = VAR_4;
    VAR_8->endarea = VAR_19;
    VAR_8->endcontents = VAR_5.areasettings[VAR_19].contents;
    VAR_8->endtravelflags = FUNC_3(VAR_25->traveltype);
    FUNC_4(VAR_25->start, VAR_8->endpos);
    return VAR_7;
   }
   if (FUNC_0(VAR_25->areanum) & VAR_17)
   {
    VAR_8->stopevent = VAR_4;
    VAR_8->endarea = VAR_25->areanum;
    VAR_8->endcontents = VAR_5.areasettings[VAR_25->areanum].contents;
    VAR_8->endtravelflags = FUNC_0(VAR_25->areanum);
    FUNC_4(VAR_25->end, VAR_8->endpos);
    VAR_8->time += FUNC_2(VAR_9, VAR_10, VAR_25->start);
    VAR_8->time += VAR_25->traveltime;
    return VAR_7;
   }
  }
  VAR_26 = &VAR_5.reachabilityareas[VAR_20];
  for (VAR_22 = 0; VAR_22 < VAR_26->numareas + 1; VAR_22++)
  {
   if (VAR_22 >= VAR_26->numareas)
    VAR_23 = VAR_25->areanum;
   else
    VAR_23 = VAR_5.reachabilityareaindex[VAR_26->firstarea + VAR_22];
   if (VAR_15 & VAR_1)
   {
    if (VAR_5.areasettings[VAR_23].contents & VAR_16)
    {
     VAR_8->stopevent = VAR_1;
     VAR_8->endarea = VAR_23;
     VAR_8->endcontents = VAR_5.areasettings[VAR_23].contents;
     FUNC_4(VAR_25->end, VAR_8->endpos);
     VAR_8->time += FUNC_2(VAR_9, VAR_10, VAR_25->start);
     VAR_8->time += VAR_25->traveltime;
     return VAR_7;
    }
   }
   if (VAR_15 & VAR_0)
   {
    if (VAR_23 == VAR_18)
    {
     VAR_8->stopevent = VAR_0;
     VAR_8->endarea = VAR_23;
     VAR_8->endcontents = VAR_5.areasettings[VAR_23].contents;
     FUNC_4(VAR_25->start, VAR_8->endpos);
     return VAR_7;
    }
   }
  }

  VAR_8->time += FUNC_2(VAR_9, VAR_10, VAR_25->start);
  VAR_8->time += VAR_25->traveltime;
  VAR_8->endarea = VAR_25->areanum;
  VAR_8->endcontents = VAR_5.areasettings[VAR_25->areanum].contents;
  VAR_8->endtravelflags = FUNC_3(VAR_25->traveltype);
  FUNC_4(VAR_25->end, VAR_8->endpos);

  VAR_19 = VAR_25->areanum;
  FUNC_4(VAR_25->end, VAR_24);

  if (VAR_14 && VAR_8->time > VAR_14)
   break;
 }
 if (VAR_19 != VAR_11)
  return VAR_6;
 return VAR_7;
}

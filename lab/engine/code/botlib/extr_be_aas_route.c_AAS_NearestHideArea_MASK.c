
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef void* qboolean ;
struct TYPE_6__ {int areanum; scalar_t__* start; unsigned short tmptraveltime; void* inlist; struct TYPE_6__* next; struct TYPE_6__* prev; int areatraveltimes; } ;
typedef TYPE_2__ aas_routingupdate_t ;
struct TYPE_7__ {int areanum; unsigned short traveltime; scalar_t__* end; int start; int traveltype; } ;
typedef TYPE_3__ aas_reachability_t ;
struct TYPE_8__ {int numareas; TYPE_2__* areaupdate; TYPE_1__* areasettings; TYPE_3__* reachability; int ** areatraveltimes; } ;
struct TYPE_5__ {int numreachableareas; size_t firstreachablearea; } ;


 int FUNC_0 (int) ;
 unsigned short FUNC_1 (size_t,scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned short*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (scalar_t__*,scalar_t__*) ;
 float FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 TYPE_4__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

int FUNC_10(int VAR_3, vec3_t VAR_4, int VAR_5, int VAR_6, vec3_t VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned short int VAR_16, VAR_17;
 static unsigned short int *VAR_18;
 aas_routingupdate_t *VAR_19, *VAR_20, *VAR_21, *VAR_22;
 aas_reachability_t *VAR_23;
 float VAR_24, VAR_25;
 vec3_t VAR_26, VAR_27, VAR_28;
 qboolean VAR_29;


 if (!VAR_18)
 {
  VAR_18 = (unsigned short int *) FUNC_6(VAR_0.numareas * sizeof(unsigned short int));
 }
 else
 {
  FUNC_5(VAR_18, 0, VAR_0.numareas * sizeof(unsigned short int));
 }
 VAR_17 = 0;
 VAR_15 = 0;

 VAR_29 = VAR_2;

 VAR_13 = ~VAR_9;

 VAR_21 = &VAR_0.areaupdate[VAR_5];
 VAR_21->areanum = VAR_5;
 FUNC_7(VAR_4, VAR_21->start);
 VAR_21->areatraveltimes = VAR_0.areatraveltimes[VAR_5][0];
 VAR_21->tmptraveltime = 0;

 VAR_21->next = ((void*)0);
 VAR_21->prev = ((void*)0);
 VAR_19 = VAR_21;
 VAR_20 = VAR_21;

 while (VAR_19)
 {
  VAR_21 = VAR_19;

  if (VAR_21->next) VAR_21->next->prev = ((void*)0);
  else VAR_20 = ((void*)0);
  VAR_19 = VAR_21->next;

  VAR_21->inlist = VAR_1;

  VAR_14 = VAR_0.areasettings[VAR_21->areanum].numreachableareas;
  VAR_23 = &VAR_0.reachability[VAR_0.areasettings[VAR_21->areanum].firstreachablearea];

  for (VAR_10 = 0; VAR_10 < VAR_14; VAR_10++, VAR_23++)
  {

   if (FUNC_4(VAR_23->traveltype) & VAR_13) continue;

   if (FUNC_0(VAR_23->areanum) & VAR_13) continue;

   VAR_12 = VAR_23->areanum;

   if (VAR_12 == VAR_8) continue;


   VAR_16 = VAR_21->tmptraveltime +
      FUNC_1(VAR_21->areanum, VAR_21->start, VAR_23->start) +
       VAR_23->traveltime;


   FUNC_3(VAR_7, VAR_21->start, VAR_23->end, VAR_28);
   for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
    if ((VAR_28[VAR_11] > VAR_21->start[VAR_11] && VAR_28[VAR_11] > VAR_23->end[VAR_11]) ||
     (VAR_28[VAR_11] < VAR_21->start[VAR_11] && VAR_28[VAR_11] < VAR_23->end[VAR_11]))
     break;
   if (VAR_11 < 3)
   {
    FUNC_9(VAR_7, VAR_23->end, VAR_27);
   }
   else
   {
    FUNC_9(VAR_7, VAR_28, VAR_27);
   }
   VAR_25 = FUNC_8(VAR_27);

   if (VAR_25 < 40) continue;

   FUNC_9(VAR_7, VAR_21->start, VAR_26);
   VAR_24 = FUNC_8(VAR_26);

   if (VAR_25 < VAR_24)
   {
    VAR_16 += (VAR_24 - VAR_25) * 10;
   }

   if (!VAR_29 && FUNC_2(VAR_8, VAR_12)) {
    continue;
   }

   if (VAR_17 && VAR_16 >= VAR_17) continue;

   if (!VAR_18[VAR_12] ||
     VAR_18[VAR_12] > VAR_16)
   {

    if (!FUNC_2(VAR_8, VAR_12))
    {
     VAR_17 = VAR_16;
     VAR_15 = VAR_12;
    }
    VAR_18[VAR_12] = VAR_16;
    VAR_22 = &VAR_0.areaupdate[VAR_12];
    VAR_22->areanum = VAR_12;
    VAR_22->tmptraveltime = VAR_16;

    FUNC_7(VAR_23->end, VAR_22->start);

    if (!VAR_22->inlist)
    {

     VAR_22->next = ((void*)0);
     VAR_22->prev = VAR_20;
     if (VAR_20) VAR_20->next = VAR_22;
     else VAR_19 = VAR_22;
     VAR_20 = VAR_22;
     VAR_22->inlist = VAR_2;
    }
   }
  }
 }
 return VAR_15;
}

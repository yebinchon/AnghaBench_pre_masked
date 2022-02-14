
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef float* vec3_t ;
typedef int side_t ;
struct TYPE_10__ {int numsides; float* mins; float* maxs; TYPE_4__* original_sides; } ;
typedef TYPE_1__ mapbrush_t ;
struct TYPE_11__ {int numsides; struct TYPE_11__* next; int maxs; int mins; TYPE_3__* sides; TYPE_1__* original; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_13__ {int flags; scalar_t__ winding; } ;
struct TYPE_12__ {int surf; int flags; scalar_t__ winding; } ;


 TYPE_2__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,float*,float*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 void* FUNC_3 (float*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (float*) ;
 int FUNC_5 (float*,int ) ;
 TYPE_1__* VAR_2 ;
 void** VAR_3 ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*,int) ;
 void** VAR_4 ;

bspbrush_t *FUNC_7(int VAR_5, int VAR_6,
           vec3_t VAR_7, vec3_t VAR_8)
{
 mapbrush_t *VAR_9;
 bspbrush_t *VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 vec3_t VAR_18;
 float VAR_19;

 for (VAR_12=0 ; VAR_12<2 ; VAR_12++)
 {
  FUNC_4 (VAR_18);
  VAR_18[VAR_12] = 1;
  VAR_19 = VAR_8[VAR_12];
  VAR_3[VAR_12] = FUNC_3(VAR_18, VAR_19);
  VAR_19 = VAR_7[VAR_12];
  VAR_4[VAR_12] = FUNC_3(VAR_18, VAR_19);
 }

 VAR_10 = ((void*)0);
 VAR_14 = 0;
 VAR_15 = 0;

 for (VAR_12=VAR_5 ; VAR_12<VAR_6 ; VAR_12++)
 {
  VAR_9 = &VAR_2[VAR_12];

  VAR_16 = VAR_9->numsides;
  if (!VAR_16)
   continue;


  VAR_17 = 0;
  for (VAR_13=0 ; VAR_13<VAR_16 ; VAR_13++)
   if ((VAR_9->original_sides[VAR_13].flags & VAR_0) && VAR_9->original_sides[VAR_13].winding)
    VAR_17++;





  for (VAR_13=0 ; VAR_13<3 ; VAR_13++)
   if (VAR_9->mins[VAR_13] >= VAR_8[VAR_13]
   || VAR_9->maxs[VAR_13] <= VAR_7[VAR_13])
   break;
  if (VAR_13 != 3)
   continue;




  VAR_11 = FUNC_0 (VAR_9->numsides);
  VAR_11->original = VAR_9;
  VAR_11->numsides = VAR_9->numsides;
  FUNC_6 (VAR_11->sides, VAR_9->original_sides, VAR_16*sizeof(side_t));
  for (VAR_13=0 ; VAR_13<VAR_16 ; VAR_13++)
  {
   if (VAR_11->sides[VAR_13].winding)
    VAR_11->sides[VAR_13].winding = FUNC_2 (VAR_11->sides[VAR_13].winding);
   if (VAR_11->sides[VAR_13].surf & VAR_1)
    VAR_11->sides[VAR_13].flags |= VAR_0;
  }
  FUNC_5 (VAR_9->mins, VAR_11->mins);
  FUNC_5 (VAR_9->maxs, VAR_11->maxs);




  VAR_11 = FUNC_1 (VAR_11, VAR_7, VAR_8);
  if (!VAR_11)
   continue;

  VAR_14 += VAR_17;
  VAR_15++;

  VAR_11->next = VAR_10;
  VAR_10 = VAR_11;
 }

 return VAR_10;
}

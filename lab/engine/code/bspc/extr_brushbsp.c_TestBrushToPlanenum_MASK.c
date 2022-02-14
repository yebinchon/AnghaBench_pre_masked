
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int numpoints; int * p; } ;
typedef TYPE_2__ winding_t ;
typedef double vec_t ;
typedef int qboolean ;
struct TYPE_10__ {int type; float dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_11__ {float* mins; float* maxs; int numsides; TYPE_1__* sides; } ;
typedef TYPE_4__ bspbrush_t ;
struct TYPE_8__ {int planenum; int flags; scalar_t__ texinfo; int surf; TYPE_2__* winding; } ;


 int FUNC_0 (float*,float*,TYPE_3__*) ;
 double FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_3__* VAR_11 ;

int FUNC_3 (bspbrush_t *VAR_12, int VAR_13,
       int *VAR_14, qboolean *VAR_15, int *VAR_16)
{
 int VAR_17, VAR_18, VAR_19;
 plane_t *VAR_20;
 int VAR_21 = 0;
 winding_t *VAR_22;
 vec_t VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27;
 int VAR_28;
 float VAR_29;

 *VAR_14 = 0;
 *VAR_15 = 0;

 VAR_20 = &VAR_11[VAR_13];
 {


  for (VAR_17 = 0; VAR_17 < VAR_12->numsides; VAR_17++)
  {
   VAR_19 = VAR_12->sides[VAR_17].planenum;
   if (VAR_19 >= VAR_0) FUNC_2 ("bad planenum");
   if (VAR_19 == VAR_13)
   {

    VAR_12->sides[VAR_17].flags |= VAR_6;
    return VAR_2|VAR_4;
   }
   if (VAR_19 == (VAR_13 ^ 1) )
   {

    VAR_12->sides[VAR_17].flags |= VAR_6;
    return VAR_5|VAR_4;
   }
  }


  VAR_21 = FUNC_0 (VAR_12->mins, VAR_12->maxs, VAR_20);

  if (VAR_21 != VAR_3) return VAR_21;
 }


 VAR_24 = VAR_25 = 0;

 for (VAR_17 = 0; VAR_17 < VAR_12->numsides; VAR_17++)
 {
  if (VAR_12->sides[VAR_17].texinfo == VAR_10)
   continue;
  if (!(VAR_12->sides[VAR_17].flags & VAR_7))
   continue;
  VAR_22 = VAR_12->sides[VAR_17].winding;
  if (!VAR_22) continue;
  VAR_26 = VAR_27 = 0;
  for (VAR_18 = 0; VAR_18 < VAR_22->numpoints; VAR_18++)
  {
   VAR_23 = FUNC_1(VAR_22->p[VAR_18], VAR_20->normal) - VAR_20->dist;
   if (VAR_23 > VAR_24) VAR_24 = VAR_23;
   if (VAR_23 < VAR_25) VAR_25 = VAR_23;
   if (VAR_23 > 0.1)
    VAR_26 = 1;
   if (VAR_23 < -0.1)
    VAR_27 = 1;
  }
  if (VAR_26 && VAR_27)
  {
   if ( !(VAR_12->sides[VAR_17].surf & VAR_9) )
   {
    (*VAR_14)++;
    if (VAR_12->sides[VAR_17].surf & VAR_8)
    {
     *VAR_15 = 1;
    }
   }
  }
 }

 if ( (VAR_24 > 0.0 && VAR_24 < 1.0)
  || (VAR_25 < 0.0 && VAR_25 > -1.0) )
  (*VAR_16)++;
 return VAR_21;
}

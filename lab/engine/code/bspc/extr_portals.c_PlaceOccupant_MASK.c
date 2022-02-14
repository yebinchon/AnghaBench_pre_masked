
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_6__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_7__ {size_t planenum; int contents; int * occupant; scalar_t__ occupied; struct TYPE_7__** children; } ;
typedef TYPE_2__ node_t ;
typedef int entity_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;

qboolean FUNC_3 (node_t *VAR_5, vec3_t VAR_6, entity_t *VAR_7)
{
 node_t *VAR_8;
 vec_t VAR_9;
 plane_t *VAR_10;


 VAR_8 = VAR_5;
 while(VAR_8->planenum != VAR_1)
 {
  if (VAR_8->planenum < 0 || VAR_8->planenum > VAR_3)
  {
   FUNC_1("PlaceOccupant: invalid node->planenum\n");
  }
  VAR_10 = &VAR_2[VAR_8->planenum];
  VAR_9 = FUNC_0(VAR_6, VAR_10->normal) - VAR_10->dist;
  if (VAR_9 >= 0) VAR_8 = VAR_8->children[0];
  else VAR_8 = VAR_8->children[1];
  if (!VAR_8)
  {
   FUNC_1("PlaceOccupant: invalid child %d\n", VAR_9 < 0);
  }
 }




 if (VAR_8->contents & VAR_0) return 0;

 if (VAR_8->occupied) return 0;


 VAR_8->occupant = VAR_7;

 VAR_4 = 0;



 FUNC_2(VAR_8);

 return 1;
}

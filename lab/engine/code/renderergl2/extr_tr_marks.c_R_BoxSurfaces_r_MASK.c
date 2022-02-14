
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ surfaceType_t ;
struct TYPE_15__ {int normal; } ;
struct TYPE_11__ {TYPE_8__ plane; } ;
struct TYPE_12__ {scalar_t__* data; TYPE_3__ cullinfo; TYPE_2__* shader; } ;
typedef TYPE_4__ msurface_t ;
struct TYPE_13__ {int contents; int firstmarksurface; int nummarksurfaces; struct TYPE_13__** children; TYPE_8__* plane; } ;
typedef TYPE_5__ mnode_t ;
struct TYPE_14__ {int viewCount; TYPE_1__* world; } ;
struct TYPE_10__ {int surfaceFlags; int contentFlags; } ;
struct TYPE_9__ {int* marksurfaces; int* surfacesViewCount; TYPE_4__* surfaces; } ;


 int FUNC_0 (int ,int ,TYPE_8__*) ;
 int VAR_0 ;
 double FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;

void FUNC_2(mnode_t *VAR_7, vec3_t VAR_8, vec3_t VAR_9, surfaceType_t **VAR_10, int VAR_11, int *VAR_12, vec3_t VAR_13) {

 int VAR_14, VAR_15;
 msurface_t *VAR_16;
 int *VAR_17;


 while ( VAR_7->contents == -1 ) {
  VAR_14 = FUNC_0( VAR_8, VAR_9, VAR_7->plane );
  if (VAR_14 == 1) {
   VAR_7 = VAR_7->children[0];
  } else if (VAR_14 == 2) {
   VAR_7 = VAR_7->children[1];
  } else {
   FUNC_2(VAR_7->children[0], VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
   VAR_7 = VAR_7->children[1];
  }
 }


 VAR_17 = VAR_6.world->marksurfaces + VAR_7->firstmarksurface;
 VAR_15 = VAR_7->nummarksurfaces;
 while (VAR_15--) {
  int *VAR_18;

  if (*VAR_12 >= VAR_11) break;

  VAR_18 = &VAR_6.world->surfacesViewCount[*VAR_17];
  VAR_16 = VAR_6.world->surfaces + *VAR_17;

  if ( ( VAR_16->shader->surfaceFlags & ( VAR_4 | VAR_5 ) )
   || ( VAR_16->shader->contentFlags & VAR_0 ) ) {
   *VAR_18 = VAR_6.viewCount;
  }

  else if (*(VAR_16->data) == VAR_1) {

   VAR_14 = FUNC_0( VAR_8, VAR_9, &VAR_16->cullinfo.plane );
   if (VAR_14 == 1 || VAR_14 == 2) {
    *VAR_18 = VAR_6.viewCount;
   } else if (FUNC_1(VAR_16->cullinfo.plane.normal, VAR_13) > -0.5) {

    *VAR_18 = VAR_6.viewCount;
   }
  }
  else if (*(VAR_16->data) != VAR_2 &&
    *(VAR_16->data) != VAR_3)
   *VAR_18 = VAR_6.viewCount;


  if (*VAR_18 != VAR_6.viewCount) {
   *VAR_18 = VAR_6.viewCount;
   VAR_10[*VAR_12] = VAR_16->data;
   (*VAR_12)++;
  }
  VAR_17++;
 }
}

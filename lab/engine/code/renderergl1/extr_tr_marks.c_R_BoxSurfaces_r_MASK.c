
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ surfaceType_t ;
struct TYPE_13__ {int normal; } ;
struct TYPE_9__ {TYPE_7__ plane; } ;
typedef TYPE_2__ srfSurfaceFace_t ;
struct TYPE_10__ {scalar_t__ viewCount; scalar_t__* data; TYPE_1__* shader; } ;
typedef TYPE_3__ msurface_t ;
struct TYPE_11__ {int contents; int nummarksurfaces; TYPE_3__** firstmarksurface; struct TYPE_11__** children; TYPE_7__* plane; } ;
typedef TYPE_4__ mnode_t ;
struct TYPE_12__ {scalar_t__ viewCount; } ;
struct TYPE_8__ {int surfaceFlags; int contentFlags; } ;


 int FUNC_0 (int ,int ,TYPE_7__*) ;
 int VAR_0 ;
 double FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;

void FUNC_2(mnode_t *VAR_7, vec3_t VAR_8, vec3_t VAR_9, surfaceType_t **VAR_10, int VAR_11, int *VAR_12, vec3_t VAR_13) {

 int VAR_14, VAR_15;
 msurface_t *VAR_16, **VAR_17;


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


 VAR_17 = VAR_7->firstmarksurface;
 VAR_15 = VAR_7->nummarksurfaces;
 while (VAR_15--) {

  if (*VAR_12 >= VAR_11) break;

  VAR_16 = *VAR_17;

  if ( ( VAR_16->shader->surfaceFlags & ( VAR_4 | VAR_5 ) )
   || ( VAR_16->shader->contentFlags & VAR_0 ) ) {
   VAR_16->viewCount = VAR_6.viewCount;
  }

  else if (*(VAR_16->data) == VAR_1) {

   VAR_14 = FUNC_0( VAR_8, VAR_9, &(( srfSurfaceFace_t * ) VAR_16->data)->plane );
   if (VAR_14 == 1 || VAR_14 == 2) {
    VAR_16->viewCount = VAR_6.viewCount;
   } else if (FUNC_1((( srfSurfaceFace_t * ) VAR_16->data)->plane.normal, VAR_13) > -0.5) {

    VAR_16->viewCount = VAR_6.viewCount;
   }
  }
  else if (*(surfaceType_t *) (VAR_16->data) != VAR_2 &&
    *(surfaceType_t *) (VAR_16->data) != VAR_3)
   VAR_16->viewCount = VAR_6.viewCount;


  if (VAR_16->viewCount != VAR_6.viewCount) {
   VAR_16->viewCount = VAR_6.viewCount;
   VAR_10[*VAR_12] = (surfaceType_t *) VAR_16->data;
   (*VAR_12)++;
  }
  VAR_17++;
 }
}

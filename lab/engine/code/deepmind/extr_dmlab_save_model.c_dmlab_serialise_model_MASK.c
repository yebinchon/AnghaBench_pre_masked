
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int md3Tag_t ;
struct TYPE_13__ {size_t ofsEnd; } ;
typedef TYPE_1__ md3Surface_t ;
struct TYPE_14__ {int ident; int version; int numFrames; int numTags; int numSurfaces; int ofsFrames; int ofsTags; int ofsSurfaces; int ofsEnd; int name; scalar_t__ numSkins; scalar_t__ flags; } ;
typedef TYPE_2__ md3Header_t ;
struct TYPE_15__ {int name; void* radius; void** localOrigin; void*** bounds; } ;
typedef TYPE_3__ md3Frame_t ;
typedef int byte ;
struct TYPE_16__ {scalar_t__ radius; scalar_t__* origin; scalar_t__* extents; } ;
typedef TYPE_4__ aabb_t ;
struct TYPE_17__ {size_t (* get_tag_count ) (void*) ;size_t (* get_surface_count ) (void*) ;int (* get_name ) (void*,int ,int ) ;} ;
typedef TYPE_5__ DeepmindModelGetters ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (size_t,TYPE_5__ const*,void*,TYPE_1__*,TYPE_4__*) ;
 int FUNC_6 (size_t,TYPE_5__ const*,void*,int *) ;
 int FUNC_7 (void*,int ,int ) ;
 size_t FUNC_8 (void*) ;
 size_t FUNC_9 (void*) ;

void FUNC_10(
    const DeepmindModelGetters* VAR_3,
    void* VAR_4,
    void* VAR_5) {

  md3Header_t* VAR_6 = (md3Header_t*)VAR_5;
  VAR_6->ident = FUNC_3(VAR_1);
  VAR_6->version =FUNC_3(VAR_2);
  VAR_3->get_name(VAR_4, VAR_0, VAR_6->name);
  VAR_6->flags = 0;
  VAR_6->numFrames = FUNC_3(1);
  size_t VAR_7 = VAR_3->get_tag_count(VAR_4);
  VAR_6->numTags = FUNC_3(VAR_7);
  size_t VAR_8 = VAR_3->get_surface_count(VAR_4);
  VAR_6->numSurfaces = FUNC_3(VAR_8);
  VAR_6->numSkins = 0;
  size_t VAR_9 = sizeof(md3Header_t);
  VAR_6->ofsFrames = FUNC_3(VAR_9);
  size_t VAR_10 = VAR_9 + sizeof(md3Frame_t);
  VAR_6->ofsTags = FUNC_3(VAR_10);
  size_t VAR_11 = VAR_10 + VAR_7 * sizeof(md3Tag_t);
  VAR_6->ofsSurfaces = FUNC_3(VAR_11);


  md3Tag_t* VAR_12 = (md3Tag_t*)(VAR_5 + VAR_10);
  for (size_t VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13) {
    FUNC_6(VAR_13, VAR_3, VAR_4, VAR_12 + VAR_13);
  }


  aabb_t VAR_14;
  FUNC_0(&VAR_14);
  md3Surface_t* VAR_15 = (md3Surface_t*)(VAR_5 + VAR_11);
  for (size_t VAR_16 = 0; VAR_16 < VAR_8; ++VAR_16) {
    FUNC_5(VAR_16, VAR_3, VAR_4, VAR_15, &VAR_14);
    VAR_15 = (md3Surface_t*)((byte*)VAR_15 + FUNC_3(VAR_15->ofsEnd));
  }


  FUNC_1(&VAR_14);
  md3Frame_t* VAR_17 = (md3Frame_t*)(VAR_5 + VAR_9);
  for (size_t VAR_18 = 0; VAR_18 < 3; ++VAR_18) {
    VAR_17->bounds[0][VAR_18] = FUNC_2(VAR_14.origin[VAR_18] - VAR_14.extents[VAR_18]);
    VAR_17->bounds[1][VAR_18] = FUNC_2(VAR_14.origin[VAR_18] + VAR_14.extents[VAR_18]);
    VAR_17->localOrigin[VAR_18] = FUNC_2(VAR_14.origin[VAR_18]);
  }
  VAR_17->radius = FUNC_2(VAR_14.radius);
  FUNC_4(VAR_17->name, VAR_6->name, sizeof(VAR_17->name));


  size_t VAR_19 = (byte*)VAR_15 - (byte*)VAR_5;
  VAR_6->ofsEnd = FUNC_3(VAR_19);
}

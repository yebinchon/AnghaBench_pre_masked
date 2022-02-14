
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int map; int cubeSide; } ;
typedef TYPE_4__ capShadowmapCommand_t ;
struct TYPE_11__ {scalar_t__ y; int x; } ;
struct TYPE_16__ {TYPE_3__ refdef; } ;
struct TYPE_15__ {scalar_t__ vidHeight; } ;
struct TYPE_14__ {scalar_t__ numIndexes; } ;
struct TYPE_13__ {TYPE_2__** pshadowMaps; TYPE_1__** shadowCubemaps; } ;
struct TYPE_10__ {int texnum; } ;
struct TYPE_9__ {int texnum; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 TYPE_8__ VAR_3 ;
 TYPE_7__ VAR_4 ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_6__ VAR_5 ;
 TYPE_5__ VAR_6 ;

const void *FUNC_2(const void *VAR_7)
{
 const capShadowmapCommand_t *VAR_8 = VAR_7;


 if(VAR_5.numIndexes)
  FUNC_0();

 if (VAR_8->map != -1)
 {
  if (VAR_8->cubeSide != -1)
  {
   if (VAR_6.shadowCubemaps[VAR_8->map])
   {
    FUNC_1(VAR_6.shadowCubemaps[VAR_8->map]->texnum, VAR_1 + VAR_8->cubeSide, 0, 0, 0, VAR_3.refdef.x, VAR_4.vidHeight - ( VAR_3.refdef.y + VAR_2 ), VAR_2, VAR_2);
   }
  }
  else
  {
   if (VAR_6.pshadowMaps[VAR_8->map])
   {
    FUNC_1(VAR_6.pshadowMaps[VAR_8->map]->texnum, VAR_0, 0, 0, 0, VAR_3.refdef.x, VAR_4.vidHeight - (VAR_3.refdef.y + VAR_2), VAR_2, VAR_2);
   }
  }
 }

 return (const void *)(VAR_8 + 1);
}

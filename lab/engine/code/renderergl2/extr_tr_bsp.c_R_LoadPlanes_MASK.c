
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_9__ {int dist; int * normal; } ;
typedef TYPE_2__ dplane_t ;
struct TYPE_10__ {scalar_t__* normal; int signbits; int type; void* dist; } ;
typedef TYPE_3__ cplane_t ;
struct TYPE_12__ {TYPE_3__* (* Hunk_Alloc ) (int,int ) ;int (* Error ) (int ,char*,int ) ;} ;
struct TYPE_11__ {int numplanes; TYPE_3__* planes; int name; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_2 (int ,char*,int ) ;
 TYPE_3__* FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4( lump_t *VAR_5 ) {
 int VAR_6, VAR_7;
 cplane_t *VAR_8;
 dplane_t *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = (void *)(VAR_1 + VAR_5->fileofs);
 if (VAR_5->filelen % sizeof(*VAR_9))
  VAR_3.Error (VAR_0, "LoadMap: funny lump size in %s",VAR_4.name);
 VAR_10 = VAR_5->filelen / sizeof(*VAR_9);
 VAR_8 = VAR_3.Hunk_Alloc ( VAR_10*2*sizeof(*VAR_8), VAR_2);

 VAR_4.planes = VAR_8;
 VAR_4.numplanes = VAR_10;

 for ( VAR_6=0 ; VAR_6<VAR_10 ; VAR_6++, VAR_9++, VAR_8++) {
  VAR_11 = 0;
  for (VAR_7=0 ; VAR_7<3 ; VAR_7++) {
   VAR_8->normal[VAR_7] = FUNC_0 (VAR_9->normal[VAR_7]);
   if (VAR_8->normal[VAR_7] < 0) {
    VAR_11 |= 1<<VAR_7;
   }
  }

  VAR_8->dist = FUNC_0 (VAR_9->dist);
  VAR_8->type = FUNC_1( VAR_8->normal );
  VAR_8->signbits = VAR_11;
 }
}

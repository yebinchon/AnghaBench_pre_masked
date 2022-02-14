
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_9__ {void* surfaceFlags; void* contentFlags; } ;
typedef TYPE_2__ dshader_t ;
struct TYPE_10__ {int numShaders; TYPE_2__* shaders; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int,int ) ;
 void* FUNC_3 (void*) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_4( lump_t *VAR_4 ) {
 dshader_t *VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = (void *)(VAR_2 + VAR_4->fileofs);
 if (VAR_4->filelen % sizeof(*VAR_5)) {
  FUNC_0 (VAR_0, "CMod_LoadShaders: funny lump size");
 }
 VAR_8 = VAR_4->filelen / sizeof(*VAR_5);

 if (VAR_8 < 1) {
  FUNC_0 (VAR_0, "Map with no shaders");
 }
 VAR_1.shaders = FUNC_2( VAR_8 * sizeof( *VAR_1.shaders ), VAR_3 );
 VAR_1.numShaders = VAR_8;

 FUNC_1( VAR_1.shaders, VAR_5, VAR_8 * sizeof( *VAR_1.shaders ) );

 VAR_6 = VAR_1.shaders;
 for ( VAR_7=0 ; VAR_7<VAR_8 ; VAR_7++, VAR_5++, VAR_6++ ) {
  VAR_6->contentFlags = FUNC_3( VAR_6->contentFlags );
  VAR_6->surfaceFlags = FUNC_3( VAR_6->surfaceFlags );
 }
}

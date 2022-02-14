
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filelen; int fileofs; } ;
typedef TYPE_1__ lump_t ;
typedef int byte ;
struct TYPE_5__ {int clusterBytes; int numClusters; void* visibility; int vised; } ;


 int FUNC_0 (void*,int *,int) ;
 int FUNC_1 (void*,int,int) ;
 void* FUNC_2 (int,int ) ;
 void* FUNC_3 (int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_4( lump_t *VAR_5 ) {
 int VAR_6;
 byte *VAR_7;

    VAR_6 = VAR_5->filelen;
 if ( !VAR_6 ) {
  VAR_1.clusterBytes = ( VAR_1.numClusters + 31 ) & ~31;
  VAR_1.visibility = FUNC_2( VAR_1.clusterBytes, VAR_3 );
  FUNC_1( VAR_1.visibility, 255, VAR_1.clusterBytes );
  return;
 }
 VAR_7 = VAR_2 + VAR_5->fileofs;

 VAR_1.vised = VAR_4;
 VAR_1.visibility = FUNC_2( VAR_6, VAR_3 );
 VAR_1.numClusters = FUNC_3( ((int *)VAR_7)[0] );
 VAR_1.clusterBytes = FUNC_3( ((int *)VAR_7)[1] );
 FUNC_0 (VAR_1.visibility, VAR_7 + VAR_0, VAR_6 - VAR_0 );
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int filelen; int fileofs; } ;
typedef TYPE_1__ lump_t ;
typedef int byte ;
struct TYPE_9__ {int * (* Hunk_Alloc ) (int,int ) ;} ;
struct TYPE_8__ {int numClusters; int * vis; void* clusterBytes; int * novis; } ;
struct TYPE_7__ {int * externalVisData; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,int) ;
 void* FUNC_2 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int * FUNC_3 (int,int ) ;
 int * FUNC_4 (int,int ) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_5( lump_t *VAR_5 ) {
 int VAR_6;
 byte *VAR_7;

 VAR_6 = ( VAR_3.numClusters + 63 ) & ~63;
 VAR_3.novis = VAR_2.Hunk_Alloc( VAR_6, VAR_1 );
 FUNC_1( VAR_3.novis, 0xff, VAR_6 );

    VAR_6 = VAR_5->filelen;
 if ( !VAR_6 ) {
  return;
 }
 VAR_7 = VAR_0 + VAR_5->fileofs;

 VAR_3.numClusters = FUNC_2( ((int *)VAR_7)[0] );
 VAR_3.clusterBytes = FUNC_2( ((int *)VAR_7)[1] );



 if ( VAR_4.externalVisData ) {
  VAR_3.vis = VAR_4.externalVisData;
 } else {
  byte *VAR_8;

  VAR_8 = VAR_2.Hunk_Alloc( VAR_6 - 8, VAR_1 );
  FUNC_0( VAR_8, VAR_7 + 8, VAR_6 - 8 );
  VAR_3.vis = VAR_8;
 }
}

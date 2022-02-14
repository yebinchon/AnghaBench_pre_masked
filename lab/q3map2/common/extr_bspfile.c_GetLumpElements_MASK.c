
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* lumps; } ;
typedef TYPE_2__ dheader_t ;
struct TYPE_4__ {int filelen; int fileofs; } ;


 int FUNC_0 (char*) ;

int FUNC_1( dheader_t *VAR_0, int VAR_1, int VAR_2 ) {
 int VAR_3, VAR_4;

 VAR_3 = VAR_0->lumps[VAR_1].filelen;
 VAR_4 = VAR_0->lumps[VAR_1].fileofs;

 if ( VAR_3 % VAR_2 ) {
  FUNC_0( "LoadBSPFile: odd lump size" );
 }

 return VAR_3 / VAR_2;
}

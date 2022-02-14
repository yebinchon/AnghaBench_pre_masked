
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* lumps; } ;
typedef TYPE_2__ q3_dheader_t ;
typedef int byte ;
struct TYPE_4__ {int filelen; int fileofs; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int *,int) ;

int FUNC_3( q3_dheader_t *VAR_0, int VAR_1, void **VAR_2, int VAR_3 ) {
 int VAR_4, VAR_5;

 VAR_4 = VAR_0->lumps[VAR_1].filelen;
 VAR_5 = VAR_0->lumps[VAR_1].fileofs;

 if ( VAR_4 % VAR_3 ) {
  FUNC_0 ("Q3_LoadBSPFile: odd lump size");
 }

 *VAR_2 = FUNC_1(VAR_4);

 FUNC_2( *VAR_2, (byte *)VAR_0 + VAR_5, VAR_4 );

 return VAR_4 / VAR_3;
}

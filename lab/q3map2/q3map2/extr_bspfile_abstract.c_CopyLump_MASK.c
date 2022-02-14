
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_5__ {TYPE_1__* lumps; } ;
typedef TYPE_2__ bspHeader_t ;
struct TYPE_4__ {int length; int offset; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (void*,int *,int) ;

int FUNC_3( bspHeader_t *VAR_2, int VAR_3, void *VAR_4, int VAR_5 ){
 int VAR_6, VAR_7;



 VAR_6 = VAR_2->lumps[ VAR_3 ].length;
 VAR_7 = VAR_2->lumps[ VAR_3 ].offset;


 if ( VAR_6 == 0 ) {
  return 0;
 }
 if ( VAR_6 % VAR_5 ) {
  if ( VAR_1 ) {
   FUNC_1( VAR_0, "WARNING: CopyLump: odd lump size (%d) in lump %d\n", VAR_6, VAR_3 );
   return 0;
  }
  else{
   FUNC_0( "CopyLump: odd lump size (%d) in lump %d", VAR_6, VAR_3 );
  }
 }


 FUNC_2( VAR_4, (byte*) VAR_2 + VAR_7, VAR_6 );
 return VAR_6 / VAR_5;
}

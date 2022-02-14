
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* lumps; } ;
typedef TYPE_2__ bspHeader_t ;
struct TYPE_4__ {int length; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ VAR_1 ;

int FUNC_2( bspHeader_t *VAR_2, int VAR_3, int VAR_4 ){

 if ( VAR_2->lumps[ VAR_3 ].length % VAR_4 ) {
  if ( VAR_1 ) {
   FUNC_1( VAR_0, "WARNING: GetLumpElements: odd lump size (%d) in lump %d\n", VAR_2->lumps[ VAR_3 ].length, VAR_3 );
   return 0;
  }
  else{
   FUNC_0( "GetLumpElements: odd lump size (%d) in lump %d", VAR_2->lumps[ VAR_3 ].length, VAR_3 );
  }
 }


 return VAR_2->lumps[ VAR_3 ].length / VAR_4;
}

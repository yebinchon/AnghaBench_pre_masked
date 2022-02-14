
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* length; void* offset; } ;
typedef TYPE_1__ bspLump_t ;
struct TYPE_5__ {TYPE_1__* lumps; } ;
typedef TYPE_2__ bspHeader_t ;
typedef int FILE ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (int *) ;

void FUNC_3( FILE *VAR_0, bspHeader_t *VAR_1, int VAR_2, const void *VAR_3, int VAR_4 ){
 bspLump_t *VAR_5;
 char VAR_6[3] = {'\0', '\0', '\0'};
 unsigned int VAR_7 = VAR_4;
 unsigned int VAR_8 = ((VAR_7 + 3) / 4) * 4 - VAR_7;



 VAR_5 = &VAR_1->lumps[ VAR_2 ];
 VAR_5->offset = FUNC_0( FUNC_2( VAR_0 ) );
 VAR_5->length = FUNC_0( VAR_4 );


 FUNC_1( VAR_0, VAR_3, VAR_4 );
 if ( VAR_8 != 0 ) {
  FUNC_1( VAR_0, VAR_6, VAR_8 );
 }
}

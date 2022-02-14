
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int r; int g; int b; scalar_t__ a; } ;
typedef TYPE_1__ ddsColor_t ;
typedef int ddsColorBlock_t ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_2__ ddsBuffer_t ;
typedef int ddsAlphaBlockExplicit_t ;


 int FUNC_0 (unsigned int*,int *,int,unsigned int) ;
 int FUNC_1 (unsigned int*,int *,int,unsigned int*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3( ddsBuffer_t *VAR_0, int VAR_1, int VAR_2, unsigned char *VAR_3 ){
 int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned int *VAR_8, VAR_9;
 ddsColorBlock_t *VAR_10;
 ddsAlphaBlockExplicit_t *VAR_11;
 ddsColor_t VAR_12[ 4 ];



 VAR_6 = VAR_1 / 4;
 VAR_7 = VAR_2 / 4;


 VAR_12[ 0 ].a = 0;
 VAR_12[ 0 ].r = 0xFF;
 VAR_12[ 0 ].g = 0xFF;
 VAR_12[ 0 ].b = 0xFF;
 VAR_9 = *( (unsigned int*) &VAR_12[ 0 ] );


 for ( VAR_5 = 0; VAR_5 < VAR_7; VAR_5++ )
 {

  VAR_10 = (ddsColorBlock_t*) ( (size_t) VAR_0->data + VAR_5 * VAR_6 * 16 );


  for ( VAR_4 = 0; VAR_4 < VAR_6; VAR_4++, VAR_10++ )
  {

   VAR_11 = (ddsAlphaBlockExplicit_t*) VAR_10;


   VAR_10++;
   FUNC_2( VAR_10, VAR_12 );


   VAR_8 = (unsigned int*) ( VAR_3 + VAR_4 * 16 + ( VAR_5 * 4 ) * VAR_1 * 4 );
   FUNC_1( VAR_8, VAR_10, VAR_1, (unsigned int*) VAR_12 );


   FUNC_0( VAR_8, VAR_11, VAR_1, VAR_9 );
  }
 }


 return 0;
}

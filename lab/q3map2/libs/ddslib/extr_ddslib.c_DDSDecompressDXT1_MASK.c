
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ddsColor_t ;
typedef int ddsColorBlock_t ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ ddsBuffer_t ;


 int FUNC_0 (unsigned int*,int *,int,unsigned int*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2( ddsBuffer_t *VAR_0, int VAR_1, int VAR_2, unsigned char *VAR_3 ){
 int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned int *VAR_8;
 ddsColorBlock_t *VAR_9;
 ddsColor_t VAR_10[ 4 ];



 VAR_6 = VAR_1 / 4;
 VAR_7 = VAR_2 / 4;


 for ( VAR_5 = 0; VAR_5 < VAR_7; VAR_5++ )
 {

  VAR_9 = (ddsColorBlock_t*) ( (size_t) VAR_0->data + VAR_5 * VAR_6 * 8 );


  for ( VAR_4 = 0; VAR_4 < VAR_6; VAR_4++, VAR_9++ )
  {
   FUNC_1( VAR_9, VAR_10 );
   VAR_8 = (unsigned int*) ( VAR_3 + VAR_4 * 16 + ( VAR_5 * 4 ) * VAR_1 * 4 );
   FUNC_0( VAR_8, VAR_9, VAR_1, (unsigned int*) VAR_10 );
  }
 }


 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void traceWinding_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int VAR_2 ;
 int FUNC_1 (void*,void*,int) ;
 int VAR_3 ;
 void* FUNC_2 (int) ;
 void* VAR_4 ;

__attribute__((used)) static int FUNC_3( traceWinding_t *VAR_5 ){
 int VAR_6;
 void *VAR_7;



 if ( VAR_1 >= 0 && VAR_1 < VAR_3 ) {
  VAR_6 = VAR_1;
 }
 else
 {

  VAR_6 = VAR_3;


  if ( VAR_3 >= VAR_2 ) {

   VAR_2 += VAR_0;
   VAR_7 = FUNC_2( VAR_2 * sizeof( *VAR_4 ) );
   if ( VAR_4 != ((void*)0) ) {
    FUNC_1( VAR_7, VAR_4, VAR_3 * sizeof( *VAR_4 ) );
    FUNC_0( VAR_4 );
   }
   VAR_4 = (traceWinding_t*) VAR_7;
  }
 }


 FUNC_1( &VAR_4[ VAR_6 ], VAR_5, sizeof( *VAR_4 ) );
 if ( VAR_6 == VAR_3 ) {
  VAR_3++;
 }
 VAR_1 = -1;


 return VAR_6;
}

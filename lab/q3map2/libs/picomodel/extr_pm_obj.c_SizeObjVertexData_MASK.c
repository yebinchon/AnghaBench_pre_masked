
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TObjVertexData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*,int,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static TObjVertexData *FUNC_3(
 TObjVertexData *VAR_1, int VAR_2,
 int *VAR_3, int *VAR_4 ){
 int VAR_5;


 if ( VAR_2 < 1 ) {
  return ((void*)0);
 }
 if ( VAR_3 == ((void*)0) || VAR_4 == ((void*)0) ) {
  return ((void*)0);

 }

 if ( VAR_1 && ( VAR_2 < *VAR_4 ) ) {
  *VAR_3 = VAR_2;
  return VAR_1;
 }

 if ( VAR_1 == ((void*)0) ) {

  VAR_5 = ( VAR_2 > VAR_0 ) ?
        VAR_2 : VAR_0;







  VAR_1 = (TObjVertexData *)
      FUNC_0( sizeof( TObjVertexData ) * VAR_5 );


  if ( VAR_1 == ((void*)0) ) {
   return ((void*)0);
  }


  *VAR_4 = VAR_5;
  *VAR_3 = VAR_2;
  return VAR_1;
 }

 if ( VAR_2 == *VAR_4 ) {
  VAR_5 = ( *VAR_4 + VAR_0 );







  VAR_1 = (TObjVertexData *)
      FUNC_1( (void *)&VAR_1,
         sizeof( TObjVertexData ) * ( *VAR_4 ),
         sizeof( TObjVertexData ) * ( VAR_5 ) );


  if ( VAR_1 == ((void*)0) ) {
   return ((void*)0);
  }


  *VAR_4 = VAR_5;
  *VAR_3 = VAR_2;
  return VAR_1;
 }

 return ((void*)0);
}

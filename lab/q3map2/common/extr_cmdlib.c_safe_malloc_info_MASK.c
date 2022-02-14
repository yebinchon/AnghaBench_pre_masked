
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;
 void* FUNC_1 (size_t,int) ;

void *FUNC_2( size_t VAR_0, char* VAR_1 ){
 void *VAR_2;

 VAR_2 = FUNC_1( VAR_0, 1 );
 if ( !VAR_2 ) {
  FUNC_0( "%s: safe_malloc failed on allocation of %i bytes", VAR_1, VAR_0 );
 }

 return VAR_2;
}

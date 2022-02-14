
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef float* vec4_t ;
typedef int qboolean ;
typedef int color ;
struct TYPE_2__ {int (* SetColor ) (float*) ;} ;


 size_t FUNC_0 (char const) ;
 int FUNC_1 (float*,int ,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int,int,float,char const) ;
 int * VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (float*) ;
 int FUNC_5 (float*) ;
 int FUNC_6 (float*) ;
 int FUNC_7 (float*) ;

void FUNC_8( int VAR_2, int VAR_3, float VAR_4, const char *VAR_5, float *VAR_6, qboolean VAR_7,
  qboolean VAR_8 ) {
 vec4_t VAR_9;
 const char *VAR_10;
 int VAR_11;


 VAR_9[0] = VAR_9[1] = VAR_9[2] = 0;
 VAR_9[3] = VAR_6[3];
 VAR_1.SetColor( VAR_9 );
 VAR_10 = VAR_5;
 VAR_11 = VAR_2;
 while ( *VAR_10 ) {
  if ( !VAR_8 && FUNC_2( VAR_10 ) ) {
   VAR_10 += 2;
   continue;
  }
  FUNC_3( VAR_11+2, VAR_3+2, VAR_4, *VAR_10 );
  VAR_11 += VAR_4;
  VAR_10++;
 }



 VAR_10 = VAR_5;
 VAR_11 = VAR_2;
 VAR_1.SetColor( VAR_6 );
 while ( *VAR_10 ) {
  if ( FUNC_2( VAR_10 ) ) {
   if ( !VAR_7 ) {
    FUNC_1( VAR_9, VAR_0[FUNC_0(*(VAR_10+1))], sizeof( VAR_9 ) );
    VAR_9[3] = VAR_6[3];
    VAR_1.SetColor( VAR_9 );
   }
   if ( !VAR_8 ) {
    VAR_10 += 2;
    continue;
   }
  }
  FUNC_3( VAR_11, VAR_3, VAR_4, *VAR_10 );
  VAR_11 += VAR_4;
  VAR_10++;
 }
 VAR_1.SetColor( ((void*)0) );
}

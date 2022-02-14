
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int byte ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int ,int ) ;

qboolean FUNC_4( byte *VAR_3, int VAR_4 )
{
 FILE *VAR_5;

 VAR_5 = FUNC_1( "/dev/urandom", "r" );
 if( !VAR_5 )
  return VAR_1;

 FUNC_3( VAR_5, ((void*)0), VAR_0, 0 );

 if( FUNC_2( VAR_3, sizeof( byte ), VAR_4, VAR_5 ) != VAR_4 )
 {
  FUNC_0( VAR_5 );
  return VAR_1;
 }

 FUNC_0( VAR_5 );
 return VAR_2;
}

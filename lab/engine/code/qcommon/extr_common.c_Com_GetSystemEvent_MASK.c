
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int evTime; } ;
typedef TYPE_1__ sysEvent_t ;
typedef int ev ;


 int FUNC_0 (int ,int ,int ,int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

sysEvent_t FUNC_7( void )
{
 sysEvent_t VAR_5;
 char *VAR_6;


 if ( VAR_2 > VAR_4 )
 {
  VAR_4++;
  return VAR_3[ ( VAR_4 - 1 ) & VAR_0 ];
 }


 VAR_6 = FUNC_1();
 if ( VAR_6 )
 {
  char *VAR_7;
  int VAR_8;

  VAR_8 = FUNC_6( VAR_6 ) + 1;
  VAR_7 = FUNC_3( VAR_8 );
  FUNC_5( VAR_7, VAR_6 );
  FUNC_0( 0, VAR_1, 0, 0, VAR_8, VAR_7 );
 }


 if ( VAR_2 > VAR_4 )
 {
  VAR_4++;
  return VAR_3[ ( VAR_4 - 1 ) & VAR_0 ];
 }


 FUNC_4( &VAR_5, 0, sizeof( VAR_5 ) );
 VAR_5.evTime = FUNC_2();

 return VAR_5;
}

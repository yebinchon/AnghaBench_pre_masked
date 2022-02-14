
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int videos ;
typedef int qboolean ;
typedef int key ;
struct TYPE_2__ {scalar_t__ demoversion; } ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__ VAR_3 ;

qboolean FUNC_4( int VAR_4 ) {
 char VAR_5[16];
 char VAR_6[VAR_0];

 if( !VAR_4 ) {
  return VAR_1;
 }

 if( VAR_3.demoversion && VAR_4 != 8 ) {
  return VAR_1;
 }

 FUNC_3( "g_spVideos", VAR_6, sizeof(VAR_6) );

 FUNC_0( VAR_5, sizeof(VAR_5), "tier%i", VAR_4 );
 if( FUNC_2( FUNC_1( VAR_6, VAR_5 ) ) ) {
  return VAR_2;
 }

 return VAR_1;
}

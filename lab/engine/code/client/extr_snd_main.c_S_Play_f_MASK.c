
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sfxHandle_t ;
struct TYPE_2__ {int (* StartLocalSound ) (scalar_t__,int ) ;scalar_t__ (* RegisterSound ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;

void FUNC_5( void ) {
 int VAR_3;
 int VAR_4;
 sfxHandle_t VAR_5;

 if( !VAR_2.RegisterSound || !VAR_2.StartLocalSound ) {
  return;
 }

 VAR_4 = FUNC_0();

 if( VAR_4 < 2 ) {
  FUNC_2 ("Usage: play <sound filename> [sound filename] [sound filename] ...\n");
  return;
 }

 for( VAR_3 = 1; VAR_3 < VAR_4; VAR_3++ ) {
  VAR_5 = VAR_2.RegisterSound( FUNC_1(VAR_3), VAR_1 );

  if( VAR_5 ) {
   VAR_2.StartLocalSound( VAR_5, VAR_0 );
  }
 }
}

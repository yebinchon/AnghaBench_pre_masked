
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int integer; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,scalar_t__*,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_6( void ) {
 FUNC_1( "journal" );
 VAR_1 = FUNC_2 ("journal", "0", VAR_0);
 if ( !VAR_1->integer ) {
  return;
 }

 if ( VAR_1->integer == 1 ) {
  FUNC_0( "Journaling events\n");
  VAR_3 = FUNC_5( "journal.dat" );
  VAR_2 = FUNC_5( "journaldata.dat" );
 } else if ( VAR_1->integer == 2 ) {
  FUNC_0( "Replaying journaled events\n");
  FUNC_4( "journal.dat", &VAR_3, VAR_4 );
  FUNC_4( "journaldata.dat", &VAR_2, VAR_4 );
 }

 if ( !VAR_3 || !VAR_2 ) {
  FUNC_3( "com_journal", "0" );
  VAR_3 = 0;
  VAR_2 = 0;
  FUNC_0( "Couldn't open journal files\n" );
 }
}

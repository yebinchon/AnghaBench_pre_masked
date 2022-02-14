
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* widthInChars; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 TYPE_1__ VAR_14 ;
 void* VAR_15 ;
 TYPE_1__* VAR_16 ;

void FUNC_5 (void) {
 int VAR_17;

 VAR_13 = FUNC_3 ("con_notifytime", "3", 0);
 VAR_12 = FUNC_3 ("scr_conspeed", "3", 0);
 VAR_11 = FUNC_3("con_autoclear", "1", VAR_1);

 FUNC_4( &VAR_14 );
 VAR_14.widthInChars = VAR_15;
 for ( VAR_17 = 0 ; VAR_17 < VAR_0 ; VAR_17++ ) {
  FUNC_4( &VAR_16[VAR_17] );
  VAR_16[VAR_17].widthInChars = VAR_15;
 }
 FUNC_0( );

 FUNC_1 ("toggleconsole", VAR_9);
 FUNC_1 ("togglemenu", VAR_10);
 FUNC_1 ("messagemode", VAR_8);
 FUNC_1 ("messagemode2", VAR_5);
 FUNC_1 ("messagemode3", VAR_6);
 FUNC_1 ("messagemode4", VAR_7);
 FUNC_1 ("clear", VAR_3);
 FUNC_1 ("condump", VAR_4);
 FUNC_2( "condump", VAR_2 );
}

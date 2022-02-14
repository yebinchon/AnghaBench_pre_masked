
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_6( void ) {
 int VAR_5;
 char *VAR_6;
 cvar_t *VAR_7;

 VAR_5 = FUNC_0();
 VAR_6 = FUNC_2(0);

 if ( VAR_5 < 2 ) {
  FUNC_3 ("usage: %s <variable> <value>\n", VAR_6);
  return;
 }
 if ( VAR_5 == 2 ) {
  FUNC_4();
  return;
 }

 VAR_7 = FUNC_5 (FUNC_2(1), FUNC_1(2), VAR_4);
 if( !VAR_7 ) {
  return;
 }
 switch( VAR_6[3] ) {
  case 'a':
   if( !( VAR_7->flags & VAR_0 ) ) {
    VAR_7->flags |= VAR_0;
    VAR_3 |= VAR_0;
   }
   break;
  case 'u':
   if( !( VAR_7->flags & VAR_2 ) ) {
    VAR_7->flags |= VAR_2;
    VAR_3 |= VAR_2;
   }
   break;
  case 's':
   if( !( VAR_7->flags & VAR_1 ) ) {
    VAR_7->flags |= VAR_1;
    VAR_3 |= VAR_1;
   }
   break;
 }
}

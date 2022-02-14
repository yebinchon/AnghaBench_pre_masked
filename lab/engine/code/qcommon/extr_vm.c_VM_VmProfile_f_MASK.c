
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numSymbols; TYPE_2__* symbols; } ;
typedef TYPE_1__ vm_t ;
struct TYPE_8__ {double profileCount; int symName; struct TYPE_8__* next; } ;
typedef TYPE_2__ vmSymbol_t ;


 int FUNC_0 (char*,double,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__**) ;
 TYPE_2__** FUNC_2 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (TYPE_2__**,int,int,int ) ;

void FUNC_4( void ) {
 vm_t *VAR_2;
 vmSymbol_t **VAR_3, *VAR_4;
 int VAR_5;
 double VAR_6;

 if ( !VAR_1 ) {
  return;
 }

 VAR_2 = VAR_1;

 if ( !VAR_2->numSymbols ) {
  return;
 }

 VAR_3 = FUNC_2( VAR_2->numSymbols * sizeof( *VAR_3 ) );
 VAR_3[0] = VAR_2->symbols;
 VAR_6 = VAR_3[0]->profileCount;
 for ( VAR_5 = 1 ; VAR_5 < VAR_2->numSymbols ; VAR_5++ ) {
  VAR_3[VAR_5] = VAR_3[VAR_5-1]->next;
  VAR_6 += VAR_3[VAR_5]->profileCount;
 }

 FUNC_3( VAR_3, VAR_2->numSymbols, sizeof( *VAR_3 ), VAR_0 );

 for ( VAR_5 = 0 ; VAR_5 < VAR_2->numSymbols ; VAR_5++ ) {
  int VAR_7;

  VAR_4 = VAR_3[VAR_5];

  VAR_7 = 100 * (float) VAR_4->profileCount / VAR_6;
  FUNC_0( "%2i%% %9i %s\n", VAR_7, VAR_4->profileCount, VAR_4->symName );
  VAR_4->profileCount = 0;
 }

 FUNC_0("    %9.0f total\n", VAR_6 );

 FUNC_1( VAR_3 );
}

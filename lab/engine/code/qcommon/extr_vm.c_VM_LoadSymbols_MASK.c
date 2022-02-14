
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int instructionCount; int* instructionPointers; int numSymbols; TYPE_2__* symbols; int name; } ;
typedef TYPE_1__ vm_t ;
struct TYPE_7__ {int symValue; int symName; struct TYPE_7__* next; } ;
typedef TYPE_2__ vmSymbol_t ;
typedef int symbols ;
typedef int name ;
struct TYPE_8__ {int integer; } ;


 char* FUNC_0 (char**) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char*,void**) ;
 TYPE_2__* FUNC_6 (int,int ) ;
 int VAR_0 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (char*) ;

void FUNC_10( vm_t *VAR_3 ) {
 union {
  char *c;
  void *v;
 } VAR_4;
 char *VAR_5, *VAR_6;
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 vmSymbol_t **VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;


 if ( !VAR_1->integer ) {
  return;
 }

 FUNC_1(VAR_3->name, VAR_7, sizeof(VAR_7));
 FUNC_3( VAR_8, sizeof( VAR_8 ), "vm/%s.map", VAR_7 );
 FUNC_5( VAR_8, &VAR_4.v );
 if ( !VAR_4.c ) {
  FUNC_2( "Couldn't load symbol file: %s\n", VAR_8 );
  return;
 }

 VAR_15 = VAR_3->instructionCount;


 VAR_5 = VAR_4.c;
 VAR_9 = &VAR_3->symbols;
 VAR_11 = 0;

 while ( 1 ) {
  VAR_6 = FUNC_0( &VAR_5 );
  if ( !VAR_6[0] ) {
   break;
  }
  VAR_14 = FUNC_7( VAR_6 );
  if ( VAR_14 ) {
   FUNC_0( &VAR_5 );
   FUNC_0( &VAR_5 );
   continue;
  }

  VAR_6 = FUNC_0( &VAR_5 );
  if ( !VAR_6[0] ) {
   FUNC_2( "WARNING: incomplete line at end of file\n" );
   break;
  }
  VAR_12 = FUNC_7( VAR_6 );

  VAR_6 = FUNC_0( &VAR_5 );
  if ( !VAR_6[0] ) {
   FUNC_2( "WARNING: incomplete line at end of file\n" );
   break;
  }
  VAR_13 = FUNC_9( VAR_6 );
  VAR_10 = FUNC_6( sizeof( *VAR_10 ) + VAR_13, VAR_2 );
  *VAR_9 = VAR_10;
  VAR_9 = &VAR_10->next;
  VAR_10->next = ((void*)0);


  if ( VAR_12 >= 0 && VAR_12 < VAR_15 ) {
   VAR_12 = VAR_3->instructionPointers[VAR_12];
  }

  VAR_10->symValue = VAR_12;
  FUNC_8( VAR_10->symName, VAR_6, VAR_13 + 1 );

  VAR_11++;
 }

 VAR_3->numSymbols = VAR_11;
 FUNC_2( "%i symbols parsed from %s\n", VAR_11, VAR_8 );
 FUNC_4( VAR_4.v );
}

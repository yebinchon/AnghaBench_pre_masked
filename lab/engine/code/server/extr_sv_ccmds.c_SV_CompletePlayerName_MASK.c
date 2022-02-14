
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int namesPtr ;
typedef int names ;
struct TYPE_4__ {int name; int state; } ;
typedef TYPE_1__ client_t ;
struct TYPE_6__ {int integer; } ;
struct TYPE_5__ {TYPE_1__* clients; } ;


 int VAR_0 ;
 int FUNC_0 (char const**,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (void*,int,int,int ) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_4( char *VAR_5, int VAR_6 ) {
 if( VAR_6 == 2 ) {
  char VAR_7[VAR_1][VAR_2];
  const char *VAR_8[VAR_1];
  client_t *VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;

  VAR_11 = 0;
  VAR_12 = VAR_3->integer;

  for ( VAR_10=0, VAR_9=VAR_4.clients ; VAR_10 < VAR_12; VAR_10++,VAR_9++ ) {
   if ( !VAR_9->state ) {
    continue;
   }
   if( VAR_10 >= VAR_1 ) {
    break;
   }
   FUNC_2( VAR_7[VAR_11], VAR_9->name, sizeof(VAR_7[VAR_11]) );
   FUNC_1( VAR_7[VAR_11] );

   VAR_8[VAR_11] = VAR_7[VAR_11];

   VAR_11++;
  }
  FUNC_3( (void*)VAR_8, VAR_11, sizeof( VAR_8[0] ), VAR_0 );

  FUNC_0( VAR_8, VAR_11 );
 }
}

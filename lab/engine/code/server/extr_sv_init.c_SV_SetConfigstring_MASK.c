
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; TYPE_2__* gentity; int * csUpdated; } ;
typedef TYPE_3__ client_t ;
struct TYPE_13__ {scalar_t__ state; scalar_t__ restarting; int * configstrings; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {TYPE_3__* clients; } ;
struct TYPE_8__ {int svFlags; } ;
struct TYPE_9__ {TYPE_1__ r; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (char const*,int ) ;
 TYPE_6__ VAR_8 ;
 TYPE_5__* VAR_9 ;
 TYPE_4__ VAR_10 ;

void FUNC_5 (int VAR_11, const char *VAR_12) {
 int VAR_13;
 client_t *VAR_14;

 if ( VAR_11 < 0 || VAR_11 >= VAR_4 ) {
  FUNC_0 (VAR_3, "SV_SetConfigstring: bad index %i", VAR_11);
 }

 if ( !VAR_12 ) {
  VAR_12 = "";
 }


 if ( !FUNC_4( VAR_12, VAR_8.configstrings[ VAR_11 ] ) ) {
  return;
 }


 FUNC_3( VAR_8.configstrings[VAR_11] );
 VAR_8.configstrings[VAR_11] = FUNC_1( VAR_12 );



 if ( VAR_8.state == VAR_5 || VAR_8.restarting ) {


  for (VAR_13 = 0, VAR_14 = VAR_10.clients; VAR_13 < VAR_9->integer ; VAR_13++, VAR_14++) {
   if ( VAR_14->state < VAR_0 ) {
    if ( VAR_14->state == VAR_1 )
     VAR_14->csUpdated[ VAR_11 ] = VAR_7;
    continue;
   }

   if ( VAR_11 == VAR_2 && VAR_14->gentity && (VAR_14->gentity->r.svFlags & VAR_6) ) {
    continue;
   }

   FUNC_2(VAR_14, VAR_11);
  }
 }
}

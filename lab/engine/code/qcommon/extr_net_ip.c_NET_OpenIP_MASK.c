
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int string; } ;
struct TYPE_10__ {int string; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {scalar_t__ integer; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int,int *,int*) ;
 scalar_t__ FUNC_4 (int ,int,int*) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_6__* VAR_7 ;
 TYPE_5__* VAR_8 ;
 TYPE_4__* VAR_9 ;
 TYPE_3__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 TYPE_1__* VAR_12 ;

void FUNC_6( void ) {
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_15 = VAR_10->integer;
 VAR_16 = VAR_11->integer;

 FUNC_2();





 if(VAR_7->integer & VAR_3)
 {
  for( VAR_13 = 0 ; VAR_13 < 10 ; VAR_13++ )
  {
   VAR_5 = FUNC_3(VAR_9->string, VAR_16 + VAR_13, &VAR_4, &VAR_14);
   if (VAR_5 != VAR_1)
   {
    FUNC_1( "net_port6", VAR_16 + VAR_13 );
    break;
   }
   else
   {
    if(VAR_14 == VAR_0)
     break;
   }
  }
  if(VAR_5 == VAR_1)
   FUNC_0( "WARNING: Couldn't bind to a v6 ip address.\n");
 }

 if(VAR_7->integer & VAR_2)
 {
  for( VAR_13 = 0 ; VAR_13 < 10 ; VAR_13++ ) {
   VAR_6 = FUNC_4( VAR_8->string, VAR_15 + VAR_13, &VAR_14 );
   if (VAR_6 != VAR_1) {
    FUNC_1( "net_port", VAR_15 + VAR_13 );

    if (VAR_12->integer)
     FUNC_5( VAR_15 + VAR_13 );

    break;
   }
   else
   {
    if(VAR_14 == VAR_0)
     break;
   }
  }

  if(VAR_6 == VAR_1)
   FUNC_0( "WARNING: Couldn't bind to a v4 ip address.\n");
 }
}

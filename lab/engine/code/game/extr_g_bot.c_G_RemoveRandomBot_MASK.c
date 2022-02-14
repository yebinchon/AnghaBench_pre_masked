
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sessionTeam; } ;
struct TYPE_9__ {scalar_t__ connected; } ;
struct TYPE_11__ {TYPE_1__ sess; TYPE_2__ pers; } ;
typedef TYPE_4__ gclient_t ;
struct TYPE_10__ {int svFlags; } ;
struct TYPE_14__ {TYPE_3__ r; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {TYPE_4__* clients; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int) ;

int FUNC_2( int VAR_8 ) {
 int VAR_9;
 gclient_t *VAR_10;

 for ( VAR_9=0 ; VAR_9< VAR_4.integer ; VAR_9++ ) {
  VAR_10 = VAR_5.clients + VAR_9;
  if ( VAR_10->pers.connected != VAR_0 ) {
   continue;
  }
  if ( !(VAR_3[VAR_9].r.svFlags & VAR_2) ) {
   continue;
  }
  if ( VAR_8 >= 0 && VAR_10->sess.sessionTeam != VAR_8 ) {
   continue;
  }
  FUNC_0( VAR_1, FUNC_1("clientkick %d\n", VAR_9) );
  return VAR_7;
 }
 return VAR_6;
}


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


struct TYPE_10__ {scalar_t__ connected; int netname; } ;
struct TYPE_9__ {int sessionTeam; } ;
struct TYPE_11__ {TYPE_3__ pers; TYPE_2__ sess; } ;
typedef TYPE_4__ gclient_t ;
struct TYPE_8__ {int svFlags; } ;
struct TYPE_14__ {TYPE_1__ r; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {TYPE_4__* clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;

int FUNC_1( const char *VAR_5, int VAR_6 ) {
 int VAR_7, VAR_8;
 gclient_t *VAR_9;

 VAR_8 = 0;
 for ( VAR_7=0 ; VAR_7< VAR_3.integer ; VAR_7++ ) {
  VAR_9 = VAR_4.clients + VAR_7;
  if ( VAR_9->pers.connected == VAR_0 ) {
   continue;
  }
  if ( !(VAR_2[VAR_7].r.svFlags & VAR_1) ) {
   continue;
  }
  if ( VAR_6 >= 0 && VAR_9->sess.sessionTeam != VAR_6 ) {
   continue;
  }
  if ( VAR_5 && FUNC_0( VAR_5, VAR_9->pers.netname ) ) {
   continue;
  }
  VAR_8++;
 }
 return VAR_8;
}

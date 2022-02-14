
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ name; int (* func ) (TYPE_2__*) ;} ;
typedef TYPE_1__ ucmd_t ;
typedef scalar_t__ qboolean ;
struct TYPE_10__ {scalar_t__ state; int name; } ;
typedef TYPE_2__ client_t ;
struct TYPE_12__ {scalar_t__ state; } ;
struct TYPE_11__ {int clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_5__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_1__* VAR_9 ;

void FUNC_7( client_t *VAR_10, const char *VAR_11, qboolean VAR_12 ) {
 ucmd_t *VAR_13;
 qboolean VAR_14 = VAR_5;

 FUNC_2( VAR_11 );


 for (VAR_13=VAR_9 ; VAR_13->name ; VAR_13++) {
  if (!FUNC_5 (FUNC_1(0), VAR_13->name) ) {
   VAR_13->func( VAR_10 );
   VAR_14 = VAR_6;
   break;
  }
 }

 if (VAR_12) {

  if (!VAR_13->name && VAR_7.state == VAR_3 && (VAR_10->state == VAR_0 || VAR_10->state == VAR_1)) {
   FUNC_0();
   FUNC_4( VAR_4, VAR_2, VAR_10 - VAR_8.clients );
  }
 }
 else if (!VAR_14)
  FUNC_3( "client text ignored for %s: %s\n", VAR_10->name, FUNC_1(0) );
}

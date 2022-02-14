
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ netsrc_t ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_1__ netadr_t ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,void const*,TYPE_1__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int,void const*,TYPE_1__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,void const*,TYPE_1__) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_2__* VAR_7 ;

void FUNC_4( netsrc_t VAR_8, int VAR_9, const void *VAR_10, netadr_t VAR_11 ) {


 if ( VAR_6->integer && *(int *)VAR_10 == -1 ) {
  FUNC_0 ("send packet %4i\n", VAR_9);
 }

 if ( VAR_11.type == VAR_2 ) {
  FUNC_2 (VAR_8, VAR_9, VAR_10, VAR_11);
  return;
 }
 if ( VAR_11.type == VAR_1 ) {
  return;
 }
 if ( VAR_11.type == VAR_0 ) {
  return;
 }

 if ( VAR_8 == VAR_3 && VAR_5->integer > 0 ) {
  FUNC_1( VAR_9, VAR_10, VAR_11, VAR_5->integer );
 }
 else if ( VAR_8 == VAR_4 && VAR_7->integer > 0 ) {
  FUNC_1( VAR_9, VAR_10, VAR_11, VAR_7->integer );
 }
 else {
  FUNC_3( VAR_9, VAR_10, VAR_11 );
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int retrieved; int pending; scalar_t__ startTime; int print; scalar_t__ time; int address; int string; } ;
typedef TYPE_2__ serverStatus_t ;
typedef int netadr_t ;
struct TYPE_6__ {scalar_t__ port; } ;
struct TYPE_9__ {int retrieved; TYPE_1__ address; } ;
struct TYPE_8__ {scalar_t__ integer; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*,int *,int ) ;
 int VAR_2 ;
 int FUNC_5 (char*,int ,int) ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_6( char *VAR_7, char *VAR_8, int VAR_9 ) {
 int VAR_10;
 netadr_t VAR_11;
 serverStatus_t *VAR_12;


 if ( !VAR_7 ) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   VAR_3[VAR_10].address.port = 0;
   VAR_3[VAR_10].retrieved = VAR_6;
  }
  return VAR_5;
 }

 if ( !FUNC_4( VAR_7, &VAR_11, VAR_1) ) {
  return VAR_5;
 }
 VAR_12 = FUNC_0( VAR_11 );

 if ( !VAR_8 ) {
  VAR_12->retrieved = VAR_6;
  return VAR_5;
 }


 if ( FUNC_2( VAR_11, VAR_12->address) ) {

  if (!VAR_12->pending) {
   FUNC_5(VAR_8, VAR_12->string, VAR_9);
   VAR_12->retrieved = VAR_6;
   VAR_12->startTime = 0;
   return VAR_6;
  }

  else if ( VAR_12->startTime < FUNC_1() - VAR_4->integer ) {
   VAR_12->print = VAR_5;
   VAR_12->pending = VAR_6;
   VAR_12->retrieved = VAR_5;
   VAR_12->time = 0;
   VAR_12->startTime = FUNC_1();
   FUNC_3( VAR_2, VAR_11, "getstatus" );
   return VAR_5;
  }
 }

 else if ( VAR_12->retrieved ) {
  VAR_12->address = VAR_11;
  VAR_12->print = VAR_5;
  VAR_12->pending = VAR_6;
  VAR_12->retrieved = VAR_5;
  VAR_12->startTime = FUNC_1();
  VAR_12->time = 0;
  FUNC_3( VAR_2, VAR_11, "getstatus" );
  return VAR_5;
 }
 return VAR_5;
}

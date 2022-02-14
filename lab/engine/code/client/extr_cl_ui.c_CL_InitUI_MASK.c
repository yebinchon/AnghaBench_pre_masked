
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vmInterpret_t ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {int uiStarted; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *,int ,...) ;
 int * FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;

void FUNC_5( void ) {
 int VAR_16;
 vmInterpret_t VAR_17;


 VAR_17 = FUNC_1("vm_ui");
 if(VAR_11)
 {

  if(VAR_17 != VAR_10 && VAR_17 != VAR_9)
   VAR_17 = VAR_10;
 }

 VAR_15 = FUNC_3( "ui", VAR_2, VAR_17 );
 if ( !VAR_15 ) {
  FUNC_0( VAR_4, "VM_Create on UI failed" );
 }


 VAR_16 = FUNC_2( VAR_15, VAR_6 );
 if (VAR_16 == VAR_8) {


  FUNC_2( VAR_15, VAR_7, (VAR_12.state >= VAR_1 && VAR_12.state < VAR_0));
 }
 else if (VAR_16 != VAR_5) {

  FUNC_4( VAR_15 );
  VAR_15 = ((void*)0);

  FUNC_0( VAR_3, "User Interface is version %d, expected %d", VAR_16, VAR_5 );
  VAR_13.uiStarted = VAR_14;
 }
 else {

  FUNC_2( VAR_15, VAR_7, (VAR_12.state >= VAR_1 && VAR_12.state < VAR_0) );
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {int (* EndFrameCustomView ) () ;int (* BeginFrameCustomView ) () ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_6 ;

void FUNC_3() {
 if ( !VAR_5 ) {
  return;
 }

 if ( !VAR_6 || VAR_3.state != VAR_0) {
  return;
 }
 VAR_4.BeginFrameCustomView( );
 FUNC_0( VAR_2, VAR_1 );
 VAR_4.EndFrameCustomView( );
}

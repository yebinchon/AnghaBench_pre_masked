
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {int vislines; scalar_t__ xadjust; int color; } ;
struct TYPE_4__ {int (* SetColor ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int,scalar_t__,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,int,char) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 (int ) ;

void FUNC_4 (void) {
 int VAR_10;

 if ( VAR_5.state != VAR_0 && !(FUNC_1( ) & VAR_1 ) ) {
  return;
 }

 VAR_10 = VAR_6.vislines - ( VAR_3 * 2 );

 VAR_9.SetColor( VAR_6.color );

 FUNC_2( VAR_6.xadjust + 1 * VAR_4, VAR_10, ']' );

 FUNC_0( &VAR_7, VAR_6.xadjust + 2 * VAR_4, VAR_10,
  VAR_2 - 3 * VAR_4, VAR_8, VAR_8 );
}

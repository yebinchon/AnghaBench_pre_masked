
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {scalar_t__ id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_4__ {int (* action ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2( void* VAR_5, int VAR_6 ) {
 qboolean VAR_7;

 if( VAR_6 != VAR_1 ) {
  return;
 }

 FUNC_0();

 if( ((menucommon_s*)VAR_5)->id == VAR_0 ) {
  VAR_7 = VAR_2;
 }
 else {
  VAR_7 = VAR_3;
 }

 if( VAR_4.action ) {
  VAR_4.action( VAR_7 );
 }
}

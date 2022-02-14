
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sfxHandle_t ;
struct TYPE_2__ {int menu; int list; scalar_t__ refreshservers; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int *) ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static sfxHandle_t FUNC_6( int VAR_9 ) {
 if( VAR_9 == VAR_4 && VAR_6.refreshservers ) {
  FUNC_2();
  return VAR_8;
 }

 if( ( VAR_9 == VAR_0 || VAR_9 == VAR_2 ) && ( VAR_7 == VAR_5 ) &&
  ( FUNC_5( &VAR_6.menu) == &VAR_6.list ) ) {
  FUNC_0();
  FUNC_3();
  return VAR_8;
 }

 if( VAR_9 == VAR_3 || VAR_9 == VAR_1 ) {
  FUNC_2();
  FUNC_1();
 }


 return FUNC_4( &VAR_6.menu, VAR_9 );
}
